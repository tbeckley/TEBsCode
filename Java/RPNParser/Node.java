import java.io.*;

public class Node
{
    private double data;
    private Node next;

    // region Constructors
    public Node()
    {
        data = 0;
    }
    public Node(double temp)
    {
        data = temp;
    }
    // endregion

    // region Pointers
    public Node getNext()
    {
        return next;
    }
    public void setNext(Node nextNode)
    {
        next = nextNode;
    }
    // endregion

    // region Data
    public double getData()
    {
        return data;
    }
    // endregion
}