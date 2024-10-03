#include <bits/stdc++.h>
using namespace std;

// we will use recursion using ##two pointers 
// one at first other at last

// [2, 3, 5,3 ,6]
//  l          r

//now swap


// by using 1 pointer i will swap index 1 to last
//  [2, 3, 5,3 ,6]
//   i          ^
//   | _ _ _ _ _|

// for middle one condition would be i>=n/2

void f(int i , int arr[] , int n){
    if (i>=n/2)  return ;
    swap(arr[i] ,arr[n-i-1]);
    f(i+1,arr, n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0; i<n;i++) cin>>arr[i];
    f(0.,arr, n);
    for (int i =0; i<n; i++) cout<< arr[i] <<" ";
    return 0;
    }




