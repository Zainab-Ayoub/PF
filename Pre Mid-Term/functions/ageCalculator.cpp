//Write a function that takes your date of birth in YYYY, MM and DD format (separated by spaces) as input as well as the current date,
// in same format, and calculates your age in years, months and days. You must check for leap years also. Write a separate function to check for leap year.

#include <iostream>
#include <tuple>

bool isLeapYear(int year) {
    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

std::tuple<int, int, int> calculateAge(int birth_year, int birth_month, int birth_day,
                                       int current_year, int current_month, int current_day) {
    // Calculate initial differences
    int age_years = current_year - birth_year;
    int age_months = current_month - birth_month;
    int age_days = current_day - birth_day;

    // Adjust for negative days
    if (age_days < 0) {
        // Find number of days in the previous month
        int prev_month = (current_month == 1) ? 12 : current_month - 1;
        int prev_month_year = (current_month == 1) ? current_year - 1 : current_year;

        int days_in_prev_month;
        if (prev_month == 2) {
            days_in_prev_month = isLeapYear(prev_month_year) ? 29 : 28;
        } else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) {
            days_in_prev_month = 30;
        } else {
            days_in_prev_month = 31;
        }

        age_days += days_in_prev_month;
        age_months -= 1;
    }

    // Adjust for negative months
    if (age_months < 0) {
        age_months += 12;
        age_years -= 1;
    }

    return std::make_tuple(age_years, age_months, age_days);
}

int main() {
    int birth_year = 1990;
    int birth_month = 5;
    int birth_day = 20;
    int current_year = 2024;
    int current_month = 5;
    int current_day = 22;

    auto [years, months, days] = calculateAge(birth_year, birth_month, birth_day,
                                              current_year, current_month, current_day);

    std::cout << "Age: " << years << " years, " << months << " months, and " << days << " days\n";

    return 0;
}