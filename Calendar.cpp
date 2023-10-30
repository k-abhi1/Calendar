// #include<iostream>
// using namespace std;

// int main()

// {
//     int day number(int day,int month,int year)

//     {
//         static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
//         year -= month < 3;
//         return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
//     }

//    string getmonthname (int montnumber)
//    {
//          string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
//          return (months[montnumber]);
//    }
//    int numberofday(int monthnumber,int year)
//    {
//          if(monthnumber==0)
//          return(31);
//          if(monthnumber==1)
//          {
//               if(year%4==0)
//               return(29);
//               else
//               return(28);
//          }
//          if(monthnumber==2)
//          return(31);
//          if(monthnumber==3)
//          return(30);
//          if(monthnumber==4)
//          return(31);
//          if(monthnumber==5)
//          return(30);
//          if(monthnumber==6)
//          return(31);
//          if(monthnumber==7)
//          return(31);
//          if(monthnumber==8)
//          return(30);
//          if(monthnumber==9)
//          return(31);
//          if(monthnumber==10)
//          return(30);
//          if(monthnumber==11)
//          return(31);
//    }
//    void printclunder(int year)
//    {
//             int days;
//             int current;
//             current=daynumber(1,1,year);
//             days=numberofday(1,year);
//             cout<<"Calender of"<<year<<endl;
//             cout<<"---------------------------"<<endl;
//             cout<<"Sun Mon Tue Wed Thu Fri Sat"<<endl;
//             int k;
//             for(k=0;k<current;k++)
//             cout<<"    ";
//             for(int j=1;j<=days;j++)
//             {
//                 printf("%2d",j);
//                 if(++k>6)
//                 {
//                     k=0;
//                     cout<<endl;
//                 }
//                 else
//                 cout<<" ";
//             }
//             if(k)
//             cout<<endl;
//             current=k;
//    }
//    return;
// }
// int main()
// {
//     int year;
//     cout<<"Enter the year";
//     cin>>year;
//     printclunder(year);
//     return 0;
// }








#include <iostream>
#include <string>
using namespace std;

int dayNumber(int day, int month, int year) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

string getMonthName(int monthNumber) {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return months[monthNumber];
}

int numberOfDays(int monthNumber, int year) {
    if (monthNumber == 0)
        return 31;
    if (monthNumber == 1) {
        if (year % 4 == 0)
            return 29;
        else
            return 28;
    }
    if (monthNumber == 2)
        return 31;
    if (monthNumber == 3)
        return 30;
    if (monthNumber == 4)
        return 31;
    if (monthNumber == 5)
        return 30;
    if (monthNumber == 6)
        return 31;
    if (monthNumber == 7)
        return 31;
    if (monthNumber == 8)
        return 30;
    if (monthNumber == 9)
        return 31;
    if (monthNumber == 10)
        return 30;
    if (monthNumber == 11)
        return 31;
}

void printCalendar(int year) {
    int days;
    int current;
    current = dayNumber(1, 1, year);
    days = numberOfDays(0, year); // January has month number 0
    cout << "Calendar of " << year << endl;
    cout << "---------------------------" << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
    int k;
    for (k = 0; k < current; k++)
        cout << "    ";
    for (int j = 1; j <= days; j++) {
        printf("%2d", j);
        if (++k > 6) {
            k = 0;
            cout << endl;
        } else
            cout << " ";
    }
    if (k)
        cout << endl;
}

int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;
    printCalendar(year);
    return 0;
}


