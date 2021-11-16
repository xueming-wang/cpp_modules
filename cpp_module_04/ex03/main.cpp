/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:37:48 by xuwang            #+#    #+#             */
/*   Updated: 2021/11/16 16:41:13 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"


int main() {

    IMateriaSource* src = new MateriaSource();  //创建一个材料来源
    src->learnMateria(new Ice());  //材料来源一个ice
    src->learnMateria(new Cure()); //材料来源一个 cure
    
    ICharacter* me = new Character("me"); //创建新的人
    AMateria* tmp; //创建一种材料
    
    tmp = src->createMateria("ice"); //这种材料 来源于（ 创建材料类 ）
    me->equip(tmp);  //我装备一个材料
    tmp = src->createMateria("cure"); //这种材料 来源于（ 创建材料类 ）
    me->equip(tmp); // 我装备
    
    ICharacter* bob = new Character("bob"); //创建一个新的人
    me->use(0, *bob);  //第一个bob人 使用
    me->use(1, *bob);  //第二个bob人 使用
    
    delete bob;
    delete me;
    delete src;
    return 0;
}