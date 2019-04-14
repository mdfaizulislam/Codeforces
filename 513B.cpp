#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
long long digit_sum( long long n)
{
    long long sum=0, t;
    while( n != 0 ){
        t=n%10;
        sum+=t;
        n/=10;
    }
    return sum;
}

ull power(ull x, ull y){
    if( y == 0 )
        return 1;
    ull temp = power(x,y/2);
    if( y%2 == 0 )
        return temp*temp;
    else{
        if( y > 0 ){
            return x*temp*temp;
        }
        else
        {
            return (temp*temp)/x;
        }
    }
}
int main()
{
    long long n;
    cin >> n;
    long long mx=0;
    long long a=0, b=0, length=0, t;
    t = n;
    while( t != 0 ){
        length++;
        t/=10;
    }
    a = n - (n%(power(10,length-1)))-1;
    b = n-a;
    mx = digit_sum(a)+digit_sum(b);
    cout << mx;
    return 0;
}
