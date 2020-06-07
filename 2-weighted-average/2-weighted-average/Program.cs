using System;

namespace _2_weighted_average
{
    class Program
    {
        static readonly string[,] numberPhrases = new string[,]
        {
            { "Enter the first number: ", "Enter the weight of the first number: " },
            { "Enter the second number: ", "Enter the weight of the second number: " },
            { "Enter the third number: ", "Enter the weight of the third number: " }
        };

        static readonly int numbersAmount = numberPhrases.Length / numberPhrases.Rank;

        static readonly decimal[,] numberweight = new decimal[numbersAmount, 2];

        static void Main(string[] args)
        {
            Console.WriteLine("This program will read three numbers and calculate their weighted average");

            for (int i = 0; i < numbersAmount; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(numberPhrases[i, j]);
                    numberweight[i, j] = readInputNumber();
                }
            }

            decimal weightedAverage = calculateWeightedAverage();

            Console.Write($"The weighted average of these numbers is: {weightedAverage:n2}");
        }

        static decimal readInputNumber()
        {
            bool isValid = decimal.TryParse(Console.ReadLine(), out decimal number);

            if (!isValid)
            {
                Console.Write("Invalid number. Please enter a valid number: ");
                readInputNumber();
            }

            return number;
        }

        static decimal calculateWeightedAverage()
        {
            decimal weightedNumbersSum = 0;
            decimal weightSum = 0;

            for (int i = 0; i < numbersAmount; i++)
            {
                decimal number = numberweight[i, 0];
                decimal weight = numberweight[i, 1];
                decimal weightedNumber = number * weight;
                weightedNumbersSum += weightedNumber;
                weightSum += weight;
            }

            decimal weightedAverage = weightedNumbersSum / weightSum;

            return weightedAverage;
        }
    }
}
