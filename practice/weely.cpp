#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	    int a[4],count=0;
	    for(int i=0;i<4;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<4;i++){
	    if(a[i]>=10){
	        count++;
	    }
	    }
	    cout<<count;
	
	return 0;
}
