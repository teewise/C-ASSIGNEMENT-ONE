using System;

class MatrixAddition
{
    static void Main(string[] args)
    {
        Console.WriteLine("Enter the number of rows for the matrices:");
        int rows = int.Parse(Console.ReadLine());

        Console.WriteLine("Enter the number of columns for the matrices:");
        int cols = int.Parse(Console.ReadLine());

        int[,] matrix1 = new int[rows, cols];
        int[,] matrix2 = new int[rows, cols];
        int[,] sumMatrix = new int[rows, cols];

        Console.WriteLine("Enter the elements of the first matrix:");
        ReadMatrix(matrix1);

        Console.WriteLine("Enter the elements of the second matrix:");
        ReadMatrix(matrix2);

        // Compute the sum of the matrices
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                sumMatrix[i, j] = matrix1[i, j] + matrix2[i, j];
            }
        }

        Console.WriteLine("The sum of the matrices is:");
        PrintMatrix(sumMatrix);
    }

    static void ReadMatrix(int[,] matrix)
    {
        int rows = matrix.GetLength(0);
        int cols = matrix.GetLength(1);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                Console.WriteLine($"Enter element at [{i},{j}]:");
                matrix[i, j] = int.Parse(Console.ReadLine());
            }
        }
    }

    static void PrintMatrix(int[,] matrix)
    {
        int rows = matrix.GetLength(0);
        int cols = matrix.GetLength(1);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                Console.Write(matrix[i, j] + "\t");
            }
            Console.WriteLine();
        }
    }
}
