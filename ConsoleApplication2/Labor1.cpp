#include <iostream>

int main()
{
	float x1, x2, x3, y1, y2, y3;
	float a, b, c;
	float per, sq, p;
	std::cout << "Enter the coordinates of the first vertex of the triangle: ";
	std::cin >> x1 >> y1;
	std::cout << "Enter the coordinates of the second vertex of the triangle: ";
	std::cin >> x2 >> y2;
	std::cout << "Enter the coordinates of the third vertex of the triangle: ";
	std::cin >> x3 >> y3;
	a = sqrt(pow((x1 - x2), 2) + (pow((y1 - y2), 2)));
	b = sqrt(pow((x2 - x3), 2) + (pow((y2 - y3), 2)));
	c = sqrt(pow((x3 - x1), 2) + (pow((y3 - y1), 2)));
	per = a + b + c;
	p = (a + b + c) / 2;
	sq = (float)sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << "Perimeter=" << per << "\n" << "Area(square)=" << sq << "\n";
	return 0;
}
