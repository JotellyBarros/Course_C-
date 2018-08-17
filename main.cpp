// C++ program to demostrate Using Class POO
#include <iostream>

//struct DateStruct
//{
//    int year;
//    int month;
//    int day;

//    // Function for printing the values
//    void print(std::string nameDay){
//        std::cout << nameDay << " is: " << year << "/" << month << "/" << day << std::endl;
//    }
//};

class DateClass
{
public:
    int m_year;
    int m_month;
    int m_day;

    // Print employee information to the screen
    void print(std::string nameDay){
        std::cout << nameDay << " is: " << m_year << "/" << m_month << "/" << m_day << std::endl;
    }
};

int main()
{
    // Initialization of struct
    DateClass yesteday {2018,8,16};
    DateClass today {2018,8,17};
    DateClass tomorrow {2018,8,18};

    //today.m_day = 5; // use member selection operator to select a member of the struct
    yesteday.print("Yesterday");
    today.print("Today");
    tomorrow.print("Tomorrow");

    return 0;
}
