public class FibonacciNumber1 {

    public static void main(String[] args) {
        long time1 = 0L, time2 = 0L;
        time1 = System.currentTimeMillis();
        System.out.println("ans = " + f(50));
        time2 = System.currentTimeMillis();
        System.out.print("time : ");
        System.out.print((time2 - time1) / 1000.0D);
        System.out.println(" seconds");
    }

    private static long f(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
            return f(n - 1) + f(n - 2);
        }
    }
}

// Fibonacci Number:  0,  1,  1,  2,  3,  5,  8, 13, 21, 34
// Fibonacci Number: a0, a1, a2, a3, a4, a5, a6, a7, a8, a9