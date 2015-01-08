#ifndef _LREGRESS_H_
#define _LREGRESS_H_
#include "../Algebra/GteMatrix.h"
#include "../Algebra/GteVector3.h"
#include <cstdio>
#include <fstream>
using namespace std;
using namespace gte;

//batch�ݶ�������Ȩֵw�ĸ��¹�ʽ��
//matrixW = matrixW + alpha * matrixX.transpose() * (matrixLabel - matrixh)
//matrixX ��(m, n)����matrixLabel ��matrixh ����(m, 1)����
//m������������n��ÿ����������������
//ȨֵmatrixW ��(n,1)����

template <unsigned M, unsigned N>
class logisticRegression
{
public:
	//��ʼ�����ݼ�
	void loadDataSet();

	//�ݶ���������Ȩֵw
	Matrix<N, 1, double> gradAscend();

	//����ݶ���������Ȩֵw
	Matrix<N, 1, double> stocGradAscend(int maxCycles);

	//���Է�������׼ȷ��
	void testClassify();

	Matrix<M, N, double> data;
	Matrix<M, 1, double> label;
	Matrix<N, 1, double> weights;
private:
	//sigmoid����
	double sigmoid(double z);

};


#include "lregress.cpp"

#endif