//omarsabry
//20216573

package com.mycompany.omar_first_project;
import java.util.Scanner;

public class Omar_first_project {
    
   public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = scanner.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        scanner.close();
    }
    }
}
