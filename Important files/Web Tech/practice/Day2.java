import java.util.*;
class X{
    int a;
    static int b;
    static void show(){
        System.out.println("Ram Ram");
    }
    void display(){
        System.out.println("Radhe Radhe");
    }
}
public class Day2
{
    public static void main(String[] arg)
    {
        X.b=4;
        // X.a = 10;
        System.out.println(X.b);
        X.show();
        X a = new X();
        a.display();
        a.show();
        System.out.println(123);
    }
}
