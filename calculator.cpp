#include "calculator.h"

static int error_check(std::vector<float> &nums, std::string &signs, std::string &error, std::vector<std::string> arr) {
	if (arr.size() != 3)
	{
		error = "Wrong number of arguments. 3 arguments required!";
		return 1;
	}
	if (signs.find(arr[1]) == std::string::npos)
	{
		error = "Calculator allows only " + signs + " signs";
		return 1;
	}
	try {
		nums[0] = std::stof(arr[0]);
		nums[1] = std::stof(arr[2]);
	}
	catch (const std::exception& e) {
		error = "Calculator allows only floats numbers";
		return 1;
	}
	return (0);
}

static std::string calculation(std::vector<float> &nums, std::string sign) {
	if (sign == "+")
		return std::to_string(nums[0] + nums[1]);
	if (sign == "-")
		return std::to_string(nums[0] - nums[1]);
	if (sign == "*")
		return std::to_string(nums[0] * nums[1]);
	if (sign == "/")
		return std::to_string(nums[0] / nums[1]);
	return "";
}

std::string calculator(std::string str) {
	std::string signs = "+-/*";
	std::string new_str;
	std::stringstream ss("");
	std::vector<std::string> arr;
	std::string error;
	std::vector<float> nums(2);

	for (std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		if (signs.find(*it) != std::string::npos)
			new_str = new_str + " " + *it + " ";
		else
			new_str += *it;
	}
	ss << new_str;
	for (std::string el; std::getline(ss, el, ' '); )
		arr.push_back(el);
	if (error_check(nums, signs, error, arr))
		return "Error: " + error;
	return calculation(nums, arr[1]);
}
