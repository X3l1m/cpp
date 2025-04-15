/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 18:49:55 by seyildir      #+#    #+#                 */
/*   Updated: 2025/04/07 18:49:55 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("Alice", 50);
        Form form("Important Form", 45, 30);

        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;

        bureaucrat.incrementGrade();
        std::cout << "After increment: " << bureaucrat << std::endl;

        form.beSigned(bureaucrat);
        std::cout << "Form signed successfully!" << std::endl;

        std::cout << form << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat lowRank("Bob", 150);
        Form anotherForm("Another Form", 100, 50);

        std::cout << lowRank << std::endl;
        std::cout << anotherForm << std::endl;

        anotherForm.beSigned(lowRank);
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}