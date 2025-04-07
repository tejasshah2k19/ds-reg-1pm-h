 import java.util.Scanner;
import java.util.Stack;

public class StackDemo {

	public static void main(String[] args) {

		// Stack -> push pop
		// hotNumbers: []
		int credits = 5000; 
		Stack<Integer> hotNumbers = new Stack<Integer>();
		Scanner scr = new Scanner(System.in);

		while (true) {
			// generate random number : 1-36 : 30
//			Math.random();// 0 1 -> 0.75434567890
			int randomNum = (int) (Math.random() * 36) + 1;// 0-35
			// System.out.println(randomNum);//1-36

			System.out.println("HotNumbers: " + hotNumbers);// []
			System.out.println("Your Credits : "+credits);

			System.out.println("Enter Bet Amount : ");
			int betAmt = scr.nextInt(); //500
			
			if(betAmt > credits) {
				System.out.println("Insufficient credits please trya again!");
				continue;
			}
			
			System.out.println("Enter three guess : ");
			int guess1 = scr.nextInt();
			int guess2 = scr.nextInt();
			int guess3 = scr.nextInt();

			if (guess1 == randomNum || guess2 == randomNum || guess3 == randomNum) {
				System.out.println("You WON : "+randomNum);
				credits = credits + (betAmt*10);
			} else {
				System.out.println("You LOST");
				credits = credits - betAmt; 
			}

			hotNumbers.push(randomNum);//

			System.out.println("Want to play again? \n0 - NO \n1 - YES");
			int choice = scr.nextInt();
			if (choice == 0) {
				break;
			}
			if(credits<=0 ) {
				System.out.println("Please buy Some Credits \nyour current credis : "+credits);
			}

		}

		// random : 18
		// hotNumbers : 30

		// 20
		// 21
		// 22

		// loose
		// hotNumbers[30,18]

		// random:

		// 18

		// 20

		// 31

		// gn:5
		// gn:8
		// gn:30

		// loose
		// win

	}

}
