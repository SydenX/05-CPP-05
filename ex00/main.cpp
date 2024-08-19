/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:41:54 by jtollena          #+#    #+#             */
/*   Updated: 2024/08/19 13:32:39 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat("test", 1000);
	}catch(const std::exception & e){
		std::cerr << "1" <<e.what() << std::endl;
	}
	try{
		Bureaucrat a = Bureaucrat("test2", 10);
		std::cout << a;
	}catch(const std::exception & e){
		std::cerr << "2" <<e.what() << std::endl;
	}
	try{
		Bureaucrat a = Bureaucrat("test3");
		std::cout << a;
		a.decrementGrade();
		std::cout << a;
	}catch(const std::exception & e){
		std::cerr << "3" <<e.what() << std::endl;
	}
	try{
		Bureaucrat a = Bureaucrat("test4");
		a.incrementGrade();
	}catch(const std::exception & e){
		std::cerr << "4" <<e.what() << std::endl;
	}
	try{
		Bureaucrat a = Bureaucrat("test5", 1);
		a.incrementGrade();
	}catch(const std::exception & e){
		std::cerr << "6" <<e.what() << std::endl;
	}
	try{
		Bureaucrat a = Bureaucrat("test6", 2);
		a.incrementGrade();
	}catch(const std::exception & e){
		std::cerr << "6" <<e.what() << std::endl;
	}
	try{
		Bureaucrat a = Bureaucrat("test7", 1);
		std::cout << a;
		a.decrementGrade();
		std::cout << a;
		a.incrementGrade();
		std::cout << a;
		a.incrementGrade();
		std::cout << a;
	}catch(const std::exception & e){
		std::cerr << "7" <<e.what() << std::endl;
	}
	try{
		Bureaucrat a = Bureaucrat("test8", -5);
	}catch(const std::exception & e){
		std::cerr << "8" <<e.what() << std::endl;
	}
}