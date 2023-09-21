#include "bits/stdc++.h"
using namespace std;
typedef pair<int , int>P;//pair将两个int合为一个数据并且用typedef将pair新的数据类型创建新名字P
P arr[ 1005 ];
bool cmp ( P a , P b )//sort函数的自定义排序
{
    if( a.second == b.second ) return a.first > b.first;//如果结束时间相等就按开始时间从大到小排序（更容易快一点找到符合条件的）
    return a.second < b.second;//结束时间不相等就按结束时间从小到大排列
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