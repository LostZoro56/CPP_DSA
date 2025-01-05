#include<iostream>
#include<vector>
using namespace std;

void subSeq(string str, vector<string>& ans,int i,int n, string res){
    if(i>=n){
        ans.push_back(res);  
        return;  
    }
    subSeq(str,ans,i+1,n,res+ str[i]);
    subSeq(str,ans,i+1,n,res);

}


int main(){
    string str = "abc";
    vector<string> ans;
    int n = str.length();
    subSeq(str,ans,0,n,"");

    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}