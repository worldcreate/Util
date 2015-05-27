#include "Util.h"
#include <iostream>
#include <fstream>
#include <sstream>

vector<string> Util::split(const string &str, char delim){
	istringstream iss(str); string tmp; vector<string> res;
	while(getline(iss, tmp, delim)) res.push_back(tmp);
	return res;
}