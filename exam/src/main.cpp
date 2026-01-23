#include "../inc/vect2.hpp"

int main(void)
{
	std::cout << "=== Constructors ===\n";
	vect2 a;
	vect2 b(3, 4);
	vect2 c(b);

	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "c = " << c << "\n";

	std::cout << "\n=== Assignment ===\n";
	a = b;
	std::cout << "a = b -> a = " << a << "\n";

	std::cout << "\n=== Comparison ===\n";
	std::cout << "(a == b) = " << (a == b) << "\n";
	std::cout << "(a != c) = " << (a != c) << "\n";

	std::cout << "\n=== Arithmetic operators ===\n";
	vect2 d(1, 2);

	std::cout << "b + d = " << (b + d) << "\n";
	std::cout << "b - d = " << (b - d) << "\n";
	std::cout << "b * 2 = " << (b * 2) << "\n";
	std::cout << "2 * b = " << (b * 2) << "\n";

	std::cout << "\n=== Compound assignment ===\n";
	vect2 e(5, 5);

	e += d;
	std::cout << "e += d -> " << e << "\n";

	e -= d;
	std::cout << "e -= d -> " << e << "\n";

	e *= 3;
	std::cout << "e *= 3 -> " << e << "\n";

	std::cout << "\n=== Increment / Decrement ===\n";
	vect2 f(10, 20);

	std::cout << "f = " << f << "\n";
	std::cout << "f++ = " << f++ << "\n";
	std::cout << "after f++ -> " << f << "\n";

	std::cout << "++f = " << ++f << "\n";
	std::cout << "f-- = " << f-- << "\n";
	std::cout << "after f-- -> " << f << "\n";

	std::cout << "--f = " << --f << "\n";

	std::cout << "\n=== Subscript operator ===\n";
	vect2 g(7, 8);

	std::cout << "g[0] = " << g[0] << "\n";
	std::cout << "g[1] = " << g[1] << "\n";

	g[0] = 42;
	g[1] = 84;
	std::cout << "after g[0]=42, g[1]=84 -> " << g << "\n";

	std::cout << "\n=== Getters / Setters ===\n";
	g.setx(100);
	g.sety(200);
	std::cout << "x = " << g.getx() << ", y = " << g.gety() << "\n";

	std::cout << "\n=== End of tests ===\n";
	return 0;
}

