#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<utility>
using namespace std;

class math_parser{
 
 public:
 	string equation_format;	                                  // stores the string which contains meta data of equation
//---------------------------------Token intitialisation-----------------------------------------------------------------//
/*
        Implementation details:
        Token handling is done by using a map which takes token string as input and outputs a vector of heads
        which represent the locations of tokens || For example  | token["cos"][2] will give the the location of 
	(2+1=3)rd reccurence of "cos" token 
*/
 vector<size_t> v = {0};                   // Dummy vector for filling the map
 map <string , vector<size_t>> token; // token["string"] is a vector of [reccurence points]
 const pair<string , vector<size_t>> tokenpairs[29]= { 
	{":"      , v},  {";"	 ,v},   {","	, v},     {"["	   , v},    
	{"]"      ,	v},  {"("	 ,v},   {")"	, v},     {"/"	   , v},  
	{"*"      ,	v},  {"+"	 ,v},   {"-"	, v},     {"^"	   , v},     
	{"="      ,	v},  {"pow"	 ,v},   {"log"  , v},     {"sqrt"  , v},  
	{"sin"	  ,	v},  {"cos"	 ,v},   {"tan"	, v},     {"e"	   , v},  
	{"cosec"  ,	v},  {"sec"	 ,v},   {"cot"	, v},     {"asin"  , v},
	{"acos"   ,	v},  {"atan" ,v},   {"acot"  ,v},     {"acosec" ,v},
	{"asec"   , v}};
math_parser()
	{       //inserts tokenpairs into the map
		for(auto i : this->tokenpairs)
		this->token.insert(i);
	}
 //-----------------------------------------Token collection---------------------------------------------------------------//  	
  
 /*  
    Implementation details:
    Token are collected from the string "metaequation" and their details are stored in the map "token"
    for further preprocessing.
*/

	 
    void meta_equation(string equation)                       // takes input of the meta equation string
    {
       this->equation_format = equation;
       //fetching the tokens
	  	for(auto TOKEN : this->token )
              {
              	size_t head = 0 , i =0;
              	if( this->equation_format.find(TOKEN.first , head) != string::npos )
			       {
				   cout << TOKEN.first << " token found " <<  endl;
			     	while( this->equation_format.find(TOKEN.first , head) != string::npos )
				    {
				    	cout << " init head " << head << endl;
				    	TOKEN.second.push_back(this->equation_format.find(TOKEN.first , head));
				    	head = this->equation_format.find(TOKEN.first , head)+1 ;
				    	cout << "  changed head  " << head << endl;
				    	cout << TOKEN.first << " at " << TOKEN.second[i] <<endl;
				    	++i;  	
					}
				}
              
			    }
		 
    }
};
	
	int main()
	{
		
		
		math_parser x;
		x.meta_equation("hell oworld ; g ; ;g d  ^^^ ");
		return 0;
}
