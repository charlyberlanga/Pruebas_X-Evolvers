package Prueba_8;

public class Prueba {
    public static int countUnset(int n) {
        int binary = 32768, count = 0;
        for(int i = 0; i < 16; i++) {
            if((n - binary) >= 0)
                n -= binary;
            else
                count++;
            binary /= 2;
        }
        return count;
    }
    
    public static void main(String[] args) {
        int number = 52634;
        System.out.println("The countunset is "+countUnset(number));
    }
    
}
