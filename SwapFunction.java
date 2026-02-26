public class SwapFunction {
    
    public static void  swap(int a, int b) {
        System.out.println("Before swap: a = " + a + ", b = " + b);

        int temp = a;
        a = b;
        b = temp;

        System.out.println("After swap: a = " + a + ", b = " + b);
    }

    public static void main(String[] args) {
        int num1 = 5, num2 = 10;
        
        swap(num1, num2);

        System.out.println("In main after swap function call: num1 = " + num1 + ", num2 = " + num2);
    }
}
