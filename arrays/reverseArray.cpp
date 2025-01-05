#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
   vector<int> arr = vector<int>({1,2,34,5});
    int i = 0;
    int j = 3;
    while(i<2){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i = 0;i<4;i++){
        cout<<arr[i];
    }

}