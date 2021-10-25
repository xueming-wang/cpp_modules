/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:16:00 by xuwang            #+#    #+#             */
/*   Updated: 2021/10/25 14:38:33 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

/*init static must be out of class*/
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "created" << std::endl;
    return ;
}

Account::~Account( void ){
   Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';'; 
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "closed" << std::endl; 
    return ;
}


/*static*/
int	Account::getNbAccounts( void ){
    return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void ){
    return (Account::_totalAmount);
}
int	Account::getNbDeposits( void ){
    return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
    return (Account::_totalNbWithdrawals);
}

/*  accounts:8;total:20049;deposits:0;withdrawals:0 */
void	Account::displayAccountsInfos( void ){
    
    Account::_displayTimestamp(); //static 
    std::cout << "accounts:" << Account::getNbAccounts() << ';';
    std::cout << "total:" << Account::getTotalAmount() << ';';
    std::cout << "deposits:" << Account::getNbDeposits() << ';';
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

/* index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1 */
void	Account::makeDeposit( int deposit ){
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "p_amount:" << this->_amount << ';';
    std::cout << "deposits:" << deposit << ';';

    this->_nbDeposits += 1;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += this->_nbDeposits;
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

/*index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1*/
bool	Account::makeWithdrawal( int withdrawal ){
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';';
    std::cout << "p_amount:" << this->_amount << ';';

    if (withdrawal > this->checkAmount()) {
        this->_nbWithdrawals = 0;
        std::cout << "withdrawal:" << "refused" << std::endl;
        return (false);
    }
    
    this->_nbWithdrawals = 1;
    this->_amount = this->_amount - withdrawal;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals += this->_nbWithdrawals;
    std::cout << "withdrawal:" << withdrawal << ';';
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const{
    return (this->_amount);
}

/*index:0;amount:47;deposits:1;withdrawals:0*/
void	Account::displayStatus( void ) const{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ';'; 
    std::cout << "amount:" << this->_amount << ';';
    std::cout << "deposits:" << this->_nbDeposits << ';';
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
    const time_t now = time(NULL);
    const tm *stime = localtime(&now);
    
    std::cout << '[';
    std::cout << stime->tm_year + 1900;
    if (stime->tm_mon + 1 <  10)
        std::cout << '0';
    std::cout << stime->tm_mon + 1;  //[0-11]
    if (stime->tm_mon < 10)
        std::cout << '0';
    std::cout << stime->tm_mday;
    std::cout << '_';
    if (stime->tm_hour < 10)
        std::cout << '0';
    std::cout << stime->tm_hour;
    if (stime->tm_min < 10)
        std::cout << '0';
    std::cout << stime->tm_min;
    if (stime->tm_sec < 10)
        std::cout << '0';
    std::cout << stime->tm_sec;
    std::cout << ']';
}
