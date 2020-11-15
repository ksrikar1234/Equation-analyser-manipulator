#include<string>
#include<iostream>
#include<vector>
#include<utility>
#include<cmath>
#include<cassert>
#include<sstream>
using namespace std;

class std_equation{
	public:
	vector<float>  vars;                                  // takes input of values of each variable during solving 
	vector<string> var_names;                             // variable names are stored 
	int max_variables = 0;                                // maximum number of variables
	string equation_format;	                              // stores the string which contains meta data of equation 
    void meta_equation(string equation);                  // takes input of the meta equation string
   	void getset_var();                                    // variable names and values are mapped
	void set_algrbraic_relation();                        // relationship is stored
    void generate();                                      // equation is generated
    float solve(vector<pair<string ,float>> passedvalues);// equation is solved	
};

//----------------------------------------------------------------------------------------++
std_equation :: void meta_equation(string equation)

    {
       this->equation_format = equation;
	}	

std_equation :: void getset_var(int max = 0)
   
    {     string token[4] = { {"max_var"}, {"="} , {":" }, {"var_names"} {","} };
	      size_t  head[4];
        if((this->equation_format).find(token[0] != string::npos)
           {
			if((this->equation_format).find(token[1] != string::npos)
              {
		  
		       head[0] = (this->equation_format).find(token[1];
	
		       if((this->equation_format).find(token[2] != string::npos))
		          {
                    head[1] = (this->equation_format).find(token[2]);
		            size_t temp_head1 = (this->equation_format).find("[" , head[0] ,head [1]);
		            size_t temp_head2 = (this->equation_format).find("]" , head[0] ,head [1]);
		            string maxval = "";
					for(size_t i = temp_head1+1) ; i < temphead2 ; ++i)
						{
					       string maxval += this->equation_format[i] 		
							
					    }     
		            this->max_variables = stoi(maxval); 
		       
			      }
		         
		       }
              
			}
          
	}
		      
    
//-------------------------------------------
 //for(int i = 0 ; i < head[1]; i ++)
//		                {
//-------------------------------	

std_equation :: void set_algrbraic_relation()
    
	{
 	
	
    }

std_equation :: void generate()
    
	{
	  
	
    }

std_equation :: solve(vector<pair<string,float>> passedvalues);

    {
    	assert(this->var.size == passedvalues.size+1);
    }



int main()
{
		
	std_equation newton_3rd_law;

	newton_3rd_law.meta_equation(" max_var = [3] :  var_names  = [force], [mass], [acceleration] :  algebraic relation mapping  = { ([force])/([mass]*[acceleration]= 1 } ");
	
	newton_3rd_law.generate();
	
	cout << newton_3rd_law.equation_format << endl;
	 
	cout << newton_law3.solve( {  {"force" , 23} , {"mass" , 50}  } ); 
	
	return 0;
	
}







