#ifndef TEMPTRENDER_H
#define TEMPTRENDER_H

#include <string>

class tempTrender {
 public:
  tempTrender(std::string filePath);
  ~tempTrender() {}
  void setFilePath(std::string filePath) {filePath_ = filePath; }
  std::string getFilePath(){return filePath_;}

  void DayTemp(int monthToCalculate, int dayToCalculate); //Make a histogram of the temperature on this day
  void tempPerDay(); //Make a histogram of the average temperature of each day of the year
  void hotCold(); //Make a histogram of the hottest and coldest day of the year
  void tempPerMonth(); //Make a histogram of the average, hottest and coldest day in each month
  void tempPerYear(); //Make a histogram of the average temperature in each year.
 private:
  std::string filePath_;
};

#endif
