#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void findMinElement(vector<int>&arr , int target,int currentSum,int& minE,int currentElements){
    if(target-currentSum == 0){
        minE = currentElements<minE? currentElements: minE;
        return; 
    } 
    if(target-currentSum <0) 
        return;

    for(int i = 0;i<arr.size();i++){
        findMinElement(arr,target,currentSum+arr[i],minE,currentElements+1);
    }
    return;
}

int main(){
    int target = 8;
    vector<int>arr = {1,2,3};
    int minE = INT_MAX;
    findMinElement(arr,target,0,minE,0);

    cout<<minE;
}