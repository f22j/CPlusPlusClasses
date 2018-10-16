#pragma once
#include <iostream>
using namespace std;

class Time {

	int second, hour, minute;

	void need_null(int needer){
		if (needer < 10)cout << 0;
	}

	public:

		Time(int h = 0, int m = 0, int s = 0) {

			set_hour(h);
			set_minute(m);
			set_second(s);

		}

		void set_second(int new_second){

			if (new_second > 60 || new_second < 0)second = 0;
			else second = new_second;

		}

		void set_minute(int new_minute) {

			if (new_minute > 60 || new_minute < 0)minute = 0;
			else minute = new_minute;

		}

		void set_hour(int new_hour){

			if (new_hour > 24 || new_hour < 0)hour = 0;
			else hour = new_hour;

		}

		void set_time(int a, int b, int c){

			set_hour(a);
			set_minute(b);
			set_second(c);

		};

		void append_hour(int added_hour = 1){

			if (hour + added_hour >= 23)hour = (hour + added_hour) - 24; else hour += added_hour;

		};

		void append_minute(int added_minute = 1){

			if (minute + added_minute >= 59) {

				minute = (minute + added_minute) - 60;
				append_hour();

			}else minute += added_minute;

		}

		void append_second(int added_second = 1) {

			if (second + added_second >= 59) {

				second = (second + added_second) - 60;
				append_minute();

			}else second += added_second;

		}

		int get_second(){
			return second;
		}

		int get_minute() {
			return minute;
		}

		int get_hour() {
			return hour;
		}

		void get_time(char end = '\n'){

			need_null(hour);
			cout << hour << ":";

			need_null(minute);
			cout << minute << ":";

			need_null(second);
			cout << second << end;
		}

};
