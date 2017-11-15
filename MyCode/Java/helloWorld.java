import java.io.*;
import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class HelloWorld {
    public static void main(String[] args) {
       // Prints "Hello, World" in the terminal window.
       System.out.println("Hello, World");
       JFrame myFrame = new JFrame();
       myFrame.setSize(600,800);
       myFrame.add(new JLabel("HELLO WORLD"));
       myFrame.setVisible(true);
       JOptionPane.showMessageDialog(null,"HI");
    }
 }