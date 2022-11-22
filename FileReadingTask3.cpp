#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    //char buffer[30];
    char temp;
    std::string name = "", surname = "", sum ="", date = "";
    int maxSum = 0;
    std::ifstream statement;
    statement.open("C:\\Users\\Василий\\source\\repos\\FileReadingTask3\\Statement.txt", std::ios::binary);
    if (statement.is_open())
    {
        std::cout << "Working!" << std::endl;
        
        
        while(!statement.eof())
        {
            int turn = 0;

            statement.get(temp);
            if (temp != ' ')
            {
                switch (turn)
                {
                    case 0: name += temp;
                        break;
                    case 1: surname += temp;
                        break;
                    case 2: sum += temp;
                        break;
                    case 3: date += temp;
                        break;

                }
            }
            else
            {
                turn++;
            }
                
                
            
            
        }
        
        statement.close();
        
    }
    else
    {
        std::cout << "File not found!" << std::endl;
    }
}
