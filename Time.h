#pragma once
#include <iostream>
using namespace std;

class Time {

	int second, hour, minute;

	void need_null(int needer){
		if (needer < 10)cout << 0;
	}

	public:
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

		void append_hour(){

			if (hour == 23)hour = 0; else hour++;

		};

		void append_minute(){
		
			if (minute == 59) {

				minute = 0;
				append_hour();

			}else minute++;
		
		}

		void append_second() {

			if (second == 59) {

				second = 0;
				append_minute();

			}else second++;

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