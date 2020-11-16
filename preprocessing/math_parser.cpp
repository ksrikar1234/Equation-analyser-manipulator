#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<utility>
using namespace std;
class math_parser{
 
 public:
//---------------------------------Token intitialisation-----------------------------------------------------------------//
/*
        Implementation details:
        Token handling is done by using a map which takes token string as input and outputs a vector of heads
        which represent the locations of tokens || For example  | token["cos"][2] will give the the location of 
	(2+1=3)rd reccurence of "cos" token 
*/
 vector<unsigned short> v = {0};              // Dummy vector for filling the map
 map <string , vector<unsigned short>> token; // token["string"] is a vector of [reccurence points]
 const pair<string , vector<unsigned short>> tokenpairs[29]= { 
	{":"      , v},  {";"	 ,v},   {","	, v},     {"["	   , v},    
	{"]"      ,	v},	 {"("	 ,v},   {")"	, v},     {"/"	   , v},  
	{"*"      ,	v},  {"+"	 ,v},   {"-"	, v},     {"^"	   , v},     
	{"="      ,	v},  {"pow"	 ,v},   {"log"  , v},     {"sqrt"  , v},  
	{"sin"	  ,	v},  {"cos"	 ,v},   {"tan"	, v},     {"e"	   , v},  
	{"cosec"  ,	v},  {"sec"	 ,v},   {"cot"	, v},     {"asin"  , v},
	{"acos"   ,	v},  {"atan" ,v},   {"acot"  ,v},     {"acosec" ,v},
	{"asec"   , v}};
math_parser()
	{
		for(auto i : this->tokenpairs)
		this->token.insert(i);
	}
 //--------------------------------------------------------------------------------------------------------------------------------  	
  











	

	};
	
	int main()
	{
		
		
		math_parser();
		return 0;
		
	}
	
	
	
	
	
	
	
	
	
	
	
//	{"var_names"	},  {"algebraic_relation_map"			},   {			}
