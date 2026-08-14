#include<iostream>
using namespace std;

int main()
{
// int i,j;
// for(j=1;j<=5;j++)
// {
    
//     for(i= 1;i<=j;i++)
//     {
//         cout<<"*" <<" ";
//     }
//     cout<<endl;
// }

int row,col;

for(row=1;row<=5;row++)
{
    for(col=1;col<=row;col++)
    {
        cout<<row<<" ";
    }
    cout<<endl;
}
}