#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int dfs(int node, vector<int>& edge, vector<bool>& visited, vector<int>& nodes) {
    visited[node] = true;
    nodes.push_back(node);

    int next_node = edge[node];
    if (next_node == -1 || visited[next_node]) {
        auto it = find(nodes.begin(), nodes.end(), next_node);
        if (it != nodes.end()) {
            int cycle_start = it - nodes.begin();
            int cycle_sum = 0;
            for (int i = cycle_start; i < nodes.size(); i++) {
                cycle_sum += nodes[i];
            }
            return cycle_sum;
        }
    }
    else {
        return dfs(next_node, edge, visited, nodes);
    }

    return -1;
}

int findLargestCycleSum(vector<int>& edge) {
    int n = edge.size();
    vector<bool> visited(n, false);
    int largest_cycle_sum = -1;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            vector<int> nodes;
            int cycle_sum = dfs(i, edge, visited, nodes);
            if (cycle_sum > largest_cycle_sum) {
                largest_cycle_sum = cycle_sum;
            }
        }
    }

    return largest_cycle_sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> edge(n);
    for (int i = 0; i < n; i++) {
        cin >> edge[i];
    }

    int largest_cycle_sum = findLargestCycleSum(edge);
    cout << largest_cycle_sum << endl;

    return 0;
}