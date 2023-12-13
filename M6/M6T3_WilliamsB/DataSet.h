#ifndef DATASET_H
#define DATASET_H

#include <iostream>
using namespace std;

class SettingsData {
public:
  string name;
  double data;
  SettingsData* next;

  SettingsData(string n, double d) : name(n), data(d) {}
};

SettingsData a1("Orca213BQ3KLNewDefault", 2.90);
SettingsData a2("Mistral2217BQ4KMFast4096", 18.19);
SettingsData a3("Mistral2217BQ4KMlMDefault", 2.32);
SettingsData a4("ReplitOpenOrcaGGMLv1q8Fast4096", 7.39);



#endif