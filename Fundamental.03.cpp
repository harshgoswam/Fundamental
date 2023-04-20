#include<iostream>
using namespace std;
main()
{

   char str[100];
   `
    
    for(int i=0;str[i];i++)
    {
    	if(str[i] >= 'A' && str[i] <= 'Z') 
		
		{ 
		   str[i] = str[i] + 32; 
		} 
		
		else if(str[i] >= 'a' && str[i] <= 'z')
        {
  	        str[i] = str[i] - 32;
	    }		
	}
    
	cout<<"Toggled string: "<<str<<endl;
 
}
