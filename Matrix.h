#pragma once
#include <iostream>
using namespace std;
template<class T>
class Matrix
{

private:
	T** mat;   //Cliente***
	int filas, columnas;
	int index, limit;


public:
	Matrix(int filas, int columnas);
	~Matrix();

	void agregar(int fila, int columna, T dato); //<Cliente*>

	void mostrar(void (*mostrarT)(T)); 	//mostrar(void (*mostrarT)(T*)) NO -----  <Cliente*> -> T SI

	void inicializar(int filas, int columnas);

	T* operator[](int fila);

	// get

	int getFilas();
	int getCols();

	void setFilas(int filas);
	void setCols(int columnas);




};

template<class T>
Matrix<T>::Matrix(int filas, int columnas)
{
	this->filas = filas;
	this->columnas = columnas;
	index = 0;
	limit = filas * columnas;

	mat = new T * [filas];
	for (int i = 0; i < filas; i++)
	{
		mat[i] = new T[columnas]; // T 

	}


}
template<class T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i < filas; i++)
	{
		delete[] mat[i];  //columnas
	}
	delete[]mat; //filas

}


template<class T>
void Matrix<T>::agregar(int fila, int columna, T dato)
{
	if (index < limit)
	{
		mat[fila][columna] = dato;
		index++;

	}
	else
	{
		cout << "error limite excedido " << endl;
	}





}

//mostrar  (puntero a una funcion)
template<class T>
void Matrix<T>::mostrar(void (*mostrarT)(T))
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
			(*mostrarT)(mat[i][j]);
	}

}

template<class T>
inline void Matrix<T>::inicializar(int filas, int columnas)
{

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
			mat[i][j] = NULL;
	}


}

template<class T>
inline T* Matrix<T>::operator[](int fila)
{
	return mat[fila];
}

template<class T>
inline int Matrix<T>::getFilas()
{
	return filas;
}

template<class T>
inline int Matrix<T>::getCols()
{
	return columnas;
}

template<class T>
inline void Matrix<T>::setFilas(int filas)
{
	this->filas = filas;
}

template<class T>
inline void Matrix<T>::setCols(int columnas)
{
	this->columnas = columnas;

}



