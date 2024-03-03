using System;

class TestFunction
{
    // PHP function to find smallest index
    static int SmallestIndex(int[] arr, int size)
    {
        int smallest = arr[0];
        int index = 0;
        
        for (int i = 1; i < size; i++)
        {
            if (arr[i] < smallest)
            {
                smallest = arr[i];
                index = i;
            }
        }
        
        return index;
    }

    static void Main(string[] args)
    {
        // Test the function
        int[] testArray = { 3, 1, 5, 2, 4 };
        int size = testArray.Length;
        
        int smallestIndex = SmallestIndex(testArray, size);
        
        Console.WriteLine("The smallest element is at index: " + smallestIndex);
    }
}
