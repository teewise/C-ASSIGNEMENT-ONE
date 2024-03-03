using System;

class Program
{
    static void Main(string[] args)
    {
        // Prompting the user to input three numbers
        Console.WriteLine("Enter three numbers:");

        // Reading the input numbers
        Console.Write("Enter the first number: ");
        int num1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter the second number: ");
        int num2 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter the third number: ");
        int num3 = Convert.ToInt32(Console.ReadLine());

        // Sorting the numbers in ascending order
        int[] numbers = { num1, num2, num3 };
        Array.Sort(numbers);

        // Outputting the numbers in ascending order
        Console.WriteLine("Numbers in ascending order:");
        foreach (int num in numbers)
        {
            Console.WriteLine(num);
        }
    }
}
