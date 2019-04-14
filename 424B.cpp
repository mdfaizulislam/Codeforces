#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    char l_one[27];
    char l_two[27];
    char s[1001];
    cin >> l_one >> l_two;
    cin >> s;
    int s_length;
    s_length = strlen(s)-1;

    char mapper[27];
    int temp;
    for( int i = 0 ; i < 26 ; i++ ){
        temp = l_one[i] - 'a';
        mapper[temp]=l_two[i];
    }

    for( int i = 0 ; i <= s_length ; i++ ){
        if( isalpha(s[i]) ){
            if( isupper(s[i]) != 0 ){
                printf("%c",mapper[tolower(s[i]) - 'a']-32);
            }
            else{
                printf("%c",mapper[s[i]-'a']);
            }
        }
        else
            printf("%c",s[i]);
    }
    return 0;
}
