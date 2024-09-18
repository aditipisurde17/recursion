// from 1 to n 
// since we use i+1 now here we dont use +1 we have to use -(minus)

#include <bits/stdc++.h>
using namespace std;
        //  3 ,    3
void print(int i,int n){
    //  3<1 =no
    if (i<1) return ; 
    // 3-1 =2 
    print (i-1,n); // hence print (2, 3) executes and similar (1,3) and (0,3 ) where (0,3) returns and prints (1,3) = 1 then 2 then 3
    cout<< i; // 1,2 ,3 

}

int main (){
    int n;
    cin>>n;
    print(n,n);
    return 0;
}
