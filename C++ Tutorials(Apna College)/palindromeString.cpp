
#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 1;

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check=0;
            break;
        }

    }

    if(check){
        cout<<"Palindrome word\n";
    }
    else {
        cout<<"Word is not palindrome\n";
    }
     
    return 0;
}