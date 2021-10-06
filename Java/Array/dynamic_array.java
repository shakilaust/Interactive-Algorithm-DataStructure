import java.util.ArrayList;
public class Main {

    public static void main(String[] args) {
       ArrayList<Integer> nums = new ArrayList<>();
       // add values;
       nums.add(10);
       nums.add(30);
       nums.add(-10);
       // print values 
       for( int i = 0 ; i < nums.size() ; i++ ) {
           System.out.println( i + " idx  value is " + nums.get(i));
       }
       
       // change value 
       nums.set(0, 120);
       
       System.out.println( "idx 0 value now " + nums.get(0));
       
       // remove a particular index value 
       nums.remove(1);
       
       // print all values
       for( int num: nums ) {
           System.out.println(num);
       }
       
    }
}
