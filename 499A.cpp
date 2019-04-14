#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, k;
    char stage[51];
    cin >> n >> k;
    cin >> stage;
    int length = strlen(stage);
    int t, flag[26]={0};
    for(int i = 0 ; i < length ; i++ ){
        t = stage[i]-'a';
        flag[t]++;
    }
    int taken[26]={0};
    int mn=0;
    if( flag[0] != 0 )
    {
        mn+=1;
        taken[0]=1;
        k--;
    }
    for( int i = 1 ; i < 26 && k > 0; i++ ){
        if( taken[i-1] == 0 && flag[i] != 0 ){
            mn+=i+1;
            taken[i]=1;
            k--;
        }
    }
    if( k == 0 )
        cout << mn;
    else
        cout << -1;
    return 0;
}
