#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    char ch = 'A';

    for (int i=1; i<=n; i++)
    {

        for (int j=1; j<=(n-i+1); j++)
        {

            cout<<ch++;
        
        }
        cout<<endl;
    }

    return 0;
}
