#include "bits/stdc++.h"
using namespace std;
typedef pair<int , int>P;//pair������int��Ϊһ�����ݲ�����typedef��pair�µ��������ʹ���������P
P arr[ 1005 ];
bool cmp ( P a , P b )//sort�������Զ�������
{
    if( a.second == b.second ) return a.first > b.first;//�������ʱ����ȾͰ���ʼʱ��Ӵ�С���򣨸����׿�һ���ҵ����������ģ�
    return a.second < b.second;//����ʱ�䲻��ȾͰ�����ʱ���С��������
}

int main ( )
{
    int n;
    cin >> n;
    for( int i = 0; i < n; ++i ) cin >> arr[ i ].first >> arr[ i ].second;
    sort ( arr , arr + n , cmp );
    int last = arr[ 0 ].second;
    int cnt = 1;
    for( int i = 1; i < n; ++i ) {
        if( arr[ i ].first >= last ) {
            cnt++;
            last = arr[ i ].second;
        }
    }
    cout << cnt << endl;
    system("pause");
    return 0;
}