#if !defined(_WININETD_H)
#define _WININETD_H


#define WINET_APPNAME "wininetd"
#define WINET_VERSION "0.7"


#define COUNTOF(a) (sizeof(a) / sizeof(a[0]))



int winet_stop_service(void);
int winet_main(int argc, char const **argv);



#endif /* #if !defined(_WININETD_H) */

