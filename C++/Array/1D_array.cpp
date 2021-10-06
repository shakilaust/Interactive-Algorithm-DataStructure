#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int sqrNum[5];
    for( int i = 0 ; i < 5 ; i++ ) {
        sqrNum[i] = ( i + 1 ) * ( i + 1 );
    }
    
    for( int i = 0 ; i < 5 ; i++ ) {
        cout << i + 1 << " square value is " << sqrNum[i] << endl;
    }
    return 0;
}

/*
output: 
1 square value is 1
2 square value is 4
3 square value is 9
4 square value is 16
5 square value is 25
*/
