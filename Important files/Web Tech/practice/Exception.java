// package 
public class Exception {

    // public static void main(String[] arg)
    // {
    // // Stack tracing using exceptional handing.
    // doagainWork();
    // }
    // static void doagainWork(){
    // System.out.println("Ram Ram");
    // System.out.println(10/0);
    // System.out.println("Ram Ram");
    // }/

    // public static void main(String[] arg)
    // {
    // // Heap tracing using exceptional handing.
    // System.out.println("Radhe Radhe");
    // System.out.println(10/0);
    // System.out.println("Ram Ram");
    // }

    // class Abc{

    // }
    // public static void main(String[] arg)
    // {
    // Artimatic exception
    // System.out.println(10/0);

    // Due to waiting of code it give InterruptedError
    // System.out.println("Hello");
    // Thread.sleep(1000); // at compile time exception come.

    // ClassNotfound

    // nullpointer
    // String a;
    // System.out.println(a);
    // }

    public static void main(String[] arg) {
        try {
            System.out.println("Ram");
            System.out.println(10 / 0);
            System.out.println("Ram");
        } catch (Throwable e) {
            System.out.println("Ram");
            System.out.println(e.getMessage());
        }
    }
}