import java.io.*;

public class Stack
{
    Node top = null;
    public Stack()
    {
    }

    public void push(double val)
    {
        Node temp = new Node(val);
        temp.setNext(top);
        top=temp;
    }

    public double pop()
    {
        double v = top.getData();
        top = top.getNext();
        return v;
    }
    
    //region Stack bonus methods by Thomas
    public boolean isEmpty()
    {
        try{
            push(pop());
            return false;
        }
        catch(Exception e){}
        return true;
    }
    public void cascadingPrint()
    {
        try{
            while(true)
                System.out.println(pop());
        }
        catch (Exception e){};
    }
    private Node getTop()
    {
        return top;
    }
    public void invert()
    {
        Stack temp = new Stack();
        try {
            while(true)
                temp.push(pop());
        } catch (Exception e) {
            top=temp.getTop();
        }
    }
    //endregion
}