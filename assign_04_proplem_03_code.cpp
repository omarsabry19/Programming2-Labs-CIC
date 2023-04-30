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

        System.out.print("Enter the number to search: ");
        int x = scanner.nextInt();

        boolean found = false;

        System.out.print("Positions of the number " + x + " in the array: ");
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                System.out.print(i + " ");
                found = true;
            }
        }

        if (!found) {
            System.out.println("The number " + x + " was not found in the array.");
        }

        scanner.close();
    }
}
