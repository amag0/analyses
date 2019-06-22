#ifndef FUNCTION_H
#define FUNCTION_H

#include <array>
#include <iostream>

typedef std::array<float, 3> float3_t;
class function
/* Function object f(): R^3->R. Stores last input/output.
Will write a LaTeX report. Only private methods will be virtual
so that interface and behavior is fully defined */
{
public:
	// interface
	float operator()(const float3_t var);
	virtual float3_t gradient(const float3_t var) = 0;
	friend std::ostream& operator<<(std::ostream& os, const function& obj);
private:
	// record last evaluation state
	mutable float3_t::const_iterator itstate;
	float3_t state;
	float output;
	virtual float evaluate(const float3_t var) = 0;
};

#endif