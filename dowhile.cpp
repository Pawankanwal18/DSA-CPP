#include<iostream>
using namespace std;

int main()
{

    
    int n;
    int sum=0;
   cout<<"Enter the inpute";
   cin>>n;
//   i=1;
//   do{
//     cout<<i<<endl;

//     i++;
//   } 
//   while(i<=n) ;


 int i=1;
 do{  
    sum =sum+i;
   
    i++;
 }
while(i<=n);

 cout<<sum<<endl;
}