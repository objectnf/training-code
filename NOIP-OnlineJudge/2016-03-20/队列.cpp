#include<iostream>
#include<queue>	//STL定义队列 
using namespace std;
int main()
{
	queue <int> q;  //定义int型队列q 
	q.push(1);	//元素入队 
	q.push(2);
	q.push(6);
	q.push(9);
	cout<<q.size()<<endl;	//查看队列大小 
	cout<<q.empty()<<endl;	//查看队列是否为空。为空输出1，不为空输出0 
	cout<<q.front()<<endl;	//查看队列第一个元素 （队首） 
	cout<<q.back()<<endl;	//查看队列 最后一个元素 （队尾） 
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();  //弹出元素 
	}
	return 0;
 } 
