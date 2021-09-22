import java.util.Arrays;
import java.util.Scanner;

public class Main {
    
    public static void Sort(int []arr, int len){
        int temp;

        for(int i = 0; i < len-1; i++){
            for(int j = i; j < len; j++){
                if(arr[i] >= arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    public static void Input(int []arr,int len){
        Scanner input = new Scanner(System.in);
        for(int i=0; i<len; i++){
            arr[i] = input.nextInt();
        }
    }

    public static void Output(int[] arr, int len, int sum, int result){
         for(int i = 0; i < len; i++){
             sum += arr[i];
             result += sum;
         }
         System.out.println(result);
    }


    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        int []arr = new int[len];
        int sum=0;
        int result=0;

        Input(arr, len);
        Sort(arr, len);
        Output(arr, len, sum, result);
    }
}
