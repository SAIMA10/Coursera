#include<iostream>
using namespace std;

void fibonacci(int n)
{
     int A[100];
    A[0] = 0;
    A[1] = 1;
    for(int i=2;i<n;i++)
    {
        A[i] = A[i-1] + A[i-2];
    }
    cout<<"The number at the nth position is:"<<A[n-1];
}

int main()
{
    //int result;
    int n;
    cout<<"Enter the nth digit you want from the fibonacci series:";
    cin>>n;
    //result = fibonacci(n);
    fibonacci(n);
    return 0;
}




