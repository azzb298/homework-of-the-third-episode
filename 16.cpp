#include<iostream>

int main()
{
    char c;
    int letters = 0, space = 0, number = 0, other = 0;
    while ((c = getchar()) != '\n') 
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        {
            letters++;
        }
        else if (c == ' ')
        {
            space++;
        }
        else if (c >= '0' && c <= '9')
        {
            number++;
        }
        else
        {
            other++;
        }
    }
    std::cout << "Letters: " << letters << '\n'
        << "Spaces: " << space << '\n'
        << "Numbers: " << number << '\n'
        << "Others: " << other << '\n';
}