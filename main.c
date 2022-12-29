

#include <stdio.h>
#define LIBMIN_MODE_HEADER
#include "libmin.h"


int main(int argc, char** argv){
	long a;
	float f;
	char buf[1024];
	if(argc < 2) return 1;
		a = matoi(argv[1]);
	f = matof(argv[1]);
	printf("\r\nas int:\t%ld",a);
	printf("\r\nas float:\t%f",f);

	mitoa(buf, a);
	printf("\r\nmitoa gave me this string:%s",buf);
	mitoa_hex(buf, a,1);
	printf("\r\nmitoa_hex gave me this string:%s",buf);
	mftoa(buf, f, 6);
	printf("\r\nmftoa gave me this string:%s",buf);
	
	if(argc < 3) return 1;
	
	mmemset(buf, 0, 1024);
	mmemset(buf, 'q', matou(argv[2]) % 1024);
	printf("\r\nthis should be %ld q's:%s",matou(argv[2]) % 1024,buf);
	puts("");	
	return 0;
}
