//backtracking from n to 1

#include <bits/stdc++.h>
using namespace std;

void print(int n , int i){
    if (n>i) return ;
    print (i,n-1);
    cout<<n;
}

int main(){
    int n;
    cin>>n;
    print(n,1);
    return 0;
}

// not solved yet
