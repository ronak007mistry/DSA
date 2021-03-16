
#include<bits/stdc++.h>

using namespace std;


//  Kadane Algorithm.. O(n)


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum,currSum);

    }

    cout<<maxSum<<endl;
     
    return 0;
}