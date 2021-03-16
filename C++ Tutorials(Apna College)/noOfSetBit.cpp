
#include<bits/stdc++.h>

using namespace std;

int numberofones(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout<<numberofones(5)<<endl;
    cout<<numberofones(66)<<endl;
    cout<<numberofones(16)<<endl;
    cout<<numberofones(7)<<endl;
    
    return 0;
} 