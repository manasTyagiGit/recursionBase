import java.util.*;
import java.io.*;
import java.lang.*;

public class split
{
    public static void main (String[] args)
    {
        Scanner scan = new Scanner (System.in);
        String input = scan.nextLine();

        String[] words = input.split (" ");

        for (String str : words)
        {
            System.out.println (str);
        }
        scan.close();
    }
}