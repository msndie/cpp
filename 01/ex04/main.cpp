/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclam <sclam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:47:13 by sclam             #+#    #+#             */
/*   Updated: 2022/05/06 16:57:15 by sclam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string replace(std::string line, std::string s1, std::string s2) {
	std::string tmp;
	size_t pos;

	while (true) {
		pos = line.find(s1);
		if (pos == std::string::npos)
			break;
		tmp.append(line.substr(0, pos));
		line = line.substr(pos + s1.length());
		tmp.append(s2);
	}
	tmp.append(line);
	return tmp;
}

int writeInFile(std::ofstream& ofs, std::string line) {
	if (!ofs.good())
		return 1;
	ofs << line;
	return 0;
}

void start(std::ifstream& ifs, std::ofstream& ofs, char **argv) {
	std::string tmp;
	std::stringstream stream;
	std::string s1;
	std::string s2;

	s1.append(argv[2]);
	s2.append(argv[3]);
	stream << ifs.rdbuf();
	tmp = stream.str();
	if (writeInFile(ofs, replace(tmp, s1, s2)) == 1) {
		return;
	}
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	std::ifstream ifs;
	std::ofstream ofs;
	ifs.open(argv[1], std::ifstream::in);
	if (!ifs.is_open()) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	std::string outFile;
	outFile.append(argv[1]);
	outFile.append(".replace");
	ofs.open(outFile, std::ofstream::out);
	if (!ofs.is_open()) {
		std::cerr << "Error" << std::endl;
		ifs.close();
		return 1;
	}
	start(ifs, ofs, argv);
	ifs.close();
	ofs.close();
}
