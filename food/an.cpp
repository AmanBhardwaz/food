#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        int fact = 1;
        for(int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        cout << "Factorial of " << i << " is " << fact << endl;
    }
    return 0;
}