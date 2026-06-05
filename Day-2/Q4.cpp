#include <iostream>
using namespace std;
int main(){
    int num;
    int rev=0;
    cout<<"Enter the number to print:"<< endl;
    cin>>num;
    int original =num;
    for(;num!=0;num=num/10){
        int digit=num%10;
        rev=rev*10+digit;
    }
    cout<<"The reversed number is :"<<rev<<endl;
    if(original==rev){
        cout<<"the number entered is palindrome. "<<endl;
    }
    else{
        cout<<"Number is not palindrome."<<endl;
    }
    return 0;
}