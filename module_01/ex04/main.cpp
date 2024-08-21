/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:21:20 by romlambe          #+#    #+#             */
/*   Updated: 2024/08/21 09:29:43 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>

void  replaceOccurence(std::string &content, std::string &s1, std::string &s2){
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos){
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
}

int main(int ac, char **av){
	if (ac != 4){
		std::cerr << "Usage :" << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream inputFile(filename);
	if (!inputFile){
		std::cerr << "Error: Cannot Open File" << filename << std::endl;
		return 1;
	}
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();
	inputFile.close();

	replaceOccurence(content, s1, s2);
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile){
		std::cerr << "Error: Cannot create file" << filename + "replace" << std::endl;
		return 1;
	}
	outputFile << content;
	outputFile.close();

	return 0;
}
