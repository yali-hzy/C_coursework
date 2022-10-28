#define ESC 0x11b;
#define  F1 0x3b00
#define  F2 0x3c00
#define  F3 0x3d00
#define  F4 0x3e00
#define  F5 0x3f00
#define  F6 0x4000
#include<stdio.h>
#include<bios.h>
int main()
{
	unsigned int key_value;
	key_value = bioskey(0);
	switch(key_value)
	{
		case F1:
			break;
		case F2:
			break;
		case F3:
			break;
		case F4:
			break;
		case F5:
			break;
		case F6:
			break;
		default:
			break;
	}
}
