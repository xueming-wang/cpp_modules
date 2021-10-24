/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:06:32 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/24 19:31:19 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "text.hpp"
//在C++中，我们可以使用静态成员变量来实现多个对象共享数据的目标，就像全局变量
//static 属于；类 不属于莫一个对象 分配一份内存 所有对象使用的都是这份内存中的数据
//当某个对象修改了 m_total，也会影响到其他对象。静态成员变量在初始化时不能再加 static 
//static 成员变量的内存既不是在声明类时分配，也不是在创建对象时分配，而是在（类外）初始化时分配。
//反过来说，没有在类外初始化的 static 成员变量不能使用。
// static 成员变量既可以通过对象来访问，也可以通过类来访问。请看下面的例子：
// //通过类类访问 static 成员变量
// Student::m_total = 10;
// //通过对象来访问 static 成员变量
// Student stu();
// stu.m_total = 20;
// //通过对象指针来访问 static 成员变量
// Student *pstu = new Student();
// pstu -> m_total = 20;
// 这三种方式是等效的。
//初始化时可以赋初值，也可以不赋值。如果不赋值，那么会被默认初始化为 0
//引用就是某一变量（目标）的一个别名，
//对引用的操作与对变量直接操作完全一样。引用的声明方法：类型标识符 &引用名=目标变量名；
//&在此不是求地址运算，而是起标识作用。
//int a=2,&ra=a;
//a为目标原名称，ra为目标引用名。给ra赋值：ra=1; 等价于 a=1;
//（5）对引用求地址，就是对目标变量求地址。&ra与&a相等。
// 不能建立引用的数组。因为数组是一个由若干个元素所组成的集合，
// 所以无法建立一个由引用组成的集合。但是可以建立数组的引用.
// 不存在空引用。引用必须连接到一块合法的内存。
// 一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
// 引用必须在创建时被初始化。指针可以在任何时间被初始化。
//但是在 C++ 中，我们有了一种比指针更加便捷的传递聚合类型数据的方式，那就是引用（Reference）。
//引用可以看做是数据的一个别名，通过这个别名和原来的名字都能够找到这份数据
//。引用必须在定义的同时初始化，并且以后也要从一而终，不能再引用其它数据，这有点类似于常量（const 变量）。
//避免复制避免空指针 传参的时候不是拷贝，节省了资源，而且速度快。 代替指针使用的
//函数的参数和返回类型。本质就是别名，所有对他的操作都会实施在‘本体’上
//cpp 就是 c文件  hpp 是 h文件
//read( STDIN_FILENO,buf,SIZE))   //读取标准输里的数，返回读取字节数。
//write( STDOUT_FILENO,buf,n)) 把buf 写到标准输出中
/* namespace ******************************************************************************* */
// namespace xue {
//     void print(void) {
//         std::cout << "xue" << std::endl;
//     }
// }

// namespace kang {
//     void print(void) {
//         std::cout << "kang" << std::endl;
//     }
// }

// using namespace xue;

// int main() {
//     print();
//     kang::print();
// }
// 全局变量
// int gl_var = 1;
// int f(void) {return 2;}

// namespace foo {
//     int gl_var = 3;
//     int f(void) {return 4;}
// }

// namespace muf = foo;

// int main(void) {
    
//     printf( "gl_var: %d\n", gl_var);
//     printf("f(): %d\n", f() );

//     printf( "foo:gl_var: %d\n", foo::gl_var);
//     printf("foo: f(): %d\n", foo::f() );

//     printf( "muf:gl_var: %d\n", muf::gl_var);
//     printf("muf: f(): %d\n", muf::f() );

//     printf("::gl_var: %d\n", ::gl_var);
//     printf("::f(): %d\n", ::f() );
// }

//     gl_var: 1
//     f():    2
// foo:gl_var: 3
// foo: f():   4
// muf:gl_var: 3
// muf: f():   4
//   ::gl_var: 1
//    ::f():   2

/* streams************************************************************************************************************* */
//#include <iostream>

//cin Standard input stream 
//cout Standard output stream
//cerr Standard output stream for errors

// int main(void)
// {
//     char buff[512];
    
//     std::cout << "hello world !" << std::endl;
//     std::cout << "input a word: ";
//     std::cin >> buff; //把输入的放进buf
//     std::cout << "your enterd: "<< buff << "" << std::endl;

//     return (0);
// }
// hello world !
// input a word: WDQW
// your enterd: WDQW

/* this******************************************************************************************************************/

// #include "megaohone.hpp"
// #include <iostream>

// Sample::Sample (void) {
//     std::cout << "Constrctor called" << std::endl;

//     this->foo = 42;
//     std::cout << "this->foo: " << this->foo << std::endl;

