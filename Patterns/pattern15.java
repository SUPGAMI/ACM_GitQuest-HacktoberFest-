import java.util.Scanner;

public class pattern15 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int n = inp.nextInt();
        char c = 'A';

        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                System.out.print( c + " ");
                c++;
            }
            System.out.println();
        }
    }
}
