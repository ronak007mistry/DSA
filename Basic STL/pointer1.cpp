#include<bits/stdc++.h>


using namespace std;

int main() {

	int a;
    int *p;
    p = &a; // address of a
    a = 10;
    cout<<p<<endl;
    cout<<*p<<endl; // *p - value at address pointed by p
    cout<<&a<<endl;
    *p = 12;
    cout<<a<<endl;

    // Pointer arithmetic
    cout<<p<<endl;
    cout<<p+1<<endl;

    int b=1025;
    int *p1 = &b;
    cout<<"size of integer "<<sizeof(int)<<endl;
    cout<<"Address "<<p1<<" Value "<<*p1<<endl;

    // void pointer - generic pointer
    void *p0;
    p0 = p;
    cout<<p0<<endl;


	return 0;
}