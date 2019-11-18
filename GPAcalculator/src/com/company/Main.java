package com.company;
import java.util.Scanner;
import java.text.*;

public class Main {

    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	DecimalFormat df = new DecimalFormat("#.#######");

	System.out.println("How many classes are you taking?");
	int cnum = in.nextInt();

	double creds [] = new double [cnum];

    double grades [] = new double [cnum];

    double g = 0;
    double c = 0;
    for(int i = 0; i < cnum; i++)
    {
        System.out.println("Enter your grade for class " + (i + 1) + ":");
        g = in.nextDouble();

        if(g >= 97){
            g = 4.3;
        }else if(g >= 94 && g < 97){
            g = 4.0;
        }else if(g >= 90 && g < 94){
            g = 3.7;
        }else if(g >= 87 && g < 90){
            g = 3.3;
        }else if(g >= 83 && g < 87){
            g = 3.0;
        }else if(g >= 80 && g < 83){
            g = 2.7;
        }else if(g >= 77 && g < 80){
            g = 2.3;
        }else if(g >= 73 && g < 77){
            g = 2.0;
        }else if(g >= 70 && g < 73){
            g = 1.7;
        }else if(g >= 67 && g < 70){
            g = 1.3;
        }else if(g >= 65 && g < 67){
            g = 1.0;
        }else if(g < 65){
            g = 0;
        }
        grades [i] = g;

        System.out.println("Enter the credits for class " + (i + 1) + ": ");
        c = in.nextDouble();

        creds [i] = c;
    }

    double GPA = 0.0;
    double sum = 0.0;
    double csum = 0.0;
    for(int i = 0; i < cnum; i++)
    {
        sum += (grades[i] * creds[i]);
        csum += creds[i];
    }

    GPA = sum / csum;

    System.out.println("GPA: " + df.format(GPA));
    }
}
