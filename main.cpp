#include <iostream>

using namespace std;

int main()
{
    int c,b,a,f=0,sum=0;
    cout << "Enter First Number";
    cin >> c;
    cout <<"Enter Last Number";
    cin >> b;
    while(c<=b)
    {
        f=0;
        for(a=2;a<=c/2;a++)
        {
            if(c%a==0)
            {
                f=1;
                break;
            }
        }

        if(f==0)
        {
        sum=sum+c;
        cout<<c<<" is prime.\n";
        }
        c=c+1;
    }
    cout<<"The sum of all prime numbers between this range is " << sum;
}


