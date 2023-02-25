#include<iostream>
using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,x,k,r;
// 	    cin>>n>>x>>k;
// 	    if(x<=k){
// 	        r = k/x;
// 	        if(r<=n){
// 	            cout<<r<<endl;
// 	        }else{
// 	            cout<<n<<endl;
// 	        }
// 	    }
// 	    else{
// 	        cout<<0<<endl;
// 	    }
// 	}
// 	return 0;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string x;
// 	    cin>>x;
// 	    for(int i=0;x[i]!='\0';i++){
// 	        if(x[i]=='A'){
// 	            x[i]='T';
// 	        }
// 	        else if(x[i]=='T'){
// 	            x[i]='A';
// 	        }
// 	        else if(x[i]=='G'){
// 	            x[i]='C';
// 	        }else{
// 	            x[i]='G';
// 	        }
// 	    }
// 	    cout<<x<<endl;
// 	}
// 	return 0;
// }


// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string x;
//         int count=0;
// 	    cin>>x;
// 	    for(int i=0;i<x.length();i++){
// 	        if(x[i]=='7'){
// 	            count++;
// 	        }
//             cout<<i;
// 	    }
// 	    if(count>0){
// 	        cout<<"yes"<<endl;
// 	    }
// 	    else{
// 	        cout<<"no"<<endl;
// 	    }
// 	}
// 	return 0;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y,count=0;
// 	    cin>>x>>y;
// 	    if(y<=x){
// 	        cout<<count<<endl;
// 	    }else{
// 	        for(int i=x;i<y;i+=8){
// 	            count++;
// 	        }
// 	        cout<<count<<endl;
// 	    }
// 	}
// 	return 0;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x,y,z,ti;
// 	    cin>>x>>y>>z;
// 	    ti = y/x;
// 	    z=z-ti;
//         if(z<0){
//             cout<<0;
//         }else{
//         cout<<z;    
//         }
        
// 	}
// 	return 0;
// }
// int main() {
// 	// your code goes here
// 	int t;
// // 	string arr[100] = {"NORMAL","HUGE","SMALL"};
// 	cin>>t;
// 	while(t--){
// 	    int x;
// 	    cin>>x;
// 	    switch(x%3){
// 	        case 0:
// 	        cout<<"NORMAL";break;
// 	        case 1:
// 	        cout<<"HUGE";break;
// 	        case 2:
// 	        cout<<"SMALL";break;
// 	    }
	    
// 	}
// 	return 0;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int x;
// 	    cin>>x;
// 	    if(x%3==0){
// 	        cout<<"0"<<endl;
// 	    }
// 	    else{
// 	        int y=x/3;
// 	        y = y*3+3;
// 	        x = y-x;
// 	        cout<<x<<endl;
// 	    }
// 	}
// 	return 0;
// }
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){

//         for(int j=0;j<n;j++){
//             cout<<count;
//             count++;
//         }
//         endl;
//     }
// }
// {hollow pyramid
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             if(j==0 || j==2*i){
//                 cout<<"*";
//             }
//             // else if(){
//             //     cout<<"*";
//             // }
//             else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
//     }
// }
/*
{//ineverted full pyramid(three loop)
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}*/

/*{//full pyramid
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-(i+1)){
                cout<<" ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}*/
/*{//full pyramid
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if(j<n-i){
                cout<<" ";
            }
            else(cout<<"*");
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/
/*{//hollo half inverted pyramid
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    
            if(i==0 || i==n-1){
                for(int j=n;j>i;j--){cout<<"*";}
                
            }else{
                cout<<"*";
                for(int j=n;j>i+2;j--){
                    cout<<" ";
                }
                cout<<"*";
                
            }
        
        cout<<endl;
    }
}*/