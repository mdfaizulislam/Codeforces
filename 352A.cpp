#include <iostream>

using namespace std;

int main()
{
    int n, fives = 0, zeros = 0;
    cin >> n;
    int digit;
    for( int i = 0; i < n; i++ )
    {
        cin >> digit;
        if(digit == 0)
            zeros++;
        else
            fives++;
    }
    if(zeros == 0)
        cout << -1 << endl;
    else if( fives < 9 )
        cout << 0 << endl;
    else
    {
        fives-=fives%9;
        for( int i = 0 ; i < fives; i++)
            cout << 5;
        for( int i = 0 ; i < zeros; i++)
            cout << 0;
    }
    return 0;
}
