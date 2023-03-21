#pragma once
#include<cmath>
#include"data.h"

template<class T>
vector<T> operator+(vector<T> &a, vector<T> &b)
{
	int length = a.size();
	vector<T>sum(length,-1);
	if (a.size() != b.size())
	{
		cout << "error" << endl;
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			sum[i]=a[i] + b[i];
		}
	}
	return sum;
}


template<class T>
double operator*(vector<T> &a, vector<T> &b)
{
	double sum = 0;
	if (a.size() != b.size())
	{
		cout << "error" << endl;
	}
	else
	{
		int length = a.size();
		for (int i = 0; i < length; i++)
		{
			sum += a[i] * b[i];
		}
	}
	return sum;
}

template<class T>
vector<T> operator*(T a, vector<T> &b)
{
	vector<T>sum;
	for (auto elem : b)
	{
		sum.push_back(a * elem);
	}
	return sum;
}

class model {
public:
	model(const double b, vector<vector<double>>&train, vector<int>&train_classify,const int a = 4)
		:train(train),train_classify(train_classify)	//a为特征个数，b为m_W初始值
	{
		m_w0.resize(a, b);
		m_w1.resize(a, b);
		m_w2.resize(a, b);
		rate = 0.1;
		num = 1000;
	}

	void train_0(int a, double b);
	void train_1(int a, double b);
	void train_2(int a, double b);
	void judge_all();
	void test_model(vector<vector<double>>&test, vector<int>&test_classify);
	void print();


private:
	vector<double>m_w0;
	vector<double>m_w1;
	vector<double>m_w2;
	vector<vector<double>>train;
	vector<int>train_classify;
	double rate;
	int num;

};
