#include <iostream>
using namespace std;
int main(){
    int num;
    int rev=0;
    cout<<"enter the number to be reversed"<<endl;
    cin>>num;
    while(num!=0){
        int digit=num%10;
        num = num/10;
        rev=rev*10+digit;
    }
    cout<<"the reverse of the numberis :"<< rev<<endl;
    
    return 0;
}