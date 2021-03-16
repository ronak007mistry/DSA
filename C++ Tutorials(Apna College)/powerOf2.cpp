
#include<bits/stdc++.h>

using namespace std;

bool ispowerof2(int n){
    return (n && !(n & (n-1)));
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout<<ispowerof2(16)<<endl;
    cout<<ispowerof2(18)<<endl;
    cout<<ispowerof2(32)<<endl;
    cout<<ispowerof2(66)<<endl;
    cout<<ispowerof2(0)<<endl;
    
    return 0;
} 