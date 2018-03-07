// timer.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "stdio.h"
#include <string>
#include <windows.h>
#include <winbase.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string msg = "Little Timer Coz Why the hell not\r\n\r\n    ";
	string str = "\r\btime till hacks ";
	int hours = 24;
	int min = 0;
	int sec = 0; //900 = 15 minutes
	
	cout << msg;
	
	while (hours >= 0 && sec >= 0 && min >= 0) {
		
		if (min <= 0 && hours > 0 ) {
			min = 60;
			hours--;
			if (min == 0 && hours < 0) {
				min = 0;
				}
			}
		
		if (sec == 0 && min >= 0) {
			sec = 60;
			min--;
		}
		
		if (sec <= 60 ) {
			Sleep(1000);
			sec--;
			cout << str << hours << ":" << min << ":" << sec;
		}
		else if (min == 0 && sec == 0 && hours == 0) { return 0; }
		if (hours < 0) { hours = 0; }
	}
	return 0;
}