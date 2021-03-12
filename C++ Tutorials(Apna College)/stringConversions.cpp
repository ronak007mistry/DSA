
#include<bits/stdc++.h>

using namespace std;


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    string str = "sdfhuighgna";

    // convert into upper case

    for(int i=0;i<str.size();i++){
        if(str[i] >='a' || str[i] <= 'z'){
            str[i]-=32;
        }
    }
    cout<< str<<endl;

    // convert into lower case

    string str1 = "DFGFDGRTRGFHG";
    for(int i=0;i<str1.size();i++){
        if(str1[i] >='A' || str1[i] <= 'Z'){
            str1[i]+=32;
        }
    }
    cout<< str1<<endl;

    // inbulit functions

    string s= "jsdkfhjksdfhsd";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    

    
    return 0;
}