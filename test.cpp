/*   history:
 compile 0.01 - define a function object - function.h
 compile 0.02 - function::gradient, ostream
*/
#include "function.h"
#include <iostream>

// ---------------------------------------------------------------------

class volume:public function
{
public:
	float3_t gradient(const float3_t var);
private:	
	float evaluate(const float3_t var); 
};
// ---------------------------------------------------------------------

float volume::evaluate(const float3_t var)
{ 
	return var[0]*var[1]*var[2];
}

float3_t volume::gradient(const float3_t var)
{ 
	float3_t gradient = {var[1]*var[2], var[0]*var[2], var[0]*var[1]}; 
	return gradient; 
}
// ---------------------------------------------------------------------

int main(int argc, char *argv[])
{
	float l=7.12, w=3.22, h=4.51;
	float3_t input = {l,w,h};

	volume V;
	float v = V(input);
	float3_t v_prima = V.gradient(input);

	std::cout<<V<<std::endl;
	std::cout<<"gradient : {"<<v_prima[0]<<", "<<v_prima[1]<<", "<<v_prima[2]<<"}"<<std::endl;

	return 0x0;
}