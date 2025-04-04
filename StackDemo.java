import java.util.Stack;

public class StackDemo {
	
	public static void main(String[] args) {
		
		//Stack -> push pop
		
		Stack stack = new Stack();
		
		stack.push(10);
		stack.push(20);
		stack.push(30); 
		
		System.out.println(stack);
		

		System.out.println(stack.pop());//30
		System.out.println(stack);
		

		//generate random number : 1-36 : 30
		
		//hotNumbers: []
		
		
		//18
		//25
		//35
		
		//loose 
		//hotNumbers[30] 
		
		
		
		//random : 18
		//hotNumbers : 30 
		
		//20
		//21
		//22
		
		//loose 
		//hotNumbers[30,18] 
		
		
		//random:
		
		//18
		
		//20
		
		//31
		
		
		//gn:5 
		//gn:8
		//gn:30
		
		//loose 
		//win 
		
	}

}
