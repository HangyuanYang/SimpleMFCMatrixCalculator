
#ifndef Mat_H
#define Mat_H

#include<iostream>
#include<cstring>
#include<typeinfo>
#include<cstdio>
#include<cmath>


template<class T>
class CMatrix
{
public:
	CMatrix() :m_Row(0), m_Col(0) {
		m_Element = NULL;
	}
	CMatrix(CMatrix& Matrix) {
		m_Row = Matrix.m_Row;
		m_Col = Matrix.m_Col;
		m_Element= NULL;
		if(m_Row||m_Col){
			m_Element = new T[m_Row*m_Col];
			for (int i = 0; i < m_Row; i++)
				for (int j = 0; j < m_Col; j++)
					m_Element[i*m_Col + j] = Matrix.m_Element[i*m_Col + j];
		}
	}
	CMatrix(int r, int c) :m_Row(r), m_Col(c) {
		m_Element = new T[r*c];
		int x;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++) {
				x = rand() % 200;
				m_Element[i*c + j] = typeid(T).name() == typeid(1).name() ? x / 10 : (double)x / 100;
			}
	}
	~CMatrix() {
		if (m_Element != NULL)
			delete[] m_Element;
	}
public:
	int m_Row;
	int m_Col;
	T* m_Element;
public:
	CMatrix MultiLeft(CMatrix&);
	CMatrix MultiRight(CMatrix&);
	CMatrix Plus(CMatrix&);
	CMatrix Minus(CMatrix&);
	CMatrix DotPt(T);
	CMatrix Transpos();
	CMatrix operator+(CMatrix&);
	void operator=(CMatrix&);
	CString output();
};

template<class T>
CMatrix<T> CMatrix<T>::MultiLeft(CMatrix<T>& Matrix)
{
	if (m_Col != Matrix.m_Row) {
		CMatrix<T> C;
		return C;
	}
	else {
		CMatrix<T> C(m_Row, Matrix.m_Col);
		for (int i = 0; i < m_Row; i++)
			for (int j = 0; j < Matrix.m_Col; j++)
			{
				C.m_Element[i*Matrix.m_Col + j] = 0;
				for (int k = 0; k < Matrix.m_Row; k++)
				{
					C.m_Element[i*Matrix.m_Col + j] += m_Element[i*m_Col + k] * Matrix.m_Element[k*Matrix.m_Col + j];
				}

			}
		return C;
	}
}
template<class T>
CMatrix<T> CMatrix<T>::MultiRight(CMatrix<T>& Matrix)
{
	if (m_Row != Matrix.m_Col) {
		CMatrix<T> C;
		return C;
	}
	else {
		CMatrix<T> C(Matrix.m_Row, m_Col);
		for (int i = 0; i < Matrix.m_Row; i++)
			for (int j = 0; j < m_Col; j++)
			{
				C.m_Element[i*m_Col + j] = 0;
				for (int k = 0; k < m_Row; k++)
				{
					C.m_Element[i*m_Col + j] += Matrix.m_Element[i*Matrix.m_Col + k] * m_Element[k*m_Col + j];
				}
			}
		return C;
	}
}
template<class T>
CMatrix<T> CMatrix<T>::Plus(CMatrix<T>& Matrix)
{
	if (m_Row != Matrix.m_Row || m_Col != Matrix.m_Col) {
		CMatrix<T> C;
		return C;
	}
	else {
		CMatrix<T> C(m_Row, m_Col);
		for (int i = 0; i < m_Row; i++)
			for (int j = 0; j < m_Col; j++)
			{
				C.m_Element[i*m_Col + j] = m_Element[i*m_Col + j] + Matrix.m_Element[i*m_Col + j];
			}
		return C;
	}
}
template<class T>
CMatrix<T> CMatrix<T>::Minus(CMatrix<T>& Matrix)
{
	if (m_Row != Matrix.m_Row || m_Col != Matrix.m_Col) {
		CMatrix<T> C;
		return C;
	}
	else {
		CMatrix<T> C(m_Row, m_Col);
		for (int i = 0; i < m_Row; i++)
			for (int j = 0; j < m_Col; j++)
			{
				C.m_Element[i*m_Col + j] = m_Element[i*m_Col + j] - Matrix.m_Element[i*m_Col + j];
			}
		return C;
	}
}
template<class T>
CMatrix<T> CMatrix<T>::DotPt(T value)
{
	CMatrix<T> C(m_Row, m_Col);
	for (int i = 0; i < m_Row; i++)
		for (int j = 0; j < m_Col; j++)
			C.m_Element[i*m_Col + j] = m_Element[i*m_Col + j] * value;
	return C;

}
template<class T>
CMatrix<T> CMatrix<T>::Transpos()
{
	CMatrix<T> C(m_Col, m_Row);
	for (int i = 0; i < m_Col; i++)
		for (int j = 0; j < m_Row; j++)
			C.m_Element[i*m_Row + j] = m_Element[j*m_Col + i];
	return C;

}
template<class T>
CMatrix<T> CMatrix<T>::operator+(CMatrix<T>& Matrix)
{
	if (m_Row != Matrix.m_Row || m_Col != Matrix.m_Col) {
		CMatrix<T> C;
		return C;
	}
	else {
		CMatrix<T> C(m_Row, m_Col);
		for (int i = 0; i < m_Row; i++)
			for (int j = 0; j < m_Col; j++)
			{
				C.m_Element[i*m_Col + j] = m_Element[i*m_Col + j] + Matrix.m_Element[i*m_Col + j];
			}
		return C;
	}
}
template<class T>
void CMatrix<T>::operator=(CMatrix<T>& Matrix)
{
	m_Row = Matrix.m_Row;
	m_Col = Matrix.m_Col;
	if(m_Element!=NULL){
		delete[] m_Element;
		m_Element=NULL;
	}
	if(Matrix.m_Element!=NULL){
		m_Element = new T[m_Row*m_Col];
		for (int i = 0; i < m_Row; i++)
			for (int j = 0; j < m_Col; j++)
				m_Element[i*m_Col + j] = Matrix.m_Element[i*m_Col + j];
	}
	return;
}

//**将矩阵输出到edittext!!一行最后要加 /r/n
template<class T>
CString CMatrix<T>::output()
{
	bool f=typeid(T).name()==typeid(1).name();
    CString answer=_T(""),x;
    for(int i=0;i<m_Row;i++)
	{
		for(int j=0;j<m_Col;j++)
		{
			x=_T("");
			if(f)x.Format(_T("%6d"),m_Element[i*m_Col+j]);
			else x.Format(_T("%6.2lf"),m_Element[i*m_Col+j]);
			answer+=x;
		}
	    answer+=_T("\r\n");
	}
	return answer;
}


#endif 