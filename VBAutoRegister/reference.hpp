#ifndef _REFERENCE_HPP
#define _REFERENCE_HPP

#include <string>

class Reference {

private:
	std::string lineInVbp;
	std::string classId;
	std::string version;
	std::string subVersion;
	std::string filename;

public:
	Reference(std::string lineInVbp);
};

#endif