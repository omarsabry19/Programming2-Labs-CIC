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

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                a[i] = 1;
            } else if (a[i] < 0) {
                a[i] = 2;
            }
        }

        System.out.println("The array after replacing positive numbers by 1 and negative numbers by 2:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }

        scanner.close();
    }
}