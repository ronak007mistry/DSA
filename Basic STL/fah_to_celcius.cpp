#include<iostream>

using namespace std;

int main() {

    int fah;
    cin>> fah;

    // int cel=(5)*(fah-32)/9;

    int cel = (int)((5.0/9)*(fah-32));

    cout<<cel<<endl;
     

}