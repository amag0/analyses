#include "function.h"

float function::operator()(const float3_t var)
{
	state = var;
	output = evaluate(state);
	return output;
}

std::ostream& operator<<(std::ostream& os, const function& obj)
{
	obj.itstate=obj.state.begin();
	std::cout<<"Inputs R^3: "<<"("<<*(obj.itstate);
	while (++obj.itstate != obj.state.end())
		{ std::cout<<", "<<*(obj.itstate); }
	std::cout<<")"<<std::endl;

	std::cout<<"Result R: "<<obj.output<<std::endl;

	return os;
}