#include<iostream>
#include<fstream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>

using namespace std;

class Mark
{
	public:
		double x;
		double y;
};

class MileStone
{
	public:
		double x;
		double y;
};

void split(const string& str, char spliter, vector<string>& result)
{
	int begin = 0, end = 0;
	while(true)
	{
		//find the first element != spliter
		while(begin < str.length() && str[begin] == spliter)
		{
			begin++;
		}
		//break if arriving the end
		if(begin >= str.length())
		{
			break;
		}
		else
		{
			end = begin+1;
			while(end < str.length() && str[end] != spliter)
			{
				end++;
			}
		}
		result.push_back(str.substr(begin, end - begin));
		begin = end + 1;
	}
}

int main()
{
	vector<Mark> marks;
	ifstream in("input");
	while(!in.eof())
	{
		string line;
		getline(in, line);
		vector<string> fields;

		split(line, ' ', fields);
		if(fields.size() == 2)
		{
			try
			{
				double x = atof(fields[0].c_str());
				double y = atof(fields[1].c_str());

				Mark m;
				m.x = x;
				m.y = y;
				marks.push_back(m);
			}
			catch(...)
			{
				//seems atof does not throw any exception in my test
				cout<<"error"<<endl;
			}
		}
	}
	cout<<marks.size()<<endl;
	return 0;
}
