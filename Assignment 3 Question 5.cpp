using System;

class Array
{
    static void Main(string[] args)
    {
        float[] alpha = new float[50];

        // Initialize the first 25 components
        for (int i = 0; i < 25; i++)
        {
            alpha[i] = i * i;
        }

        // Initialize the last 25 components
        for (int i = 25; i < 50; i++)
        {
            alpha[i] = 3 * i;
        }

        // Output the array
        for (int i = 0; i < 50; i++)
        {
            Console.Write($"{alpha[i],-10}");
            if ((i + 1) % 10 == 0)
            {
                Console.WriteLine();
            }
        }
    }
}
