#ifndef TOOLS_H
#define TOOLS_H

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

#endif
