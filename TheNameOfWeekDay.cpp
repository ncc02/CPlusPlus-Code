// UVa 13025 - Back to the Past 
#include<bits/stdc++.h>
using namespace std;

string StringByIndex(int index){
	if (index== 2) return "Monday";
	if (index== 3) return "Tuesday";
	if (index== 4) return "Wednesday";
	if (index== 5) return "Thursday";
	if (index== 6) return "Friday";
	if (index== 7) return "Saturday";
	if (index== 8) return "Sunday";
}

string NameMonth(int monthPast){
	if (monthPast== 1) return "January";
	if (monthPast== 2) return "February";
	if (monthPast== 3) return "March";
	if (monthPast== 4) return "April";
	if (monthPast== 5) return "May";
	if (monthPast== 6) return "June";
	if (monthPast== 7) return "July";
	if (monthPast== 8) return "August";
	if (monthPast==9) return "September";
	if (monthPast==10) return "October";
	if (monthPast==11) return "November";
	if (monthPast==12) return "December";
}

string TheNameOfWeekDay(int index, int dayNow, int monthNow, int yearNow, int dayPast, int monthPast, int yearPast){
	
	bool leapYear= (yearNow%4==0 && yearNow%100!=0);
	while (dayNow != dayPast && monthNow != monthPast && yearNow != yearPast){
		
		dayNow--;
		index--;
		if (index==1) index= 8;
	
		if (dayNow == 0){
			
			monthNow--;
			
			if (monthNow==0){
				yearNow--;
				
				leapYear= (yearNow%4==0 && yearNow%100!=0);
				
				monthNow= 12;
				dayNow=31;
			}
			
			if (monthNow==1 || monthNow==3 ||monthNow==5||monthNow==7 ||monthNow==8 ||monthNow==10 ||monthNow==12){
				dayNow= 31;
			}
			else
			if (monthNow == 2){
				if (leapYear) dayNow=29;
					else dayNow=28;
			}	
			else dayNow=30;
				
		}
	}
	
	return NameMonth(monthPast)+" "+to_string(dayPast)+", "+to_string(yearPast)+" "+ StringByIndex(index);
}


int main(){
	int index= 8; //The name day of week day now : Sunday
	
	int dayNow= 24;
	int monthNow= 7;
	int yearNow= 2022;
	
	int dayPast= 29;
	int monthPast= 5;
	int yearPast= 2013; 
	
	cout<<TheNameOfWeekDay(index, dayNow, monthNow, yearNow, dayPast, monthPast, yearPast)<<"\n";
	
}
