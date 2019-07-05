#include<iostream>
using namespace std;
 
double fibonacci_recursive(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci_recursive(n-1)+fibonacci_recursive(n-2));
    }
}

void fibonacci_iterative(int n)
{
    double first = 0, second = 1, next;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( i <= 1 )
        next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout <<" "<< next << endl;
    }
}
 
int main()
{
    int choice,n,i=0;
    cout<<"Enter the number of terms for Fibonacci Series:";
    cin>>n;
    cout<<"Enter choice :  1 - Recursive,       2 - Iterative\n";
    cin>>choice;

    if (choice == 1)
    {
       cout << "First " << n << " Fibonacci series using recursive  function is :- " << endl;
       while(i<n)
       {
          cout<<" "<<fibonacci_recursive(i) << endl;
          i++;
       }
    }
    else if (choice == 2)
    {
        cout << "First " << n << " Fibonacci series using iterative approach is :- " << endl;
        fibonacci_iterative(n);
    }
    else
    {
        cout<<"\nIncorrect choice value - enter only 1 or 2 \n";
    }
    return 0;
}
