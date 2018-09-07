//write a program to print a hollow square star pattern
//library
#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"provide the n"<<endl;
	cin>>n;

	//make the first line of  n stars
	cout << "*****";
	
	cout << endl;
	
	//looping structures for spaces	
		for(int i=0;i<n; i++)
	{
		cout<<  "*   *" << endl;
	}
	cout << "*****" << endl;
	cout << "this is hollow square star pattern"<< endl;
	return 0;
}
