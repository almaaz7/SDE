#include<iostream>
#include<vector>
using namespace std;
void subseq(string str,string output,int i,vector<string>& arr)
{
    if(i>=str.length()){
        arr.push_back(output);
        return;
    }
    //exclude
    subseq(str,output,i+1,arr);
    //include
    output.push_back(str[i]);
    subseq(str,output,i+1,arr);
     

}
int main()
{
    string str = "xy";
    string output = "";
    vector<string> arr;
    int i = 0;
    subseq(str,output,i,arr);
    for(string i:arr){
        cout<<"["<<i<<"]";
    }
}