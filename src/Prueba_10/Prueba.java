package Prueba_10;
import java.util.*;

public class Prueba {
    public static int AgeoftheUser(int y) {
        int age = 0, year = 0;
        Calendar date = new GregorianCalendar();
        year = date.get(Calendar.YEAR);
        if (((year - y) < 0) || ((year - y) > 105))
            age = -1;
        else
            age = year - y;
        return age;
    }
    
    public static void main(String[] args) {
        int birthyear = 0, age = 0;
        
        age = AgeoftheUser(birthyear);
        if (age == -1)
            System.out.println("Your age is irreal");
        else
            System.out.println("Your age is "+age);
    }
}
