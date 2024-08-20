/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:41:54 by jtollena          #+#    #+#             */
/*   Updated: 2024/08/20 11:59:06 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(){
	std::string	forms[3] = { "robotomy request", "shrubbery creation", "presidential pardon" };
	int i = 0;
	while(i < 4){
		Intern 	intern = Intern();
		AForm 	*form;
		if (i++ == 3)
			form = intern.makeForm("CE FORM NE DOIT PAS EXISTER", "Bender");
		else
			form = intern.makeForm(forms[i - 1], "Bender");
		if (form != NULL){
			Bureaucrat("Alain", 1).signForm(*form);
			Bureaucrat("Hendrix", 2).executeForm(*form);
		}
		std::cout << std::endl;
		delete form;
	}
}