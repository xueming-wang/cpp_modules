/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:16:00 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/21 18:45:18 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctime>
#include <iostream>
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
Account( void ){}
~Account( void ) {}
/*init static must be out of class*/
int _nbAccounts = 0;
int _totalAmount = 0;
int _totalNbDeposits = 0;
int _totalNbWithdrawals = 0;
Account( int initial_deposit ){

}

static int	Account::getNbAccounts( void ){
    return this->_nbAccounts;
}
static int	Account::getTotalAmount( void ){
    return this->_totalAmount;
}
static int	Account::getNbDeposits( void ){
    return this->_totalNbDeposits;
}
static int	Account::getNbWithdrawals( void ){
    return this->_totalNbWithdrawals;
}
static void	Account::displayAccountsInfos( void ){

}
void	makeDeposit( int deposit ){

}
bool	makeWithdrawal( int withdrawal ){

}
int		checkAmount( void ) const{

}
void	displayStatus( void ) const{

}
static void	_displayTimestamp( void ){

}
int main()
{
    Account()
}