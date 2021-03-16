#include <iostream>
#include <string>
using namespace std;

string moveallX(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0]; 
    string ans = moveallX(s.substr(1));

    if(ch =='x'){
        return ans+ch;
    }
    return (ch+ans);
}



int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    cout<<moveallX("aaxaaaxabbxbbbbxbeeccccxdddddxixiiij")<<endl;


    return 0;
} 