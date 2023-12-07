
# include <iostream> ;
using namespace std ;
int main ()
{
/*
Name	                          Symbol	        Description	                                                            Example
Assignment Operator	                =	           Assigns the value on the right to the variable on the left 	
                                                                                                            int a = 2; 

                                                                                                            // a = 2

Add and Assignment Operator	         +=	           First adds the current value of the variable on left to the value on the right and then assigns the result to the variable on the left 	
                                                   then assigns the result to the variable on the left 	                                                        
                                                                                                           int a = 2, b = 4;

                                                                                                           a+=b; // a = 6

Subtract and Assignment Operator	-=	           First subtracts the value on the right from the current value of the variable on left
                                                    and then assign the result to the variable on the left	
                                                                                                            int a = 2, b = 4;                                   

                                                                                                             a-=b; // a = -2

Multiply and Assignment Operator	*=	       First multiplies the current value of the variable on left to the value on the right and then assign
                     t                         he result to the variable on the left
                                                                                                        int a = 2, b = 4;	         

                                                                                                         a*=b; // a = 8

Divide and Assignment Operator	/=	First divides the current value of the variable on left by the value on the right and then assign the result to    the variable on the left	
        the value on the right and then assign the result to the variable on the left	
                                                                                                          int a = 4, b = 2;            
                                                                                                          a /=b; // a = 2
*/
int rh,ph ;
rh = 2 ;
ph = 3 ; 
cout  << (rh  = ph)  << endl ;
cout  << (rh  += ph)  << endl ;
cout  << (rh  -= ph)  << "\n" ;
cout  << (rh  *= ph)  << endl ;










    return 0;
}
