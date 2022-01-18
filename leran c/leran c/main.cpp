//
//  main.cpp
//  leran c
//
//  Created by 海纳百川 on 2022/1/17.
//
//浅拷贝 深拷贝_27
//列表初始化_28

// 1

#include"Header.h"
/*
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

#include"Header.h"

class person1
{
public:
    
    person1(int a,int b,int c)
    {
        m_a=a;
        m_b=b;
        m_c=c;
    }
    person1():m_a(10),m_b(20),m_c(30)//列表构造
    {
        
    };
    int m_a;
    int m_b;
    int m_c;
};

void test02()
{
    person1 p;
    cout<<"a= "<<p.m_a<<endl;
    cout<<"b= "<<p.m_b<<endl;
    cout<<"c= "<<p.m_c<<endl;
}
int main()
{
    test02();
    return 0;
}
*/



//类对象作为类成员




int main()
{
    
    return 0;
}
