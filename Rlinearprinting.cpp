// n to 1

#include <bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if (i>n) return ;
    cout<<n<< endl;
    print(n-1,i);
}

int main(){
    int n;
    cin>>n;
    print(n,1);
}