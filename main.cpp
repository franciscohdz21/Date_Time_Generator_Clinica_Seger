#include <QCoreApplication>
#include <iostream>
#include <string>

#define YEAR 2017

// COUNTER
// 2017 from 1 to 8030
// 2018 from 8031 to 16060

using namespace std;

string printHoraInicio(int &counter)
{
    counter++;
    if (counter == 1)
        return "9:00";
    else if (counter == 2)
        return "9:30";
    else if (counter == 3)
        return "10:00";
    else if (counter == 4)
        return "10:30";
    else if (counter == 5)
        return "11:00";
    else if (counter == 6)
        return "11:30";
    else if (counter == 7)
        return "12:00";
    else if (counter == 8)
        return "12:30";
    else if (counter == 9)
        return "13:00";
    else if (counter == 10)
        return "13:30";
    else if (counter == 11)
        return "14:00";
    else if (counter == 12)
        return "14:30";
    else if (counter == 13)
        return "15:00";
    else if (counter == 14)
        return "15:30";
    else if (counter == 15)
        return "16:00";
    else if (counter == 16)
        return "16:30";
    else if (counter == 17)
        return "17:00";
    else if (counter == 18)
        return "17:30";
    else if (counter == 19)
        return "18:00";
    else if (counter == 20)
        return "18:30";
    else if (counter == 21)
        return "19:00";
    else if (counter == 22)
    {
        counter = 0;
        return "19:30";
    }
    return "";
}

string printHoraTermino(int &counter)
{
    counter++;
    if (counter == 1)
        return "9:30";
    else if (counter == 2)
        return "10:00";
    else if (counter == 3)
        return "10:30";
    else if (counter == 4)
        return "11:00";
    else if (counter == 5)
        return "11:30";
    else if (counter == 6)
        return "12:00";
    else if (counter == 7)
        return "12:30";
    else if (counter == 8)
        return "13:00";
    else if (counter == 9)
        return "13:30";
    else if (counter == 10)
        return "14:00";
    else if (counter == 11)
        return "14:30";
    else if (counter == 12)
        return "15:00";
    else if (counter == 13)
        return "15:30";
    else if (counter == 14)
        return "16:00";
    else if (counter == 15)
        return "16:30";
    else if (counter == 16)
        return "17:00";
    else if (counter == 17)
        return "17:30";
    else if (counter == 18)
        return "18:00";
    else if (counter == 19)
        return "18:30";
    else if (counter == 20)
        return "19:00";
    else if (counter == 21)
        return "19:30";
    else if (counter == 22)
    {
        counter = 0;
        return "20:00";
    }
    return "";
}

string printDate(int &dayCounter, int &monthCounter, bool &leapYear)
{
    dayCounter++;

    if (monthCounter == 1)
    {
        if (dayCounter == 32)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 2)
    {
        if (leapYear == true)
        {
            if (dayCounter == 30)
            {
                monthCounter++;
                dayCounter = 1;
            }
        }
        else
        {
            if (dayCounter == 29)
            {
                monthCounter++;
                dayCounter = 1;
            }
        }
    }
    else if (monthCounter == 3)
    {
        if (dayCounter == 32)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 4)
    {
        if (dayCounter == 31)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 5)
    {
        if (dayCounter == 32)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 6)
    {
        if (dayCounter == 31)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 7)
    {
        if (dayCounter == 32)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 8)
    {
        if (dayCounter == 32)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 9)
    {
        if (dayCounter == 31)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 10)
    {
        if (dayCounter == 32)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 11)
    {
        if (dayCounter == 31)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }
    else if (monthCounter == 12)
    {
        if (dayCounter == 32)
        {
            monthCounter++;
            dayCounter = 1;
        }
    }

    string output;
    output.append(std::to_string(YEAR));
    output.append("-");
    output.append(std::to_string(monthCounter));
    output.append("-");
    output.append(std::to_string(dayCounter));

    return output;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int dayCounter, monthCounter, horaInicioCounter, horaTerminoCounter;
    bool leapYear = false;

    if (YEAR % 4 == 0)
    {
        leapYear = true;
//        cout << "Leap Year" << endl;
    }

    dayCounter = 0;
    monthCounter = 1;
    horaInicioCounter = 0;
    horaTerminoCounter = 0;

    for (int i = 0; i < 365; i++)
    {
        string tmp = printDate(dayCounter, monthCounter, leapYear);
        for (int j = 0; j < 22; j++)
        {
            cout << tmp << "|" << printHoraInicio(horaInicioCounter)
                 << "|" << printHoraTermino(horaTerminoCounter);
            cout << endl;
        }
    }

    return a.exec();
}
