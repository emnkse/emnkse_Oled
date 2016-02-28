/*
 * oled_test.c
 *
 *  Created on: 28 Þub 2016
 *      Author: emink
 */

int main(void){
clear();

int i=0;
	for(i; i<500;i++)
		{
			print_message("Allah",0);
			print_message("    var",1);
			print_message("	     Biliyorum",2);
			sleep(2);
			clear();
			print_message(" Diridin ",3);
			sleep(2);
			clear();
		}
return (1);
}

