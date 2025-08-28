#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"enter the third number:";
    cin>>c;
    if(a>b>c){
        cout<<"a is the largest number";
    }
    else if (b>c>a){
        cout<<"b is the largest numbber";
    }
    else {
        cout <<"c is the largest number";
    }
    return 0;
}
