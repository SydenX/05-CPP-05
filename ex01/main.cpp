/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:41:54 by jtollena          #+#    #+#             */
/*   Updated: 2024/09/19 12:16:33 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
	try{
		Form f = Form("form0", 500, 1);
	}catch(const std::exception & e){}
	try{
		Form f = Form("form1", 1, 0);
	}catch(const std::exception & e){}

	try{
		Bureaucrat b = Bureaucrat("test2", 10);
		std::cout << b;
		Form f = Form("form2");
		b.signForm(f);
	}catch(const std::exception & e){}

	Bureaucrat b = Bureaucrat("test3", 10);
	Form f = Form("form3", 1, 9);
	try{
		std::cout << b;
		b.signForm(f);
	}catch(const std::exception & e){}
	b.incrementGrade();
	try{
		b.signForm(f);
	}catch(const std::exception & e){}

	try{
		Bureaucrat b = Bureaucrat("test4", 10);
		Bureaucrat b40 = Bureaucrat("test40", 5);
		std::cout << b;
		Form f = Form("form4", 140, 150);
		b.signForm(f);
		b40.signForm(f);
	}catch(const std::exception & e){}
}