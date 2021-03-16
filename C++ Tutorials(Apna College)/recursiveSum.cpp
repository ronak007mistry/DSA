#include <iostream>
using namespace std;

int Sum(int n){

    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return n + prevSum;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin >> a;

    cout<<Sum(a)<<endl;
    return 0;
}