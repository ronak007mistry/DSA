#include<bits/stdc++.h>
using namespace std;


int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, sum,temp;
        int maxSum=0;
        cin >> n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                cin>>temp;
                v[i]=temp; 
            }
        }

        for(int i=0;i<n;i++){
            sum = (v[i]*v[i+1]) + max(v[i]-v[i+1],v[i+1]-v[i]);
            if(sum>maxSum){
                maxSum=sum;
            }

        }
        cout<<maxSum<<"\n";


        


    }
	return 0;
}