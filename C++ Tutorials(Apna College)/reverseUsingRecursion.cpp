#include <iostream>
#include <string>
using namespace std;

void reverse(string s){
    if(s.length() == 0){
        return;
    }
    string restOfString = s.substr(1);
    reverse(restOfString);
    cout<<s[0];

}



int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    reverse("binod");


    return 0;
}