  
//   print 1 to 10

  #include<iostream>
  using namespace std;

  int main(){

    int i=1 ,n;

    // i=1;
    // while(i<=10)
    // {
    //     cout<<i<<" ";
    //     i++;
    //     cout<<endl;
    // }
    
    cout<<"Enter the inpute ";
    cin>>n;
   
    // while(i<=10)
    // {
    //     cout <<n*i<<" ";
    //     i++;
    //     cout<<endl;
    // }
     
//    while(i<=n)
//    {
   
//     if(n%i==0)
//     {
//         cout<<i;
//     }
//         i++;
//         cout<<endl;
//     }
    
//    }


// while(i<=n)
// {

//     if(i%2==0)
//     {
//     cout<<i<<endl;
//     }
//     i++;
// }

  while(i<=n)
  {
    if(i % 2 != 0)
    {
    cout<<i<<endl;
    }
    i++;
  }
  }
  


