#include <iostream>
using namespace std;

int power(int n, int p){

    if(p==0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n * prevPower;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,p;
    cin >> n>>p;

    cout<<power(n,p)<<endl;
    return 0;
}