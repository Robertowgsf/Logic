using System;

namespace _4_double_triple_square_sqrt
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("This program will read a positive integer number and calculate its double, triple, square and square root values");
            Console.Write("Enter a number: ");
            int number = readInputNumber();
            long numberDouble = number * 2;
            long triple = number * 3;
            long square = number * number;
            double squareRoot = Math.Sqrt(number);
            Console.WriteLine($"The double value is: {numberDouble}");
            Console.WriteLine($"The triple value is: {triple}");
            Console.WriteLine($"The square value is: {square}");
            Console.WriteLine($"The square root value is: {squareRoot}");
        }

        static int readInputNumber()
        {
            bool isNumberValid = int.TryParse(Console.ReadLine(), out int number);

            if (!isNumberValid)
            {
                Console.Write("Invalid number. Please enter a valid number: ");
                readInputNumber();
            }

            return number;
        }
    }
}
