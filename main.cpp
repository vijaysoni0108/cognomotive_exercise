#include<iostream>
using namespace std;
 
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main()
{
    int choice,n,i=0;
    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
	cout<<"Enter choice :  1 - Recursive,       2 - Iterative\n";
	cin>>choice;
	if (choice == 1)
	{
		cout<<"\nFibonacci Series is as follows\n";
        while(i<n)
        {
           cout<<" "<<fibonacci(i);
           i++;
        }
	}
	else if (choice == 2)
	{
		int first = 0, second = 1, next;
        cout << "First " << n << " terms of Fibonacci series are :- " << endl;
 
        for ( i = 0 ; 1 < n ; i++ )
        {
           if ( i <= 1 )
           next = i;
           else
           {
               next = first + second;
               first = second;
               second = next;
           }
           cout << next << endl;
        }
	}
	else
	{
		cout<<"\nIncorrect choice value - enter only 1 or 2 \n";
	}
	return 0;
}