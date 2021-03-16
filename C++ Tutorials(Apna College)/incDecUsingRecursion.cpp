#include <iostream>
using namespace std;

void dec(int n){
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    cout<<n<<"\n";
    dec(n-1);
}

void inc(int n){

    if(n==1){
        cout<<1<<"\n";
        return;
    }

    inc(n-1);
    cout<<n<<"\n";
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}