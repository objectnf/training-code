#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue <int> pq;  //利用 priority_queue 定义优先队列 
	pq.push(1);
	pq.push(5);
	pq.push(3);
	pq.push(9);
	cout<<pq.size()<<endl;
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		/*优先队列的特点：元素自动排序。
		输出时是由大到小输出*/ 
		pq.pop();
	}
	return 0;
}
