#ifndef	ACTIVERAGDOLL_VERSION_INCLUDED
#define ACTIVERAGDOLL_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define ACTIVERAGDOLL_VERSION_MAJOR 0
#define ACTIVERAGDOLL_VERSION_MINOR 3
#define ACTIVERAGDOLL_VERSION_PATCH 1
#define ACTIVERAGDOLL_VERSION_BETA 5
#define ACTIVERAGDOLL_VERSION_VERSTRING	MAKE_STR(ACTIVERAGDOLL_VERSION_MAJOR) "." MAKE_STR(ACTIVERAGDOLL_VERSION_MINOR) "." MAKE_STR(ACTIVERAGDOLL_VERSION_PATCH) "." MAKE_STR(ACTIVERAGDOLL_VERSION_BETA)

#endif
