
#include<bits/stdc++.h>

using namespace std;


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    string str;
    // cin>>str;
    // cout<<str;
    getline(cin,str);
    cout<<str<<endl;
    string str1(5, 'n');
    cout<<str1<<endl; 

    // appending

    // string s1 = "fam";
    // string s2 = "ily";

    // cout<<s1+s2<<endl;

    // s1.append(s2);
    // cout<<s1<<endl;

    string s1 = "abc";
    string s2 = "xyz";

    cout<<s2.compare(s1)<<endl;

    string n="dskfhdfhio";
    sort(n.begin(), n.end());
    cout<<n<<endl;

    
    return 0;
}