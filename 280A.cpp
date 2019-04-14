#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int height[100], step=1;
    height[1]=1;
    step++;
    while(step <= 50)
    {
        height[step]=height[step-1]+0.5*step*(step+1);
        step++;
    }
    /*
    for( int i = 1 ; i < step ; i++ )
        cout << "n = " << height[i] << "\t\tstep "<< i << "\n";
    */

    int n;
    cin >> n;
    int l=0, r=step-1, mid=0;
    int ans;
    while( l < r )
    {
        mid = (l+r)/2;
        if( height[mid] <= n )
        {
            ans = mid;
            l++;
        }
        else if( height[mid] > n )
            r--;
        else
            l++;
    }
    cout <<  ans;
    return 0;
}
