#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t,count=0;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x;
	    while(x>0){
	        y=x%10;
	        if(y==4){
	            count++;
	        }
	        x=x/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

// int main()
// {
// 	vector<int> arr;
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		int k;cin>>k;
// 		arr.push_back(k);
// 	}
// 	for(auto i:arr){
// 		cout<<i;
// 	}
// }
//{
	// 	int t;
	// cin>>t;
	// while(t--){
	//     int n,x=0,y=0;
	//     cin>>n;
	//     std::vector<string> s ;
	//     string str;
	//     for(int i=0;i<n;i++){
	//         cin>>str;
	//         s.push_back(str);
	//     }
	//     for(int i=0;i<n;i++){
	//         if(s[i]=="START38"){
	//             x++;
	//         }else{
	//             y++;
	//         }
	//     }
	//     cout<<x<<" "<<y<<endl;
	// }
	// return 0;

	// int n;
	// cin>>n;
	// vector<string> s;
	// string str;
	// for(int i=0;i<n;i++){
	// 	cin>>str;
	// 	s.push_back(str);
	// }
	// for(auto i:s){
	// 	cout<<i<<" "<<endl;;
	// }
	// for(int i=0;i<n;i++){
	// 	if(s[i]=="almaaz"){
	// 		cout<<"hello"<<" ";
	// 	}
	// }
	// if(s[0]=="almaaz"){
	// 	cout<<"yes";
	// }
//}

// using namespace std;
// void solve(){
// 	int n;
// 	cin>>n;
// 	set<int> s;
// 	int x;
// 	for(int i=0;i<n;i++){
// 		cin>>x;
// 		s.insert(x);
// 	}
// 	cout<<s.size()<<endl;
// }
// void solve(){
//     int n,count=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//     }
//     if(count==0){
//         cout<<n<<endl;
//     }
//     else{
//         cout<<n-count<<endl;
//     }
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    solve();
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// 	float x=0.1;
// 	cout<<x;
	// float x=0.1;
	// if(x==0.1){
	// 	cout<<"a";
	// }else{
	// 	cout<<"b";
	// }
//}
// {
// int a=10,b=5,c=3;
// b != !a;
// c=!!a;
// cout<<b<<c;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,mam=-1,count=0;
// 		cin>>n;
// 		int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        mam = max(mam,arr[i]);
	        
// 	    }
// 		for(int i=0;i<n;i++){
// 			if(mam==arr[i]){
// 				count++;
// 			}
// 		}
// 	    if(count%2==0){
// 	        cout<<"zenyk"<<endl;
// 	    }else{
// 	        cout<<"marichka"<<endl;
// 	    }
	    
// 	}
// 	return 0;
// }


// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,count=0,max=0;
// 	    string s;
// 	    cin>>n;
// 	    cin>>s;
// 	    int size = s.length();
// 	    for(int i=0;i<s[i]!='\0';i++){
// 	        int temp = s[i];
// 			int j=i;
// 	        while(j<n){
// 				// cout<<i<<"hello"<<endl;
// 	            if(s[j+1]==temp){
// 	                count++;
// 					// cout<<"count"<<count<<endl;
// 	            }
// 	            j++;
// 	        }
// 			// cout<<i<<endl;
// 	        if(count>max){
// 	            max=count;
// 				// cout<<"max="<<max<<endl;
// 	        }
// 	    }
// 		if(count==0){
// 			cout<<-1<<endl;
// 		}
// 		else{
// 			cout<<n-(max+1)<<endl;
// 		}
	    
// 	}
// 	return 0;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	int arr[10]={6,2,5,5,4,5,6,3,7,6};
// 	cin>>t;
// 	while(t--){
	    
// 	    long int a,b,c;
// 	    int sum=0;
// 	    cin>>a>>b;
// 	    c=a+b;
// 	    while(c>0){
// 	    int mod=c%10;
// 	    sum=sum+arr[mod];
// 	    c = c/10;
	        
// 	    }
// 	    cout<<sum<<endl;
// 	}
// 	return 0;
// }