#include <iostream>
#include <fstream>

int main()
{
    std::string name = "", surname = "", date = "";
    std::string nameMax = "", surnameMax = "", dateMax = "";
    int sum, totalSum = 0, sumMax = 0;
    std::ifstream statement;
    statement.open("C:\\Users\\Василий\\source\\repos\\FileReadingTask3\\Statement.txt", std::ios::in);
    if (statement.is_open())
    {
        std::cout << "Working!" << std::endl;

        while (!statement.eof())
        {
            statement >> name;
            statement >> surname;
            statement >> sum;
            statement >> date;

            if (sum > sumMax)
            {
                sumMax = sum;
                nameMax = name;
                surnameMax = surname;
                dateMax = date;
            }
            totalSum += sum;

        }

        statement.close();

    }
    else
    {
        std::cout << "File not found!" << std::endl;
    }
    std::cout << nameMax << " " << surnameMax << " received the maximum payout!" << std::endl;
    std::cout << "It amounted to " << sumMax << std::endl;
    std::cout << "Total payout is: " << totalSum << std::endl;
}