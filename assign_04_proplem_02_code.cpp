//omarsabry
//20216573

package com.mycompany.omar_first_project;
import java.util.Scanner;

public class Omar_first_project {
    
   public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = scanner.nextInt();

        int[] a = new int[n];

        System.out.println("Enter the array elements: ");
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }

        System.out.println("Array positions that store a number less than or equal to 10:");

        for (int i = 0; i < n; i++) {
            if (a[i] <= 10) {
                System.out.println("Position " + i + " stores the number " + a[i]);
            }
        }

        scanner.close();
    }
}
