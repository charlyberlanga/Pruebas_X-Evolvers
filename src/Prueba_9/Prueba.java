package Prueba_9;

public class Prueba {
    public static void main(String[] args) {
        int n = 1, limit = 100;
        while(n != (limit + 1)) {
            if(n%15 == 0)
                System.out.println("Number: "+ n +" = FizzBuzz");
            else {
                if(n%3 == 0)
                    System.out.println("Number: "+ n +" = Fizz");
                if(n%5 == 0)
                    System.out.println("Number: "+ n +" = Buzz");
            }
            n++;
        }
    }
}
