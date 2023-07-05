#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findMaximumWeightNode(vector<vector<int>>& maze, vector<int>& weights) {
    int n = maze.size();
    vector<int> inDegree(n, 0);

    // Calculate the in-degree of each node
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (maze[i][j] != -1) {
                inDegree[j]++;
            }
        }
    }

    priority_queue<pair<int, int>> pq;

    // Add nodes with in-degree 0 to the priority queue
    for (int i = 0; i < n; i++) {
        if (inDegree[i] == 0) {
            pq.push({ weights[i], i });
        }
    }

    int maxWeightNode = -1;
    int maxWeight = 0;

    while (!pq.empty()) {
        int node = pq.top().second;
        int weight = pq.top().first;
        pq.pop();

        if (weight > maxWeight) {
            maxWeight = weight;
            maxWeightNode = node;
        }

        for (int i = 0; i < n; i++) {
            if (maze[node][i] != -1) {
                if (--inDegree[i] == 0) {
                    pq.push({ weights[i], i });
                }
            }
        }
    }

    return maxWeightNode;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    int maxWeightNode = findMaximumWeightNode(maze, weights);
    cout << maxWeightNode << endl;

    return 0;
}