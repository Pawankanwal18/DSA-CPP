//decimal to binary


#include<iostream>
using namespace std;

int main(){

    int num ;
    
    cout<<"Enter the input:";
    cin>>num;
    int rem, ans=0, mul=1;
   
    while(num>0)
    {
        rem=num%2;  //reminder part

        num/=2; //quotient part

        ans+= rem*mul, //ans
        
        mul *=10;  //mul
    }
    cout<<ans<<endl;
}