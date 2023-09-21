#include <iostream>
#include <cstring>
using namespace std;

struct HugeInt
{
	int len;
	int num[ 100001 ];
};

HugeInt a , b , w;
char c[ 10001 ] , d[ 10001 ];

void Scan_HugeInt ( )
{
	cin >> c;
	cin >> d;
	a.len = strlen ( c );
	b.len = strlen ( d );
	for( int i = 0; i < a.len; i++ ) a.num[ a.len - i ] = c[ i ] - '0';
	for( int i = 0; i < b.len; i++ ) b.num[ b.len - i ] = d[ i ] - '0';
}

void Multiply ( )
{
	int x;
	for( int i = 1; i <= a.len; i++ )
	{
		x = 0;
		for( int j = 1; j <= b.len; j++ )
		{
			w.num[ i + j - 1 ] += a.num[ i ] * b.num[ j ] + x;
			x = w.num[ i + j - 1 ] / 10;
			w.num[ i + j - 1 ] %= 10;
		}
		w.num[ i + b.len ] = x;
	}
	w.len = a.len + b.len;
	while( w.num[ w.len ] == 0 && ( w.len != 1 ) ) w.len--;
}

int main ( )
{
	Scan_HugeInt ( );
	Multiply ( );
	for( int i = w.len; i >= 1; i-- )
		cout << w.num[ i ];
	cout << endl;
	return 0;
}