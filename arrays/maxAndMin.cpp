#include<iostream>
#include<vector>
#include<climits>

int main(){
    std::vector<int>arr = std::vector<int>();
    int n;
    std::cin>>n;
    for(int i= 0;i<n;i++){
        int val;
        std :: cin>>val;
        arr.push_back(val);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    for(int val : arr){
        if(val>max) max = val;
        if(val<min) min = val;
    }
    std::cout<<"max: "<<max<<'\n';
    std::cout<<"min: "<<min;
}