
#include<bits/stdc++.h>

using namespace std;



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    string str = "sdfhuighgna";

    int freq[26];

    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0;i<str.length();i++){
        freq[str[i] - 'a']++;
    }
    
    char ans='a';
    int maxFre = 0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxFre){
            maxFre = freq[i];
            ans = i+'a';
        }
    }
    cout<<maxFre<<" "<<ans<<endl;
    
    return 0;
}