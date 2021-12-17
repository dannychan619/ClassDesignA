#include <iostream>
#include "Url.h"


int main()
{
	URL u("https://canvas.highline.edu/courses/2125747");
	std::cout << "Scheme: " << u.getScheme() << std::endl;
	std::cout << "Authority: " << u.getAuthority() << std::endl;
	std::cout << "Path: " << u.getPath() << std::endl;
	std::cout << "Complete URL: " << u.getCompleteURL() << std::endl;

	return 0;
	return 0;
}