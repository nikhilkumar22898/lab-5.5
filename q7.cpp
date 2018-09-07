//write a program to print a hollow mirrored rhombus star pattern
// library
#include<iostream>
using namespace std;
//write main fuction
int main()
  {
 int i;
   for(i=0;i<=4;i++)  //increase spaces
    {
     for(int j=1;j<=i;j++)
        {
          cout<<" ";  //print spaces
         }
     //checking for first or last line
    if(i==0 || i==4){
     for(int k=1;k<=5;k++)
      {
      cout<<"*";//print stars on first and last line
        }
         }
    else
      cout<<"*   *";  //print other than first and last line
      cout<<endl;      //next line
   }
   return 0;
}
