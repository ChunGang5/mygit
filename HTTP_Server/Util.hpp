#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Util{
	public:
		static void StringToLower(string &s)
		{
			transform(s.begin(),s.end(),s.besin(),tolower);
		}
		static void StringToUpper(string &s)
		{
			transform(s.begin(),s.end(),s.begin(),toupper);
		}
		static void TransfromToVector(string &s,vector &v)
		{
			size_t start=0;
			while(1)
			{
				size_t pos = s.find(start,"\n");
				if(string::npos == pos)
				{
					break;
				}
				string sub_str=s.substr(start,pos-start);
				v.push_back(sub_str);
				start=pos+1;

			}
		}
		static void MakeKV(string s,string &key,string &value)
		{
			size_t pos = s.find(0,": ");
			if(string npos == pos)
			{
				return;
			}
			key = s.substr(0,pos);
			value = s.substr(pos+2,);
			
		}
	
};
