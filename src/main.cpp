#ifdef __linux__
#include <X11/Xlib.h>
#endif

#include "processes.h"

int main()
{

#ifdef __linux__
	XInitThreads(); // prevent X11 threads error
#endif


	singlePlayer();
	
	
}

