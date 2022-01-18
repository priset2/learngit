//
//  main.cpp
//  leran c
//
//  Created by 海纳百川 on 2022/1/17.
//
//浅拷贝 深拷贝_27
//列表初始化_28
#include <iostream>
using namespace std;

// 1
class person
{
public:
    person()
    {
        cout<<"person 构造函数"<<endl;
    }
    person(int age,int hight)
    {
        m_age=age;
        m_high = new int(hight);//不要重复定义指针
        cout<<"person 构造函数"<<endl;
    }
    person( const  person &q)//拷贝
    {
        cout<<"person 的拷贝构造函数"<<endl;
        m_age=q.m_age;
        //在考备构造中深拷贝一次
       m_high = new int (*q.m_high);
    }
    ~person()
    {
        //解析代码释放堆区数据
        //易引发堆区的内存重复释放，利用深拷贝解决
        if(m_high!=NULL)
        {
            delete m_high;
            m_high=NULL;
        }
        cout<<"person解析函数"<<endl;
    }
    int m_age;
    int *m_high;
};
void test01()
{
    person p1(18, 120);
    cout<<"p1的年龄为 "<<p1.m_age<<" "<<"p2身高为:"<<*p1.m_high <<endl;
    person p2(p1);
    cout<<"p2的年龄为 "<<p2.m_age<<" "<<"p2身高为:"<<*p2.m_high <<endl;
    
}

int main()
{
    test01();
    return 0;
}
