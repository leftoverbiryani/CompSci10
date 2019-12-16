import java.util.Scanner;
import java.text.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("#.#######");

        System.out.println("How many classes are you taking?");
        int cnum = in.nextInt();

            calculator c1 = new calculator(cnum);
        }
    }

