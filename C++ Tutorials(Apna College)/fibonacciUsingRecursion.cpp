#include <iostream>
using namespace std;

int fibonacci(int n){

    // if(n==1){
    //     return 1;
    // }
    // if(n==0){
    //     return 0;
    // }

    if(n==0 || n==1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2) ;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,p;
    cin >> n>>p;

    cout<<fibonacci(n)<<endl;
    return 0;
}