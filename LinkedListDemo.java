import java.util.LinkedList;
import java.util.Scanner;

public class LinkedListDemo {

	public static void main(String[] args) {
		Scanner scr = new Scanner(System.in);
		int choice;

		LinkedList<Student> list = new LinkedList<Student>();

		while (true) {
			System.out.println("1 Add Student \n2 List Student \n0 Exit \nEnter choice ");
			choice = scr.nextInt();

			switch (choice) {
			case 1:
				Student s = new Student();
				s.getData();
				s.calcPerc();
				list.add(s);
				break;
			case 2:
				for (Student x : list) {
					x.display();
				}
			}
		}
	}
}

class Student {

	String name;
	int maths, sci, english;
	float perc;

	Scanner scr = new Scanner(System.in);

	void getData() {
		System.out.println("Enter name and marks of three subjects:");
		name = scr.next();
		maths = scr.nextInt();
		sci = scr.nextInt();
		english = scr.nextInt();
	}

	void calcPerc() {
		perc = (maths + sci + english) / 3.0f;
	}

	void display() {
		System.out.println(name + " " + maths + " " + sci + " " + english + " " + perc);
	}
}