//     this->bar();
//     return;
// }

// Sample::~Sample (void) {
//     std::cout << "desstrctor called" << std::endl;
//     return;
// }

// void Sample::bar(void) {

//     std::cout << "Member function bar called" << std::endl;
// }

// int main() {
    
//     Sample Instance;

//     return 0;
// }

// Constrctor called
// this->foo: 42
// Member function bar called
// desstrctor called

/*init****************************************************************************************************************************/

// Sample1::Sample1(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {

//     std::cout << "Constrctor called" << std::endl;
//     std::cout << this->a1 << std::endl;
//     std::cout << this->a2 << std::endl;
//     std::cout << this->a3 << std::endl;
    
// }
// Sample2::Sample2(char p1, int p2, float p3) {

//     std::cout << "Constrctor called" << std::endl;

//     this->a1 = p1;
//     std::cout << this->a1 << std::endl;

//     this->a2 = p2;
//     std::cout << this->a2 << std::endl;

//     this->a3 = p3;
//     std::cout << this->a3 << std::endl;
// }
// Sample1::~Sample1 (void) {
//     std::cout << "desstrctor called" << std::endl;
//     return;
// }

// int main() {
    
//     Sample1 Instance('a', 42, 4.2f);

//     return 0;
// }

/* const************************************************************************************************* */
//直接赋值
// Sample::Sample(float const f) : pi(f),qd(42){
//    //std::cout << "创建我的class" << std::endl;
//    return ;
// }

// Sample::~Sample (void) {
//     //std::cout << "class运行结束 摧毁" << std::endl;
//     return;
// }

// void Sample::bar (void) const {
    
//      std::cout << this->pi << std::endl;
//      std::cout << this->qd << std::endl;
//  不可以给其他参数付值 比如 qd = 0;
//        return ;
// }

// int main() {
    
//     Sample instance(3.14f);

//     instance.bar();
//     return 0;
// }

// 结果 3.14
//     42
/* visibility 有private 和public* private只能在初始化时候使用付值，public也可以在外部访问********************************************************************************** */
// Sample::Sample(void) {

//     std::cout << "创建class" << std::endl;
//     this->publicfoo = 0;
//     std::cout << "this->publicfoo： " << this->publicfoo << std::endl;
//     this->_privatefoo = 0;
//     std::cout << "this->_privatefoo： " << this->_privatefoo << std::endl;

//     this->_privatebar();
//     this->publicbar();
// }

// Sample::~Sample(void) {

//     std::cout << "解散class" << std::endl;
//     return;
// }

// void Sample::publicbar(void) const {
//     std::cout << "memver funcion publicbar" << std::endl;
// }

// void Sample::_privatebar(void) const {
//     std::cout << "memver funcion _privatebar" << std::endl;
// }

// int main() {

//     Sample instance;  //运行sample 初始化 打印“创建” 然后publicfoo 和 privatefoo = 0; 在运行两个函数 bar(void)
//     instance.publicfoo = 42; //给值
//     std::cout << "instance.publicfoo：" << instance.publicfoo << std::endl; //打印输出值是42

//     // 错误instance._privatefoo = 42;

//     instance.publicbar();//运行函数 publicbar(void)
//     return 0;
    
// }
// //结果
// // 创建class
// // this->publicfoo： 0
// // this->_privatefoo： 0
// // memver funcion _privatebar
// // memver funcion publicbar
// // instance.publicfoo：42
// // memver funcion publicbar
// // 解散class
/*  accessors c++ ,if else ********************************************************************/
//如果变量改变值改变
// Sample::Sample(void) {

//     std::cout << "创建" << std::endl;

//     this->setfoo(0);
//     std::cout << "getfoo: " << this->getfoo() << std::endl;

//     return;
// }
// Sample::~Sample(void) {
    
//     std::cout << "解散" << std::endl;
//     return;
// }
// int Sample::getfoo(void) const {

//     return this->_foo;
// }
// void Sample::setfoo(int v) {

//     if (v >= 0)
//         this->_foo = v;
//     return;
// }
// int main() {
//     Sample instance;
    
//     instance.setfoo(42); //运行setfoo _foo = 42
//     std::cout << "getfoo(): " << instance.getfoo() << std::endl;//运行getfoo = -foo的值42
//     instance.setfoo(-42); //运行setfoo _foo = -42
//     std::cout << "getfoo(): " << instance.getfoo() << std::endl;//不改变还是42

//     return 0;
// }
//
// 创建
// getfoo: 0
// getfoo(): 42
// getfoo(): 42
// 解散

