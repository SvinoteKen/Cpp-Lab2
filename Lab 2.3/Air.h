#pragma once
#include <string>
#include <iostream>
using namespace std;
class Air
{
public:
	Air();
	Air(int year, int weight, string mode, int temperature,const string model, const string firm);
	void setModel(const string& model);
	void setFirm(const string& firm);
	void setWeight(int weight);
	void setTemperature(int temperature);
	void setMode(const string& mode);
	void setYear(int year);

	string  getModel() const;
	string getFirm() const;
	int getWeight() const;
	int getTemperature() const;
	string getMode() const;
	int getYear() const;
	void AVG() const;
	void serialize() const;
	void serialize(const string& filename) const;
	void deserialize();
	void deserialize(const string& filename);
	friend ostream& operator << (std::ostream&, const Air&);
	void printInfo() const;
	friend ostream& operator<<(ostream& os, Air& a)
	{
		os << a.t <<","<< a.model_;
		return os;
	}
private:
	string model_;
	string firm_;
	string mode_;
	int w;
	int t;
	int year_;
	int mean;
	int c;
};

