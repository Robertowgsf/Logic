using System;

namespace _3_square_area_perimeter
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("This program will read the length of a square's side and calculate its area and perimeter.");
            Console.Write("Enter the length of the square's side: ");
            decimal sideLength = readInputNumber();
            decimal area = sideLength * sideLength;
            decimal perimeter = sideLength * 4;
            Console.WriteLine($"The area of the square is: {area:n2}");
            Console.WriteLine($"The perimeter of the square is: {perimeter:n2}");
        }

        static decimal readInputNumber()
        {
            bool isNumberValid = decimal.TryParse(Console.ReadLine(), out decimal number);

            if (!isNumberValid)
            {
                Console.WriteLine("Invalid number. Please enter a valid number");
                readInputNumber();
            }

            return number;
        }
    }
}
