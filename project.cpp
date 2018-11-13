#include "tempTrender.h"
#include <string>

void project() {
  string pathToFile = "datasets/Lund.csv"; //Put the path to the data file here
  tempTrender t(pathToFile);
  t.DayTemp(8, 23);
  t.tempPerDay();
  t.hotCold();
  t.tempPerMonth();
  t.tempPerYear();
}
