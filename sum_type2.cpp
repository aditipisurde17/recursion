#include <bits/stdc++.h>
using namespace std;

// n= 3 
// f(3) => 3+f(2)
// f(2) => 2+f(1)
// f(1) => 1+f(0)=0

int print(int n){
    if (n==0) 
        return 0;

    return n + print(n-1);

}
int main(){
    int n;
    cin>>n;
    cout<< print(n);

}