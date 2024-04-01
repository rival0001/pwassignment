#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"ener the number of decimal numbers u want to enter"<<endl;
    cin>>n;
    int num;
    int sum=0;
    int binarysum=0;
    cout<<"enter the 1st n  decimal numbers"<<endl;
    for(int i=0; i<n; i++){
        cin>>num;
        sum+=num;
    }
    cout<<"sum in decimal = "<<sum<<endl;
    //binary conversion of sum
    int power=1;
    while(sum>0){
        int paritydigit=sum%2;
        binarysum+=paritydigit*power;
        power*=10;
        sum=sum/2;
    }
    cout<<"sum in binary= "<<binarysum<<endl;
}

