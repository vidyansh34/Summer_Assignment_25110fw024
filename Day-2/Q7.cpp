#include <iostream>
using namespace std;
int main(){

    
    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;
    int product =1;
    for(;num!=0;num=num/10){
        int digit=num%10;
        product=product*digit;
    }
    cout<<"the product of the digit is :"<< product<<endl;
    
    return 0;
} 
