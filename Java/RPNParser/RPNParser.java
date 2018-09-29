import java.io.*;
import java.util.Scanner;

public class RPNParser
{
    public static void printBounded(String s)
    {
        System.out.println("START__|"+s+"|__END");
    }
    public static void process(Stack s, String instructions)
    {
        //TODO: Parse string recursively
        int firstSpace = instructions.indexOf(' ');
        String front = instructions;
        String back = "";

        if(firstSpace!=-1)
        {
            front = instructions.substring(0,firstSpace);
            back = instructions.substring(firstSpace+1);
        }

        try 
        {
            //Assume double - Inner section evaluated first
            s.push(Double.parseDouble(front));
        } 
        catch (Exception e) 
        {
            //Only situation - Parse fails
            switch(front.charAt(0))
            {
                case '+': s.push(s.pop()+s.pop()); break;
                case '-': s.push(s.pop()-s.pop()); break;
                case '*': s.push(s.pop()*s.pop()); break;
                case '/': s.push(s.pop()/s.pop()); break;
                default: System.out.println("Unkown operator");
            }
        }
        
        //Recurse if there is another operator left
        if(firstSpace != -1)
            process(s, back);
    }
    public static void main(String [] args)
    {
        System.out.println("Hello World!");

        Scanner input = new Scanner(System.in);
        String result = input.nextLine();
        Stack myStack = new Stack();
        process(myStack, result);
        myStack.cascadingPrint();
        input.close();
    }
    
}
