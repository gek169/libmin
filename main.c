

#include <stdio.h>
#define LIBMIN_MODE_HEADER
#define LIBMIN_FLOAT double
#include "libmin.h"


int main(int argc, char** argv){
	long a;
	unsigned long u;
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
	mftoa(buf, mipow(f,3), 6);
	printf("\r\ncubed:%s",buf);
	mftoa(buf, mipow(f,-1), 6);
	printf("\r\nto the negative one:%s",buf);
	mftoa(buf,matof(argv[1]),20);
	mftoa(buf,matof(buf),20);
	mftoa(buf,matof(buf),20);
	mftoa(buf,matof(buf),20);
	mftoa(buf,matof(buf),20);
	mftoa(buf,matof(buf),20);
	mftoa(buf,matof(buf),20);
	mftoa(buf,matof(buf),20);
	mftoa(buf,matof(buf),20);
	printf("\r\nBack and forth with float: %s", buf);

	u = matou(argv[1]);
	u = msqrti(u);
	mutoa(buf,u);
	printf("\r\nsqrti:%s",buf);
	if(argc < 3) return 1;
	
	mmemset(buf, 0, 1024);
	mmemset(buf, 'q', matou(argv[2]) % 1024);
	printf("\r\nthis should be %ld q's:%s",matou(argv[2]) % 1024,buf);
	puts("");
	return 0;
}
