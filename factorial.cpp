#include <bits/stdc++.h>
using namespace std;

// n calls therefore time complexity is O(n)

int print(int n){
    if (n==0) 
        return 1;

    return n * print(n-1);

}
int main(){
    int n;
    cin>>n;
    cout<< print(n);

}