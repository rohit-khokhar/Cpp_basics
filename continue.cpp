#include <iostream>
using namespace std;
int main()
{
    int num;

    do
    {
        cout << "enter no : " << endl;
        cin >> num;

        if (num % 10 == 0)
        {
            continue;
        }
        cout << "u enter : " << num << endl;
    } while (true);

    // for(int i = 1; i<=10; i++) {

    //  if ( i == 3) {
    //     continue;
    //  }

    //     cout<<i<<" ";
    // }

    return 0;
}
