#include<iostream>
#include<vector>	//“容器”，定义可变数组 
#include<queue>
using namespace std;
void Func(); 
int n;
struct comp		//运算符重载,记住 
{
	bool operator()(const int &a,const int &b)
	{
		return a>b;
	}
};
int main()
{
	cin>>n;
	Func();
	return 0;
}
void Func()
{
	priority_queue <int,vector<int>,comp> q;  //利用vector和comp实现升序排列 
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int read;
		cin>>read;
		q.push(read);
	}
	while(q.size()!=1)
	{
		int a=q.top();
		q.pop();
		int b=q.top();
		q.pop();
		int c=a+b;
		ans+=c;
		q.push(c);
	}
	cout<<ans;
}
