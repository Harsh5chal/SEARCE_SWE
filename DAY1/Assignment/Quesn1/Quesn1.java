//Reverse an integer array
public class Quesn1 {
    static void reverseArray(int P[],int start,int end){
        int temp;
        while(start < end){
            temp = P[start];
            P[start] = P[end];
            P[end] = temp;
            start++;
            end--;
        }
    }
    static void printArray(int P[],int n){
        for(int i = 0;i<n;i++){
            System.out.print(P[i] + " ");
        }
    }
    
    public static void main(String args[]){
        int P[] = {5,8,7,6};
        int n = P.length;
        reverseArray(P,0,n-1);
        printArray(P,n);
    }
}