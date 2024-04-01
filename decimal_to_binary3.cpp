#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter the binary number"<<endl;
    cin>>a;
    cin>>b;
    int power=1;
    int decimal=0;
    if(a>b){
        while(a>0){
            int paritydigit=a%10;
            decimal+=paritydigit*power;
            power*=2;
            a/=10;
        }
        cout<<decimal<<endl;
    }else{
        while(b>0){
            int paritydigit=b%10;
            decimal+=paritydigit*power;
            power*=2;
            b/=10;
        }
        cout<<decimal<<endl;
    }
}