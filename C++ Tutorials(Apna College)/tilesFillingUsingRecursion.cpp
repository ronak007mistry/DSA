#include <iostream>
#include <string>
using namespace std;

int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tilingWays(n-1) + tilingWays(n-2);
}


int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout<<tilingWays(4)<<endl ;

    return 0;
} 