#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int numberSeries[5][10];
    for( int row = 0 ; row < 5 ; row++ ) {
       for( int col = 1 ; col <= 10 ; col++ ) {
           numberSeries[row][col-1] = ( row + 1 ) * col;
       }
    }
    
    for( int row = 0 ; row < 5 ; row++ ) {
        cout << row + 1 << " series values are :";
        for( int col = 0 ; col < 10 ; col++ ) {
            cout << " " << numberSeries[row][col];
        }
        cout << endl;
    }
    return 0;
}
/*
output:
1 series values are : 1 2 3 4 5 6 7 8 9 10
2 series values are : 2 4 6 8 10 12 14 16 18 20
3 series values are : 3 6 9 12 15 18 21 24 27 30
4 series values are : 4 8 12 16 20 24 28 32 36 40
5 series values are : 5 10 15 20 25 30 35 40 45 50
*/
