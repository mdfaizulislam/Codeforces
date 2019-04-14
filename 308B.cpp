#include <iostream>

using namespace std;
typedef long long unsigned ull;

ull power( ull x, ull y){
    if( y == 0 )
        return 1;
    ull temp = power(x,y/2);
    if( y%2 == 0 ){
        return temp*temp;
    }
    else{
        if( y > 0 )
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    ull n;
    cin >> n;
    unsigned int length=0;
    ull t=n;
    while( t != 0 )
    {
        length++;
        t/=10;
    }

    ull res=0;
    for( ull i = 0; i < length ; i++ )
        res+=power(10,i);
    cout << length*(n+1)-res;
    return 0;
}
