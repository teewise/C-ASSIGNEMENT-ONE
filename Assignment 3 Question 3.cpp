using System;

class Uppercase
{
    static void Main()
    {
        Console.WriteLine("Enter a string:");
        string input = Console.ReadLine();
        
        char[] charArray = input.ToCharArray();

        for (int i = 0; i < charArray.Length; i++)
        {
            charArray[i] = char.ToUpper(charArray[i]);
        }

        string uppercaseString = new string(charArray);
        Console.WriteLine($"String in uppercase: {uppercaseString}");
    }
}
