//omarsabry
//20216573

package com.mycompany.omar_first_project;
import java.util.Scanner;

public class Omar_first_project {
    
  public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();

        int start = 1;

        for (int i = 0; i < n; i++) {
            System.out.print(start + " " + (start + 1) + " " + (start + 2) + " PUM\n");
            start += 4;
        }

        scanner.close();
    }
}