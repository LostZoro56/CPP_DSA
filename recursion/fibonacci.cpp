#include<iostream>
using namespace std;

int climbStairs(int n) {
    if(n == 0) return 1;
    if(n<1) return 0;

    return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
    int n = 44;
    int res = climbStairs(n);
    cout<<res;
}