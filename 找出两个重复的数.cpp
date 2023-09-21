#include <iostream>
using namespace std;
int main ( ){
	int N = 101; //存放100个数以及1个重复的数
	
	int arr[ 101 ] = { 0 };//初始化数组所有元素均为0
	for( int i = 0; i < N-1; i++ ) //存入所有1-100的数
	{
		arr[ i ] = i + 1;
		
	}
	srand ( time ( NULL ) );//以时间为随机数种子可生成真正随机数
	int ran = rand ( ) % N;//生成一个1-100范围内的随机数
	
	arr[ 100 ] = arr[ran];//将生成重复数放在原数后，下一个数移到数组最后一个
	arr[ ran ] = ran;
	
	int x1 = 0;
	for( int i = 1; i < N; i++ )
	{
		x1=x1 ^ i;//0^x=x即1^2^...^ran...^100
	}
	int result = 0;
	for( int i = 0; i < N ; i++ )
	{
		cout << arr[ i ] << endl;
		
		x1=x1 ^ arr[ i ];//1^1^2^2^3^3^...^ran^ran^ran^...^100^100=ran x^x=0且0^x=x
	}
	
	result = x1;
	cout << result << endl;
	system ( "pause" );
	return 0;
}
