#include<iostream>
#include<string.h>



//prog1:


//class Vector
//{
//private:
//	int x;
//	int y;
//	int z;
//public:
//	Vector(int _x, int _y, int _z) :
//		x(_x), y(_y), z(_z) 
//	{
//		std::cout << "just wtited: ";
//	}
//	Vector(const Vector &vector) :
//		x(vector.x),
//		y(vector.y),
//		z(vector.z)
//	{
//		std::cout << "copied: ";
//	}
//	int getx();
//	int gety();
//	int getz();
//
//};
//
//int Vector::getx() { return x; }
//int Vector::gety() { return y; }
//int Vector::getz() { return z; }
//
//int main()
//{
//	Vector v1 = Vector(6, 5, 4);
//	std::cout << "1 sposob: " << v1.getx() << " " << v1.gety() << " " << v1.getz() << std::endl;
//	Vector v2(Vector(7, 2, 4));
//	std::cout << "2 sposob: " << v2.getx() << " " << v2.gety() << " " << v2.getz() << std::endl;
//	Vector v3(3,8,1);
//	std::cout << "3 sposob: " << v3.getx() << " " << v3.gety() << " " << v3.getz() << std::endl;
//	Vector v4(v1);
//	std::cout << "4 sposob: " << v4.getx() << " " << v4.gety() << " " << v4.getz() << std::endl;
//	Vector v5 = v2;
//	std::cout << "5 sposob: " << v5.getx() << " " << v5.gety() << " " << v5.getz() << std::endl;
//	system("pause");
//}
//



//prog2:


class Matrix
{
private:
	int** a;
	int col;
	int row;
public:
	Matrix(int _col, int _row) :
		col(_col), row(_row)
	{
		a = new int*[row];
		for (int i = 0; i < row; i++)
		{
			a[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				a[i][j] = rand() % 10;
			}
		}
		std::cout << "just wtited: ";
	}
	Matrix(const Matrix &matrix) :
		col(matrix.col),
		row(matrix.row)
	{
		a = new int[col][row]
			memcpy(a, matrix.a, sizeof(col*row));
		std::cout << "copied: ";
	}
	int getcol();
	int getrow();
	int geta(int k);
};

int Matrix::getcol() { return col; }
int Matrix::getrow() { return row; }
int Matrix::geta() { return a[k] };

int main()
{
	/*Matrix m1 = Matrix(3, 2);
	std::cout << "1 sposob: " << m1.getcol() << " " << m1.getrow() << std::endl;
	for (int i = 0; i < m1.getcol(); i++)
	{
		for (int j = 1; j < m1.getrow(); j++)
		{
			std::cout << m1.geta(i + j);
		}*/
	}
	system("pause");
}


//prog3:


//class Vector
//{
//private:
//	int x;
//	int y;
//	int z;
//public:
//	Vector(int _x, int _y, int _z) :
//		x(_x), y(_y), z(_z) 
//	{
//		std::cout << "just wtited: ";
//	}
//	Vector(const Vector &vector) :
//		x(vector.x),
//		y(vector.y),
//		z(vector.z)
//	{
//		std::cout << "copied: ";
//	}
//	friend Vector operator+(Vector const &a, Vector const &b)
//	{
//		Vector slozh = Vector(a);
//		slozh.x = slozh.x + b.x;
//		slozh.y = slozh.y + b.y;
//		slozh.z = slozh.z + b.z;
//		return slozh;
//	}
//
//	friend Vector operator*(Vector const &a, Vector const &b)
//	{
//		Vector umnozh = Vector(a);
//		umnozh.x = umnozh.x * b.x;
//		umnozh.y = umnozh.y * b.y;
//		umnozh.z = umnozh.z * b.z;
//		return umnozh;
//	}
//
//	int getx();
//	int gety();
//	int getz();
//
//};
//
//int Vector::getx() { return x; }
//int Vector::gety() { return y; }
//int Vector::getz() { return z; }
//
//int main()
//{
//	Vector v1 = Vector(6, 5, 4);
//	std::cout << "1 sposob: " << v1.getx() << " " << v1.gety() << " " << v1.getz() << std::endl;
//	Vector v2(Vector(7, 2, 4));
//	std::cout << "2 sposob: " << v2.getx() << " " << v2.gety() << " " << v2.getz() << std::endl;
//	Vector v3(3,8,1);
//	std::cout << "3 sposob: " << v3.getx() << " " << v3.gety() << " " << v3.getz() << std::endl;
//	Vector v4(v1);
//	std::cout << "4 sposob: " << v4.getx() << " " << v4.gety() << " " << v4.getz() << std::endl;
//	Vector v5 = v2;
//	std::cout << "5 sposob: " << v5.getx() << " " << v5.gety() << " " << v5.getz() << std::endl;
//	Vector v6 = v1 + v2;
//	std::cout << "rez slozh: " << v6.getx() << " " << v6.gety() << " " << v6.getz() << std::endl;
//	Vector v7 = v1 * v2;
//	std::cout << "rez umnozh: " << v7.getx() << " " << v7.gety() << " " << v7.getz() << std::endl;
//	system("pause");
//}


//prog4:


//class Matrix
//{
//private:
//	int* a;
//	int col;
//	int row;
//public:
//	Matrix(int _col, int _row) :
//		col(_col), row(_row)
//	{
//		a = new int[col*row];
//		std::cout << "just wtited: ";
//	}
//	Matrix(const Matrix &matrix) :
//		col(matrix.col),
//		row(matrix.row)
//	{
//		a = new int[col,row]
//			memcpy(a, matrix.a, sizeof(col*row));
//		std::cout << "copied: ";
//	}
//	friend Matrix operator+(Matrix const &a, Matrix const &b)
//	{
//		Matrix slozh = Matrix(a);
//		for (i = 0, i < col*row, i++)
//		{
//			slozh.a[i] = slozh.x[i] + b.x;
//			return slozh;
//		}
//	}
//	int getcol();
//	int getrow();
//	int geta(int k);
//};
//
//int Matrix::getcol() { return col; }
//int Matrix::getrow() { return row; }
//int Matrix::geta() { return a[k] };
//
//int main()
//{
//	Matrix m1 = Matrix(3, 2);
//	std::cout << "1 sposob: " << m1.getcol() << " " << m1.getrow() << std::endl;
//	for (int i = 0; i < m1.getcol(); i++)
//	{
//		for (int j = 1; j < m1.getrow(); j++)
//		{
//			std::cout << m1.geta(i + j);
//		}
//	}
//	system("pause");
//}
