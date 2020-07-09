//WAP to compute the gcd of two numbers.
/*#include<iostream>
using namespace std;

void gcd(int,int);

int main()
{
    int a,b;
    cout<<"Enter the numbers a/b:";
    cin>>a>>b;
    gcd(a,b);
    return 0;
}

void gcd(int x,int y)
{
    int div = 0;
    for(int i = 1; i < x+y ; i++)
    {
        if(x%i == 0 && y%i == 0)
            div = i;
    }
    cout<<"The common divisor is :"<<div;
}*/

//WAP to effiently calculate the gcd of two numbers.
#include<iostream>
using namespace std;

long int euclidgcd(long int,long int);

int main()
{
    long int a,b;
    long int result;
    cout<<"Enter the numbers a and b (a/b):";
    cin>>a>>b;
    result = euclidgcd(a,b);
    cout<<result;
    return 0;  
}

long int euclidgcd(long int x, long int y)
{
    long int x_rem;
    if(y == 0)
        return x;
    x_rem = x % y;
    return euclidgcd(y,x_rem);
}

