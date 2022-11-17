/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababouel <ababouel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:28:09 by ababouel          #+#    #+#             */
/*   Updated: 2022/11/17 23:40:43 by ababouel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

int	main()
{
	Base *a;
	srand (time(NULL));
	a = generate();
	identify(a);
	identify(*a);
	delete a;
	a = generate();
	identify(a);
	identify(*a);
	delete a;
}