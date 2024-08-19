/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:41:54 by jtollena          #+#    #+#             */
/*   Updated: 2024/08/19 13:31:38 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
	try{
		Form f = Form("form0", 500, 1);
	}catch(const std::exception & e){
		std::cerr << "0" <<e.what() << std::endl;
	}
	try{
		Form f = Form("form1", 1, 0);
	}catch(const std::exception & e){
		std::cerr << "1" <<e.what() << std::endl;
	}

	try{
		Bureaucrat b = Bureaucrat("test2", 10);
		std::cout << b;
		Form f = Form("form2");
		f.beSigned(&b);
	}catch(const std::exception & e){
		std::cerr << "2" <<e.what() << std::endl;
	}

	Bureaucrat b = Bureaucrat("test3", 10);
	Form f = Form("form3", 1, 9);
	try{
		std::cout << b;
		f.beSigned(&b);
	}catch(const std::exception & e){
		std::cerr << "3" <<e.what() << std::endl;
	}
	b.incrementGrade();
	try{
		f.beSigned(&b);
	}catch(const std::exception & e){
		std::cerr << "3" <<e.what() << std::endl;
	}

	try{
		Bureaucrat b = Bureaucrat("test4", 10);
		Bureaucrat b40 = Bureaucrat("test40", 5);
		std::cout << b;
		Form f = Form("form4", 140, 150);
		f.beSigned(&b);
		f.beSigned(&b40);
	}catch(const std::exception & e){
		std::cerr << "4" <<e.what() << std::endl;
	}
}