
#include <bits/stdc++.h>

using namespace std;

void primeSieve(int n){
    int prime[n+1] = {0};

    for(int i=2;i<=n;i++){
        if(prime[i] == 0){
            for(int j=i*i;j<=n;j+=i){
                prime[j] = 1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    primeSieve(n);

    return 0;
}