#include <iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }
    int prevFactorial = factorial(n-1);
    return n * prevFactorial;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,p;
    cin >> n>>p;

    cout<<factorial(n)<<endl;
    return 0;
}