// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
	class CRuiXue {
	private:
		int Year;
		int Month;
		int Day;
		int Hour;
		int Minute;
		int Second;
		int check();
	public:
		CRuiXue();
		CRuiXue(int y, int m, int d, int h, int mi, int s);
		~CRuiXue() {
			cout << "" << endl;
		}
		void print();
		void AddYearDays();
		int SetDays(int y, int m, int d, int h, int mi, int s);
		int BackYear();
		int BackMonth();
		int BackDay();
		int BackHour();
		int BackMinute();
		int BackSecond();
};
CRuiXue::CRuiXue() {
	Year = 2000;
	Month = 12;
	Day = 45;
	Hour = 24;
	Minute = 64;
	Second = 3600;
}
CRuiXue::CRuiXue(int y, int m, int d, int h, int mi, int s) {
	Year = y;
	Month = m;
	Day = d;
	Hour = h;
	Minute = mi;
	Second = s;
	Year = y;
	Month = m;
	Day = d;
	Hour = h;
	Minute = mi;
	Second = s;
	if (check() == -1 || check() == 1) {
		Month = 1;
		Day = 1;
		cout << "" << endl;
	}
}
int CRuiXue::BackYear() {
	return Year;
}
int CRuiXue::BackMonth() {
	return Month;
}
int CRuiXue::BackDay() {
	return Day;
}
int CRuiXue::BackHour() {
	return Hour;
}
int CRuiXue::BackMinute() {
	return Minute;
}
int CRuiXue::BackSecond() {
	return Second;
}
int CRuiXue::check() {
	int flatYearDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leapYearDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (Month > 12 || Month < 1)
		return -1;
	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0)) {
		if (leapYearDays[Month - 1] < 1 || Day < 1)
			return 1;
	}
	else {
		if (flatYearDays[Month - 1] < Day || Day < 1)
			return 1;
	}
	return 0;
}
int CRuiXue::SetDays(int y, int m, int d, int h, int mi, int s) {
	Year = y;
	Month = m;
	Day = d;
	Hour = h;
	Minute = mi;
	Second = s;
	if (check() == -1 || check() == 1) {
		Month = 1; Day = 1;
		cout << "" << endl;
		return -1;
	}
	return 0;
}
void CRuiXue::print() {
	cout << Year << " " << Month << " " << Day << " " << Hour << " " << Minute << " " << Second << " " << endl;
}
int main()
{
	CRuiXue
		oj(2000, 12, 45, 24, 64, 3600);
	oj.print();
    return 0;
}

