public class Main {

    public static void main(String[] args) {
        int[] sqrNum = new int[5];
        for( int i = 0 ; i < 5 ; i++ ) {
            sqrNum[i] = ( i + 1 ) * ( i + 1 );
        }
        
        for( int i = 0 ; i < 5 ; i++ ) {
            System.out.println( ( i + 1 ) + " square value is " + sqrNum[i] );
        }
    }
}
/* 
1 square value is 1
2 square value is 4
3 square value is 9
4 square value is 16
5 square value is 25
*/
