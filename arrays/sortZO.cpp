#include<iostream>

#include<bits/stdc++.h>

int main(){
    std::vector<int>arr = std::vector<int>();
    int n;
    std::cin>>n;
    for(int i= 0;i<n;i++){
        int val;
        std :: cin>>val;
        arr.push_back(val);
    }

    // sorting logic
    int start = 0;
    int end = arr.size()-1;

    while(start<end){
        if(arr[start] == 0){
            start++;
        }
        if(arr[start]== 1){
            std::swap(arr[start],arr[end]);
            end--;
        }
    }

    for(int i= 0;i<n;i++){
        std::cout<<arr[i];
    }



}