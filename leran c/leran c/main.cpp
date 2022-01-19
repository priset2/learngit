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




//类对象作为类成员
//先构造其他对象，再构造自身，析构顺序相反
class phone
{
public:
    
    phone (string name)
    {
        p_name=name;
        cout<<"phone的构造函数"<<endl;
    }
    
    
    string p_name;
    
    
};

class person
{
public:
    
    person(string name ,string pname):m_name(name), m_phone(pname)
    {
        cout<<"person的构造函数"<<endl;
    }
    string m_name;
    
    phone m_phone;
   
    
    
};
void test()
{
    person p("张三","iphone 13");
    
    cout<<p.m_name<<"--> "<<p.m_phone.p_name<<endl;
    
}

int main()
{
    test();
    return 0;
}

//静态成员
class person
{
  public:
    static int m_a;
    //静态成员变量同样有访问权限
private:
    static int m_b;
};

 
int person::m_a=100;//  唯一性，统一名称的静态变量只能同时存在一个值,所有对象共享一个变量

void test ()
{
    person p;
    cout<<p.m_a<<endl;
    cout<<person::m_a<<endl;//可以直接通过类名访问
    
}



*/
//静态成员函数
// 1`所有对象共享同一个函数
// 2～只可以访问静态成员变量
class person
{
public:
    
    static void func()
    {
        a=100;
        //b=200;
        cout<<"静态成员函数"<<endl;
    }
    static int a;
    int  b;
};
void  test ()
{
    person p;
    p.func();//两种访问方式
    
    person::func();
}


int person::a=100;
int main()
{
    test();
    
    return 0;
}
