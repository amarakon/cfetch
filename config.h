#include "logos/gentoo.h"

// Define colors
#define DARKBLUE   	"\e[1;34m"
#define BLUE		"\e[0;34m"
#define GREEN		"\e[0;32m"

// Define display colors
#define COLOR 		DARKBLUE 
#define USERCOLOR 	GREEN
#define HOSTCOLOR 	BLUE

#define CONFIG \
{ \
   /* name                      function                 	cached */	\
    SPACER \
    { "",			get_title,               	false	},	\
    { "",			get_bar,                 	true	},	\
    { "OS: ",			get_os,                  	true	}, 	\
    { "Kernel: ",		get_kernel,              	true	}, 	\
    { "Host: ",			get_host,         		true	}, 	\
    { "Uptime: ",		get_uptime,              	false	}, 	\
    SPACER \
    { "Packages (Selected): ",	get_packages_portage_selected,  false	},	\
    { "Packages (Total): ",	get_packages_portage_total,     false 	}, 	\
    { "Shell: ",		get_shell_default,		true 	}, 	\
    { "Terminal: ",		get_terminal,            	false 	}, 	\
    SPACER \
    { "CPU: ",			get_cpu,                 	true  	},	\
    { "GPU: ",			get_gpu1,                	true  	}, 	\
    { "Memory: ",		get_memory,              	false 	}, 	\
    SPACER \
    { "",			get_colors1,             	false 	}, 	\
    { "",			get_colors2,             	false 	}, 	\
}

#define CPU_CONFIG \
{ \
   REMOVE("(R)"),		\
   REMOVE("(TM)"),		\
   REMOVE("Dual-Core"),		\
   REMOVE("Quad-Core"), 	\
   REMOVE("Six-Core"), 		\
   REMOVE("Eight-Core"), 	\
   REMOVE("Core"), 		\
   REMOVE("CPU"), 		\
}

#define GPU_CONFIG \
{ \
    REMOVE("Corporation"), 	\
    REMOVE("Controller"), 	\
    REMOVE("Graphics"), 	\
    REMOVE("Integrated"), 	\
}
