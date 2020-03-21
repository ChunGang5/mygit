#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
class Util
{
	public:
	static void StringToLower(string& s)
	{
		transform(s.begin(),s.end(),s.begin(),::tolower);
	}
	static void StringToUpper(string& s)
	{
		transform(s.begin(),s.end(),s.begin(),::toupper);
	}
	static void Transfrom(string& s,vector<string>& v)
	{
		size_t i=0;
		string str;
		while(i<s.size())
		{
			size_t pos = s.find("\n",i);
			if(string::npos==pos)
				break;
			else
			{
				str=s.substr(i,pos-i);
				v.push_back(str);
				i=pos+1;
			}
		}

	}
	static void MakeKv(string s,string& key,string& val)
	{
		size_t pos = s.find(": ");
		if(string::npos==pos)
			return;
		else
		{
			key=s.substr(0,pos);
			val=s.substr(pos+2);
		}

	}
	static int StringToInt(string& s)
	{
		stringstream ss(s);
		int len=0;
		ss>>len;
		return len;
	}
	static string IntToString(int code)
	{
		stringstream ss;
		ss<<code;
		return ss.str();
	}
	static string CodeStatus(int code)
	{
		switch(code)
		{
			case 200:
				return "OK";
			case 404:
				return "NOT FOUND";
			default:
				break;
		}
	}
	static string SuffixToType(string s)
	{
		string ct="Content-Type: ";
		if(s==".html")
			ct+="text/html";
		else if(s==".gif")
			ct+="image/gif";
		else if(s==".css")
			ct+="text/css";
		else if(s==".js")
			ct+="application/x-javascript";
		else if(s==".png")
			ct+="image/png";
		else if(s==".jpg")
			ct+="image/jpeg";
		else if(s==".mp4")
			ct+="video/mpeg4";
		else if(s==".jpeg")
			ct+"image/jpeg";
		else if(s==".ico")
			ct+="application/x-ico";
		else
			ct+="text/html";
		return ct;
	}
};
