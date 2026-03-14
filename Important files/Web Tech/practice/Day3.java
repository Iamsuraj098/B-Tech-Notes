// import java.util.*;
public class Day3 {
    public static void main(String[] arg) {
        System.out.println("Program is Started...");
        Thread T = Thread.currentThread();
        String str = T.getName();
        System.out.println("Current runnig thread name is: "+str);
        int a = 21 + 21;
        System.out.println("Sum of number: " + a);
        System.out.println("Program end...");
    }
}