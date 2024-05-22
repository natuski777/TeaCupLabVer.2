#include "loginWindow.h"
#include "homeWindow.h"
#include "registWindow.h"
#include "listWindow.h"

using namespace TeaCupLabVer2;

[STAThreadAttribute]
int main()
{
	Application::Run(gcnew loginWindow());
	return 0;
}