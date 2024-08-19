/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:41:54 by jtollena          #+#    #+#             */
/*   Updated: 2024/08/19 15:18:01 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(){
	try{
		Bureaucrat b = Bureaucrat("test1", 5);
		std::cout << b;
		PresidentialPardonForm f = PresidentialPardonForm("form1");
		b.executeForm(f);
	}catch(const std::exception & e){
		std::cerr << "1" <<e.what() << std::endl;
	}

	try{
		Bureaucrat b = Bureaucrat("test2", 5);
		std::cout << b;
		PresidentialPardonForm f = PresidentialPardonForm("form2");
		b.signForm(f);
		b.executeForm(f);
	}catch(const std::exception & e){
		std::cerr << "2" <<e.what() << std::endl;
	}

	try{
		Bureaucrat b = Bureaucrat("test3", 10);
		std::cout << b;
		PresidentialPardonForm f = PresidentialPardonForm("form3");
		b.signForm(f);
		b.executeForm(f);
	}catch(const std::exception & e){
		std::cerr << "3" <<e.what() << std::endl;
	}

	try{
		Bureaucrat b = Bureaucrat("test4", 50);
		std::cout << b;
		PresidentialPardonForm f = PresidentialPardonForm("form4");
		b.signForm(f);
		b.executeForm(f);
	}catch(const std::exception & e){
		std::cerr << "4" <<e.what() << std::endl;
	}

	try{
		Bureaucrat b = Bureaucrat("test5", 1);
		std::cout << b;
		RobotonmyRequestForm f = RobotonmyRequestForm("form5");
		b.signForm(f);
		b.executeForm(f);
	}catch(const std::exception & e){
		std::cerr << "5" <<e.what() << std::endl;
	}

	try{
		Bureaucrat b = Bureaucrat("test6", 1);
		std::cout << b;
		ShrubberyCreationForm f = ShrubberyCreationForm("form6");
		b.signForm(f);
		b.executeForm(f);
	}catch(const std::exception & e){
		std::cerr << "6" <<e.what() << std::endl;
	}
}