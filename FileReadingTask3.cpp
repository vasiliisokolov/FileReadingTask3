#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::vector<char> name, surname;
    std::vector<int> sum;
    std::ifstream statement;
    statement.open("C:\\Users\\Василий\\source\\repos\\FileReadingTask3\\Statement.txt");
    if (statement.is_open())
    {
        std::cout << "Working!" << std::endl;
        int count = 0;
        //while (!statement.eof())
        //{

            statement >> name[count];
            statement >> surname[count];
            statement >> sum[count];
        //}
        statement.close();
        std::cout << name[count];
    }
    else
    {
        std::cout << "File not found!" << std::endl;
    }
}
