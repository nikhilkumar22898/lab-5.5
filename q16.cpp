//write a program to print a pyramid star pattern
//library
  # include <iostream>
  using namespace std;

//main function
  int main () {
     //declarations
       int n = 5,i,j;
      
     //loops
       for(j = 0;j<n;j++){ 
        //print spaces
          for (i=0;i<n-j;i++){
              cout << " ";
        
          }
        //print stars
          for(i = 0; i<2*j-1; i++){
            cout << "*";
          }
         
            cout << endl;
       }
        
      return 0;
  }
