#include <bits/stdc++.h>
using namespace std;
 //time complexity ic O(n)
 //space complexity is O(n) by using stack space 

void name(int i , int n){
    if (i>n) return ;
    cout<< "Aditi" << endl;
    name(i+1,n);


}
int main(){ 
    int n;
    cin>>n;
    name(1,n);
    return 0;
}