#ifndef _LREGRESS_H_
#define _LREGRESS_H_
#include "../Algebra/GteMatrix.h"
#include "../Algebra/GteVector3.h"
#include <cstdio>
using namespace gte;

//�ݶ�������Ȩֵw�ĸ��¹�ʽ��
//matrixW = matrixW + alpha * matrixX.transpose() * (matrixLabel - matrixh)
//matrixX ��(m, n)����matrixLabel ��matrixh ����(m, 1)����
//m������������n��ÿ����������������
//ȨֵmatrixW ��(n,1)����


class logisticRegression
{
public:
	//��ʼ�����ݼ�
	void loadDataSet();

	//�ݶ���������Ȩֵw
	Matrix<3, 1, double> gradAscend();

	//���Է�������׼ȷ��
	void testClassify();

	Matrix<100, 3, double> data;
	Matrix<100, 1, double> label;
	Matrix<3, 1, double> weights;
private:
	//sigmoid����
	double sigmoid(double z);

};




#endif