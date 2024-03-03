using System;

class Program
{
    static void Main(string[] args)
    {
        // Prompt the user to input a number
        Console.Write("Enter a number: ");
        
        // Read the user input and convert it to a double
        double number = Convert.ToDouble(Console.ReadLine());

        // Check if the number is positive, negative, or zero and print the corresponding message
        if (number > 0)
        {
            Console.WriteLine($"{number} is positive.");
        }
        else if (number < 0)
        {
            Console.WriteLine($"{number} is negative.");
        }
        else
        {
            Console.WriteLine("The number is zero.");
        }
    }
}
