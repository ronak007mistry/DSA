
#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is: \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int x;
    cin>>x;

    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == x){
                found = true;
                cout<<"Number found at "<<i<<" "<<j<<"\n";
            }
            
        }
    }

    if(found){
        cout<<"Element is found \n";
    }
    else {
        cout<<"Element is not found \n";
    }
    
    
     
    return 0;
}