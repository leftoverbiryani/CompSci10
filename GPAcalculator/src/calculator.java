import java.util.Scanner;
import java.text.*;
public class calculator {
    Scanner in = new Scanner(System.in);
    int classes;
    
    public calculator(int x){
        double place, place2;
        classes = x;
        double grades [] = new double [classes];
        double creds [] = new double [classes];
        
        for(int i = 0; i < classes; i++)
        {
            place = getGrade(i+1);
            place2 = getCred(i+1);
                    
            grades[i] = convertGpa(place, place2);
            creds[i] = place2;
        }
        calcGpa(grades, creds, classes);
    }
    
    public double getGrade(int x){
        Scanner in = new Scanner(System.in);
        double g = 0;
        
        System.out.println("Enter your grade for class " + x + ":");
        g = in.nextDouble();
         
        return g;
    }

    public double getCred(int x){
        Scanner in = new Scanner(System.in);
        double c = 0;

        System.out.println("Enter the credits for class " + x + ":");
        c = in.nextDouble();

        return c;
    }
    public double convertGpa(double x, double y){
        if(x >= 97){
            x = 4.3;
        }else if(x >= 94 && x < 97){
            x = 4.0;
        }else if(x >= 90 && x < 94){
            x = 3.7;
        }else if(x >= 87 && x < 90){
            x = 3.3;
        }else if(x >= 83 && x < 87){
            x = 3.0;
        }else if(x >= 80 && x < 83){
            x = 2.7;
        }else if(x >= 77 && x < 80){
            x = 2.3;
        }else if(x >= 73 && x < 77){
            x = 2.0;
        }else if(x >= 70 && x < 73){
            x = 1.7;
        }else if(x >= 67 && x < 70){
            x = 1.3;
        }else if(x >= 65 && x < 67){
            x = 1.0;
        }else if(x < 65){
            x = 0;
        }
        x *= y;
        return x;
    }
    public void calcGpa(double [] x, double [] y, int l){
        DecimalFormat df = new DecimalFormat("#.#####");
        double tg = 0;
        double tc = 0;
        for(int i = 0; i < l; i++)
        {
            tg += x[i];
            tc += y[i];
        }
        double Gpa = tg / tc;
        System.out.println("You Gpa: " + df.format(Gpa));
    }
}
