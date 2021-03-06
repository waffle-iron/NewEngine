#pragma once

#include <string>
#include <sstream>
#include <vector>

namespace Engine
{
	inline std::vector<std::string>& Split(const std::string& s, char delim, std::vector<std::string>& elems)
	{
		std::stringstream ss(s);
		std::string item;
		while (getline(ss, item, delim))
		{
			elems.push_back(item);
		}
		return elems;
	}


	inline std::vector<std::string> Split(const std::string& s, char delim)
	{
		std::vector<std::string> elems;
		Split(s, delim, elems);
		return elems;
	}
}
