#include "bits/stdc++.h"
using namespace std;
int main ( ){
	int N = 101; //���100�����Լ�1���ظ�����
	
	int arr[ 101 ] = { 0 };//��ʼ����������Ԫ�ؾ�Ϊ0
	for( int i = 0; i < N-1; i++ ) //��������1-100����
	{
		arr[ i ] = i + 1;
		
	}
	srand ( time ( NULL ) );//��ʱ��Ϊ��������ӿ��������������
	int ran = rand ( ) % N;//����һ��1-100��Χ�ڵ������
	
	arr[ 100 ] = arr[ran];//�������ظ�������ԭ������һ�����Ƶ��������һ��
	arr[ ran ] = ran;
	
	int x1 = 0;
	for( int i = 1; i < N; i++ )
	{
		x1=x1 ^ i;//0^x=x��1^2^...^ran...^100
	}
	int result = 0;
	for( int i = 0; i < N ; i++ )
	{
		cout << arr[ i ] << endl;
		
		x1=x1 ^ arr[ i ];//1^1^2^2^3^3^...^ran^ran^ran^...^100^100=ran x^x=0��0^x=x
	}
	
	result = x1;
	cout << result << endl;
	system ( "pause" );
	return 0;
}