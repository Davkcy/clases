#include <iostream>
using namespace std;

class Date {
public:
	explicit Date(int d, int m, int y);
	Date() : day{0}, year{0}, month{1} {}
	
	void setDay(int d) {
		if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or
			month == 10 or month == 12) {
			if (d >= 1 && d < 32)
				day = d;
		}
		if (month == 4 or month == 6 or month == 9 or month == 11) {
			if (d >= 1 && d < 31)
				day = d;
		}
		if (month == 2) {
			if (year % 4 == 0) {
				if (d >= 1 && d < 30)
					day = d;
			} else if (d >= 1 && d < 29)
				day = d;
		}
	}
	
	void setMonth(int m) {
		if (m >= 1 && m <= 12) {
			month = m;
		}
	}
	void setYear(int y) {
		if (y >= 1900 && y <= 2050) {
			year = y;
		} else
			year = 1900;
	}
	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }
	void displayDate() const {
		cout << day << " / " << month << " / " << year << endl;
	}
	bool isLeapYear() const {
		if (year % 4 == 0)
			return true;
		else
			return false;
	}
	
private:
		int day;
		int year;
		int month{1};
};
