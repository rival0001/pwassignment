#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the decimal number"<<endl;
    cin>>n;
    int binary=0;
    int power =1;
    int count=0;
    while(n>0){
        int paritydigit = n%2;
        binary+=paritydigit*power;
        power*=10;
        n/=2;
    }
    while(binary>0){
        if(binary%10==0){
            count++;
        }
        binary/=10;
    }
    cout<<count;

}