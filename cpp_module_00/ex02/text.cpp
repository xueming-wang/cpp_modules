/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:06:32 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/18 15:39:30 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "text.hpp"

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
Sample::Sample(void): foo(0) {
    std::cout << "创建" << std::endl;
    return;
}
 Sample::~Sample(void) {
    
    std::cout << "解散" << std::endl;
    return;
}

void Sample::bar(void) const {
     std::cout << "Member function bar called" << std::endl;
     return;
}

int main() {
    Sample instance; 
    Sample *instancep = &instance;//把第一个地址给instancep

    int Sample::*p =NULL; //两个都有创建p
    void (Sample::*f)(void) const;//两个都创建 f

    p = &Sample::foo; //p = samplefoo(0)的地址

    std::cout << "Value foo: " << instance.foo << std::endl;// foo 是0；
    instance.*p = 21;     //给p的值是21
    std::cout << "Value foo: " << instance.foo << std::endl;// foo这个地址的值改变成21
    instancep->*p = 42;  //给p的值是21
    std::cout << "Value foo: " << instance.foo << std::endl;

    f = &Sample::bar; //把bar地址给f

    (instance.*f)(); //运行f就是运行bar 
    (instancep->*f)(); 

    return 0;
}
// 创建
// Value foo: 0
// Value foo: 21
// Value foo: 42
// Member function bar called
// Member function bar called
// 解散