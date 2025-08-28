#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter the marks of maths:";
    cin>>a;
    cout<<"enter the marks of science:";
    cin>>b;
    cout<<"enter the marks of english:";
    cin>>c;
    if(a>=33 && b>=33 && c>=33){
        cout<<"you are pass";
    }
    else{
        cout<<"you are fail";
    }
    return 0;
}