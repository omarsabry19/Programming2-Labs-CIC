//omarsabry
//20216573

package com.mycompany.omar_first_project;
import java.util.Scanner;

public class Omar_first_project {
    
      public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();
        scanner.close();

        int first = 0, second = 1;

        System.out.print("Fibonacci series of first " + n + " numbers: ");

        for (int i = 1; i <= n; i++) {
            System.out.print(first + " ");

            int sum = first + second;
            first = second;
            second = sum;
        }
    }
}