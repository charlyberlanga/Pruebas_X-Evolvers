package Prueba_11;
import java.util.*;

public class Prueba {
    public static void quicksort(int[] arr, int izq, int der) {
        int pivote, i, j, aux;
        pivote = arr[izq]; 
        i = izq; j = der;
        while(i <= j) {
            while(arr[i] < pivote)
                i++;
            while(arr[j] > pivote)
                j--;
            if(i <= j){
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
                i++; j--;
            }
            /*arr[izq] = arr[j];
            arr[j] = pivote;*/
            if(izq < j)
                quicksort(arr, izq, j);
            if(i < der)
                quicksort(arr, i, der);
        }
    }
    
    public static int[] merge(int[] arr1, int[] arr2) {
        int [] arr = new int[arr1.length + arr2.length];
        for(int i = 0; i < arr.length; i++)
            if(i < arr1.length)
                arr[i] = arr1[i];
            else
                arr[i] = arr2[i-arr1.length];
        quicksort(arr, 0, arr.length - 1);
        return arr;
    }
    
    public static void main(String[] args) {
        int[] arr1 = {4,5,7,9,10,34}, arr2 = {1,3,6,8,32,33}, arr3;
        arr3 = merge(arr1,arr2);
        for(int i = 0; i < arr3.length; i++) {
            System.out.println("Posicion "+i+": "+arr3[i]);
        }
    }
}
