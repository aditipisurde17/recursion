#include<bits/stdc++.h>
using namespace std;

int cnt =0;
void fn(){
    if (cnt ==3) return ;
    cout<< cnt << endl;
    cnt++;
    fn();
}

int main (){
    fn();
    return 0;
}