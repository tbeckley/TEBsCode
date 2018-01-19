import java.io.*;
import java.util.Scanner;

public class RPNParser
{
    public static void printBounded(String s)
    {
        System.out.println("START__"+s+"__END");
    }
    public static void process(Stack s, String instructions)
    {
        int b = instructions.indexOf(' ');
        b = (b==-1) ? instructions.length() : b;
        
        String ins = instructions.substring(0, b);
        printBounded(ins);
        if(b == -1) //Last operator in string
            ins = instructions;

        try 
        {
            //Check if is a number - if Double.parseDouble fails, not a number
            s.push(Double.parseDouble(ins));
        }

        catch (Exception e) 
        {
            if(ins.length() == 1) 
            {
                char operator = ins.charAt(0);
                double n1, n2;
                try 
                {
                    n1 = s.pop();
                    n2 = s.pop();

                    switch(operator)
                    {
                        case '+':   s.push(n1+n2);
                                    break;
                        case '-':   s.push(n1-n2);
                                    break;
                        case '*':   s.push(n1*n2);
                                    break;
                        case '/':   s.push(n1/n2);
                                    break;
                        default:    System.out.println("'" + operator + "' is not a valid operator");
                                    break;
                    }
                } 
                catch (Exception ex)
                {
                    //Not two numbers on the stack...
                    System.out.println("Two numbers not on the stack. Returning.");
                    return;
                }
            }
        }

        if(b+1 <= ins.length())
            process(s, instructions.substring(b+1));

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
