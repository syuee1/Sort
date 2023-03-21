#pragma once
#include<vector>
#include<iostream>
#include <fstream>
#include <sstream>
#include <string>
#include<algorithm>
#ifndef _HOMEWORK1_
#define _HOMEWORK1_

using std::vector;
using namespace std;

class P_data {
private:
	int a, b;			//a 样本个数，b 特征个数
	vector<vector<double>> np;
	vector<int>classify;
	const char* path;
public:
	P_data(const char file_path[],const int a=150,const int b=4):path(file_path),a(a),b(b){}
	
	void read_data();

	vector<vector<double>>& get_np();

	vector<int>& get_classify();
	
	void all_print() const;

};




#endif