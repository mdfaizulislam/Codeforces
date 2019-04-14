#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int position[21]={0};
    for( int i = 0; i < n; i++)
        cin >> position[i];
    int head = 0, tail = n-1, cost=0;
    while( head <= tail )
    {
        if( position[head] != 2 && position[tail] != 2 && (position[head] != position[tail]))
        {
            cost = -1;
            break;
        }

        if( position[head] == 2 && position[tail] == 2 && head != tail)
        {
            if( a > b )
                cost+=2*b;
            else
                cost+=2*a;
        }
        else if(position[head] == 2 && position[tail] == 2 && head ==  tail)
        {
            if( a > b )
                cost+=b;
            else
                cost+=a;
        }
        else if( position[head] == 2 || position[tail] == 2 )
        {
            if( position[head] ==  2 && position[tail] == 0)
                cost+=a;
            else if(position[head] ==  2 && position[tail] == 1)
                cost+=b;
            else if(position[tail] ==  2 && position[head] == 0)
                cost+=a;
            else if( position[tail] ==  2 && position[head] == 1)
                cost+=b;
        }

        head++;
        tail--;
    }
    cout << cost;
    return 0;
}