/* comparaison 对比比较******************************************************************/
// int Sample::getfoo(void)const {   //getfoo是 _foo的值
//         return this->_foo;
// }
// Sample::Sample(int v):_foo(v) {
//     return;
// }
// Sample::~Sample(void) {
    
//     std::cout << "解散" << std::endl;
//     return;
// }
// int Sample::comparer(Sample *other)const {
    
//     if (this->_foo < other->getfoo())
//         return -1;
//     else if ((this->_foo > other->getfoo()))
//         return 1;
//     return 0;
// } //两个Sample值一样

// int main() {
//     Sample instance1 (42);
//     Sample instance2(42);

//     if (&instance1 == &instance1) 
//         std::cout << "physically egal" << std::endl;  //地址一样
//     else
//          std::cout << " physically not egal" << std::endl;
//     if (&instance1 == &instance2)
//         std::cout << "physically stegal" << std::endl;
//     else
//          std::cout << "physically not egal " << std::endl; //1.2地址不一样
//     if (instance1.comparer(&instance1) == 0)
//         std::cout << "structurally elgal" << std::endl; //值一样
//     else
//          std::cout << "structurally not egal" << std::endl;
//     if (instance1.comparer(&instance2) == 0)
//         std::cout << "structurally elgal" << std::endl; //值不一样
//      else
//          std::cout << "structurally not egal" << std::endl;
//     return 0;
// }
// physically egal
// physically not egal 
// structurally elgal
// structurally elgal
// 解散

/* Non member attributes and non member functions **********************************************/
// Sample::Sample(void) {

//     std::cout << "建立" << std::endl;
//     Sample::_nbinst += 1;
//     return;
// }
// Sample::~Sample(void) {
    
//     std::cout << "解散" << std::endl;
//     Sample::_nbinst -= 1;
//     return;
// }
// int Sample::getnbinst(void) {

//     return Sample::_nbinst;
// }
// int Sample::_nbinst = 0;

// void f0(void) {
//     Sample instance;
//     std::cout << "nb of instance: " << Sample::getnbinst() << std::endl;

//     return;
// }
// void f1(void) {
//     Sample instance;
//     std::cout << "nb of instance: " << Sample::getnbinst() << std::endl;
//     f0();

//     return;
// }
// int main() {
    
//     std::cout << "nb of instance: " << Sample::getnbinst() << std::endl; 
//     f1(); //运行f1 创建  再运行f0 创建 return f1 return； -1 -1
//     std::cout << "nb of instance: " << Sample::getnbinst() << std::endl;

//     return (0);
// }
// nb of instance: 0
// 建立
// nb of instance: 1
// 建立
// nb of instance: 2
// 解散
// 解散
// nb of instance: 0
/* poiters *******************************************************************************************/
// Sample::Sample(void): foo(0) {
//     std::cout << "创建" << std::endl;
//     return;
// }
//  Sample::~Sample(void) {
    
//     std::cout << "解散" << std::endl;
//     return;
// }

// void Sample::bar(void) const {
//      std::cout << "Member function bar called" << std::endl;
//      return;
// }

// int main() {
//     Sample instance; 
//     Sample *instancep = &instance;//把第一个地址给instancep

//     int Sample::*p =NULL; //两个都有创建p
//     void (Sample::*f)(void) const;//两个都创建 f

//     p = &Sample::foo; //p = samplefoo(0)的地址

//     std::cout << "Value foo: " << instance.foo << std::endl;// foo 是0；
//     instance.*p = 21;     //给p的值是21
//     std::cout << "Value foo: " << instance.foo << std::endl;// foo这个地址的值改变成21
//     instancep->*p = 42;  //给p的值是21
//     std::cout << "Value foo: " << instance.foo << std::endl;

//     f = &Sample::bar; //把bar地址给f

//     (instance.*f)(); //运行f就是运行bar 
//     (instancep->*f)(); 

//     return 0;
// }
// 创建
// Value foo: 0
// Value foo: 21
// Value foo: 42
// Member function bar called
// Member function bar called
// 解散
#include <cstdio>
#include <iostream>
#include <ctime>
int main( )
{
   // 基于当前系统的当前日期/时间
   time_t now = time(0);
 
   std::cout << "1970 到目前经过秒数:" << now << std::endl;
 
   tm *ltm = localtime(&now);
 
   // 输出 tm 结构的各个组成部分
   std::cout << "年: "<< 1900 + ltm->tm_year << std::endl;
   std::cout << "月: "<< 1 + ltm->tm_mon<< std::endl;
   std::cout << "日: "<<  ltm->tm_mday << std::endl;
   std::cout << "时间: "<< ltm->tm_hour << ":";
   std::cout << ltm->tm_min << ":";
   std::cout << ltm->tm_sec << std::endl;
   return (0);
}