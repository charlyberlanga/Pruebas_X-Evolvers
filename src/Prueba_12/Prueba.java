package Prueba_12;
import java.io.*;
import org.json.simple.*;
import org.json.simple.parser.*;

public class Prueba {
    public static void main(String[] args){
        JSONParser parser = new JSONParser();
        try{
            Object obj = parser.parse(new FileReader("D:\\X-Evolvers\\Pruebas\\src\\Prueba_12\\Prueba_12.json"));
            JSONObject jsonObject = (JSONObject) obj;
            JSONObject innerObject, inner, inner1;
            Long dobRaul, dobPedro;
            
            innerObject = (JSONObject) jsonObject.get("Raul");
            dobRaul = (Long) innerObject.get("dob");
            System.out.println(dobRaul);
            inner = (JSONObject) innerObject.get("children");
            System.out.println(inner.toJSONString());
            inner1 = (JSONObject) inner.get("Pedro");
            System.out.println(inner1.toJSONString());
            dobPedro = (Long) inner1.get("dob");
            System.out.println(dobPedro);
            
            
            
                    
        }catch(Exception ex){
            System.err.println("Error: "+ex.toString());
        }
    }
}