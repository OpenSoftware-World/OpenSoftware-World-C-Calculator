#include <mikeos.h>

int	MikeMain(void *argument)
{	
	static	char	Buf[4096];
	static  char    Buf2[4096];
	static  char    Buf3[4096];
	static  char    Buf4[4096];
	static  int     Num1;
	static  int     Num2;
	static  int     Result;

	mikeos_draw_background("OpenSoftware-World C-Calculator for MikeOS v4.7.0", "v1.1", 0x001f);

	mikeos_print_string("Copyright (c) 2026 OpenSoftware-World");
	mikeos_print_newline();

	mikeos_print_string("https://github.com/OpenSoftware-World/OpenSoftware-World-C-Calculator");
	mikeos_print_newline();

	mikeos_print_string("Developed for use with MikeOS v4.7.0 and later versions.");
	mikeos_print_newline();
	mikeos_print_newline();

	mikeos_print_string("Processes : +, -, *, /");
	mikeos_print_newline();
	mikeos_print_newline();

	mikeos_print_string("Please press any key to continue.");
	mikeos_print_newline();
	mikeos_wait_for_key();

	mikeos_input_dialog(Buf, "Please select a transaction number: ");
	mikeos_print_newline();


	if (Buf[0] == '1') {
		mikeos_input_dialog(Buf2, "Enter the first number: ");
		mikeos_input_dialog(Buf3, "Enter the second number: ");

		Num1 = mikeos_string_to_int(Buf2);
		Num2 = mikeos_string_to_int(Buf3);

		Result = Num1 + Num2;

		mikeos_int_to_string(Buf4, Result);

		mikeos_print_string(" Result: ");
		mikeos_print_string(Buf4);
		mikeos_print_newline();
	}
	else if (Buf[0] == '2') {
		mikeos_input_dialog(Buf2, "Enter the first number: ");
		mikeos_input_dialog(Buf3, "Enter the second number: ");

		Num1 = mikeos_string_to_int(Buf2);
		Num2 = mikeos_string_to_int(Buf3);

		Result = Num1 - Num2;

		mikeos_int_to_string(Buf4, Result);

		mikeos_print_string(" Result: ");
		mikeos_print_string(Buf4);
		mikeos_print_newline();
	}
	else if (Buf[0] == '3') {
		mikeos_input_dialog(Buf2, "Enter the first number: ");
		mikeos_input_dialog(Buf3, "Enter the second number: ");

		Num1 = mikeos_string_to_int(Buf2);
		Num2 = mikeos_string_to_int(Buf3);

		Result = Num1 * Num2;

		mikeos_int_to_string(Buf4, Result);

		mikeos_print_string(" Result: ");
		mikeos_print_string(Buf4);
		mikeos_print_newline();
	}
	else if (Buf[0] == '4') {
		mikeos_input_dialog(Buf2, "Enter the first number: ");
		mikeos_input_dialog(Buf3, "Enter the second number: ");

		Num1 = mikeos_string_to_int(Buf2);
		Num2 = mikeos_string_to_int(Buf3);

		Result = Num1 / Num2;

		mikeos_int_to_string(Buf4, Result);

		mikeos_print_string(" Result: ");
		mikeos_print_string(Buf4);
		mikeos_print_newline();
	}
	else {
		mikeos_print_newline();
		mikeos_print_newline();
		mikeos_print_newline();
		
		mikeos_print_string("Invalid process!");
	}
	mikeos_print_newline();
	mikeos_print_newline();

	return 0;
}