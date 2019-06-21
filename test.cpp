// compile 0.01 - define a function object - function.h

#include <iostream>
#include "function.h"

class volume:public function
{
public:
	float operator()(float length, float width, float height) { return length*width*height; }
};

int main(int argc, char *argv[])
{
	float l=7.12, w=3.22, h=4.51;

	volume V;
	float v = V(l,w,h);

	std::cout<<"volumen : "<<v<<std::endl;

	return 0x0;
}


// test the analyses - functions - variables - units program structure
// I would like to study/use some design patterns later...
// now focusing on class definitions and templates

/*
	estructura de ficheros del proyecto:
	function.h - function.cpp
	variable.h - variable.cpp
	dimension.h - dimension.cpp
	analysis.h - analysis.cpp
	test.cpp
*/
// ojalá supiera incorporar el LaTeX to PDF

	//	FUNCIONES
// definir una función R^3->R, overloaded ()
// overload gradiente, derivada e informe
// template f: R^N->R, evaluate con floats.
	// VARIABLES
// overload operators de variable 
// variable con label y nombre
// función aceptando variables con nombre
	// UNIDADES
// dimension en función de 7 unidades básicas !??
// variable con dimensión
// función chequeo - excepciones en el chequeo de dimensiones
	// ANALISIS
// contiene un conjunto de funciones?
// que se calculan con un conjunto de variables intermedias?
// que hacen el report de todas?
	// LOAD CASE
// el cálculo del allowable es un análisis y potro el del stress
// para cada load case calculas el stress y MS
// el allowable una sola vez

// template de variables (int, string, float, double)
// variables fracciones y numeros complejos
// variables vectores y tensores




/*
#include <iostream>
#include <cstdint>
#include <string>

class vfloat
{
	// nice code here
public:
	// --------- constructor -------------------------------------------
	vfloat (std::string name, std::string label, float value, unit_t unit);
	// -------- operators -----------------------------------
	vfloat &operator+=();
	vfloat &operator-=();
	vfloat &operator*=();
	vfloat &operator/=();
private:

};

template <int N>
class function	// f: R^N->R
{
public:
	// los valores de entrada se guardan en un array de N variables
	bool check_units(const std::array<n, vfloat> &variable) = 0;
	float evaluate(const std::array<N, vfloat> &variable) = 0; // prefiero overload operator ()
	float derivative(const std::array<N, vfloat> &variable, int v) = 0;
	std::array<N, vfloat>& gradient(const std::array<N, vfloat> &variable) = 0;
	// print input variables, formula, result and reference
	bool report(std::ofstream ofs) = 0; // prefiero friend std::ofstream >> ??
private:
	bool check_sum(const vfloat lhs, const vfloat rhs);
	bool check_product(const vfloat lhs, const vfloat rhs);
	bool check_division(const vfloat lhs, const vfloat rhs);
	bool check_power(const vfloat exp, const vfloat val);	// como se llamaban, exponente y ¿?
};

class fvolume : public function<3>
{};

union dim_t
{
	std::int8_t exp[8];
	std::uint64_t d;
};
const char* PrintDimension (dim_t d)
{
	static const char* LABEL_DIM = "LMTItNJ";


}
class variable
{};

int main (int argc, char* argv[])
{

}


*/