#include <iostream>
extern int count;//外部变量
void write_extern(void)
{
	std::cout << "count is " << count << std::endl;
}