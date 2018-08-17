// C++ program to demostrate Using struct
#include <iostream>

struct DateStruct
{
    int year;
    int month;
    int day;

    // Function for printing the values
    void print(std::string nameDay){
        std::cout << nameDay << " is: " << year << "/" << month << "/" << day << std::endl;
    }
};

int main()
{
    // Initialization of struct
    DateStruct yesteday {2018,8,16};
    DateStruct today {2018,8,17};
    DateStruct tomorrow {2018,8,18};

    //today.day = 5; // use member selection operator to select a member of the struct
    yesteday.print("Yesterday");
    today.print("Today");
    tomorrow.print("Tomorrow");

    return 0;
}
