#include <iostream>

using namespace std;
int minimum( int a , int b)
{
    return a<b?a:b;
}
int maximum( int a , int b){
    return a>b?a:b;
}
int main()
{
    int a , b, small, large;
    cin >> a >> b;
    small = minimum(a,b);
    large = maximum(a,b);
    cout << small <<" " << (large-small)/2;

    return 0;
}
