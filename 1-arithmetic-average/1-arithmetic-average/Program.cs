using System;

namespace _1_arithmetic_average
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("This program will read three numbers and calculate their arithmetic average.");
            Console.Write("Enter the first number: ");
            decimal first = readNumber();
            Console.Write("Enter the second number: ");
            decimal second = readNumber();
            Console.Write("Enter the thrid number: ");
            decimal thrid = readNumber();
            decimal arithmeticAverage = (first + second + thrid) / 3;
            Console.WriteLine($"The arithmetic average of these numbers is {arithmeticAverage:n2}.");
        }

        static decimal readNumber()
        {
            bool isNumberValid = decimal.TryParse(Console.ReadLine(), out decimal number);

            if (!isNumberValid)
            {
                Console.Write("Invalid number. Please enter a valid number: ");
                readNumber();
            }

            return number;
        }
    }
}
