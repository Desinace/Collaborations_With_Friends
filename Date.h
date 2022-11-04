#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

class Date {
public:
  Date() { //This is the basic constructor.
    this.month = 0;
    this.day = 0;
    this.year = 0;
  }
  Date(auto month, int day, int year) { //Constructor with inputs
    this.month = month;
    this.day = day;
    this.year = year;
  }
  
  //~Date(); //This is the destructor. Probably could keep this commented out.
  
  //Mutator Methods
  void setFullDate(auto month, int day, int year) {
    this.month = month;
    this.day = day;
    this.year = year;
  }
  void setMonth(auto month) {
    this.month = month;
  }
  void setDay(int day) {
    this.day = day;
  }
  void setYear(int year) {
    this.year = year;
  }
  
  //Accessor Methods
  string getFullDate() {
    string ans;
    ans += to_string(this.month);
    ans += "/";
    ans += to_string(this.day);
    ans += "/";
    ans += to_string(this.year);
  
  //Overloading the "<<" operator
  friend ostream& operator<<(ostream& os, const Date& dt) {
    os << dt.month << "/" << dt.day << "/" << dt.year;
    return os;
  }
  
private:
  auto month;
  int day;
  int year;
}
