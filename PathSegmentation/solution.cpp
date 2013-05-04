/*
 * Author: Liqun Li
 * Description: ref to the description file
 * Date: 2013-4-22
 */
#include<fstream>
#include<string>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<cmath>
using namespace std;
#include "../Utility/tools.h"

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

void findNextMileStone(const MileStone& milestone, const vector<Mark>& marks, const double step_len, int& next_mark_idx, MileStone& next_milestone)
{
    if(next_mark_idx >= marks.size())
    {
        next_milestone.x = -1;
        next_milestone.y = -1;
        return;
    }
    double distance = sqrt(pow(milestone.x - marks[next_mark_idx].x, 2)+pow(milestone.y - marks[next_mark_idx].y,2));
    if(distance > step_len)
    {
        next_milestone.x = milestone.x + (marks[next_mark_idx].x - milestone.x)*step_len/distance;
        next_milestone.y = milestone.y + (marks[next_mark_idx].y - milestone.y)*step_len/distance;
        return;
    }
    else
        if(distance == step_len)
        {
            next_milestone.x = marks[next_mark_idx].x;
            next_milestone.y = marks[next_mark_idx].y;
            next_mark_idx++;
            return;
        }
        else
        {
            double tmp_step_len = step_len - distance;
            MileStone tmp_mile_stone;
            tmp_mile_stone.x = marks[next_mark_idx].x;
            tmp_mile_stone.y = marks[next_mark_idx].y;
            next_mark_idx++;
            findNextMileStone(tmp_mile_stone, marks, tmp_step_len, next_mark_idx, next_milestone);
        }
}

int main()
{
    //marks contains all Mark objects defining the path
    vector<Mark> marks;
    //read the marks from input file
    ifstream in("input");
    while(!in.eof())
    {
        string line;
        getline(in, line);
        vector<string> fields;

        //split fields with ' '
        split(line, ' ', fields);

        if(fields.size() == 2)
        {
            //it is interesting that atof always returns a double no matter what the parameter is
            double x = atof(fields[0].c_str());
            double y = atof(fields[1].c_str());
            Mark m;
            m.x = x;
            m.y = y;
            marks.push_back(m);
        }
    }
    in.close();

    //initialize the values
    MileStone m;
    m.x = marks[0].x;
    m.y = marks[0].y;
    int next_mark_idx = 1;
    MileStone next;
    ofstream out("output");
    while(true)
    {
        next.x = -1;
        next.y = -1;
        findNextMileStone(m, marks, 0.2, next_mark_idx, next);
        //the next milestone is not found
        if(next.x == -1 && next.y == -1)
        {
            break;
        }
        else
        {
            //output the next milestone
            out<<next.x<<" "<<next.y<<endl;
            //use the next milestone for finding
            //note that next_mark_idx is already changed in the function
            m.x = next.x;
            m.y = next.y;
        }

    }
    out.close();
    return 0;
}
//end
