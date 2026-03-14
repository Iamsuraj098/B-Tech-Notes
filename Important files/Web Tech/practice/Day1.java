// import java.util.*;
interface ab{
    void show();
}
class today implements ab{
    public void show(){
        System.out.println("Hello World");
    }
}
class tomorrow extends today{
    public void show(){
        System.out.println("Tomorrow");
    }
}
public class Day1
{
    public static void main(String[] arg)
    {   
        ab c = new today();
        today hello = new today();
        hello.show();
        c.show();

        tomorrow cd = new tomorrow();
        cd.show();
    }
}