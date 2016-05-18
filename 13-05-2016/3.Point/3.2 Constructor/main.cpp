#include<iostream>
using namespace std;
/*implementar un único constructor, que si llama con 
0 argumentos , inicializa un punto al origen - ( 0 , 0 )
pero si llama con dos argumentos x e y , crea 
un punto situado en (x , y)*/
class Point
{
	private:
		int x, y;
	public:
		Point(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}
};
