/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuwang <xuwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:37:48 by xuwang            #+#    #+#             */
/*   Updated: 2021/12/02 20:36:20 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"


int main() {
    {   std::cout << "------basic test--------" << std::endl;
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
    }
    {
        std::cout << std::endl;
        std::cout << "-------deep copy test------" << std::endl;
        Character *person1 = new Character("person1");
        MateriaSource *src = new MateriaSource();
        AMateria *tmp;

        src->learnMateria(new Ice()); //deep copy
        tmp = src->createMateria("ice");
        person1->equip(tmp);
        
        src->learnMateria(new Cure()); //deep copy
        tmp = src->createMateria("cure");
        person1->equip(tmp);

        person1->use(0, *person1);//ice
        person1->use(1, *person1);//cure
        person1->use(2, *person1);
        person1->use(3, *person1);
        std::cout << std::endl;
        person1->unequip(0);
        person1->unequip(2);
        person1->use(0, *person1);//ice
        person1->use(1, *person1);
        person1->use(2, *person1);
        person1->use(3, *person1);
        delete person1;
        delete src;
    }
    {
        std::cout << std::endl;
        std::cout << "------full case test--------" << std::endl;
        ICharacter *p1 = new Character("p1");
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Ice());

        AMateria *tmp1 = src->createMateria("ice");
        p1->equip(tmp1);
        AMateria *tmp2 = src->createMateria("cure");
        p1->equip(tmp2);
        AMateria *tmp3 = src->createMateria("ice");
        p1->equip(tmp3);
        AMateria *tmp4 = src->createMateria("cure");
        p1->equip(tmp4);
        AMateria *tmp5 = src->createMateria("ice");
        p1->equip(tmp5);
        
        p1->use(0, *p1);
        p1->use(1, *p1);
        p1->use(2, *p1);
        p1->use(3, *p1);
        p1->use(4, *p1);//is wrong ~
        delete p1;
        delete src;
        delete tmp5;
    }
    std::cout << std::endl;
    system("leaks Interface_recap ");
    return 0;
}