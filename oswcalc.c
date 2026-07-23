#include <mikeos.h>

int	MikeMain(void *argument)
{	
	static	char	Buf[4], Buf2[16], Buf3[16], Buf4[16];
	static  int     Num1, Num2, Result;

	mikeos_draw_background("OpenSoftware-World C-Calculator for MikeOS v4.7.0", "v1.3", 0x001f);

	mikeos_print_string("Copyright (c) 2026 OpenSoftware-World");
	mikeos_print_newline();

	mikeos_print_string("https://github.com/OpenSoftware-World/OpenSoftware-World-C-Calculator");
	mikeos_print_newline();

	mikeos_print_string("Developed for use with MikeOS v4.7.0 and later versions.");
	mikeos_print_newline();
	mikeos_print_newline();

	mikeos_print_string("Processes: +, -, *, / (1,2,3,4)");
	mikeos_print_newline();
	mikeos_print_newline();

	mikeos_print_string("Please press any key to continue.");
	mikeos_print_newline();
	mikeos_wait_for_key();

	mikeos_input_dialog(Buf, "Please select an operation number: ");
	mikeos_print_newline();

	if (Buf[0] >= '1' && Buf[0] <= '4') {
		mikeos_input_dialog(Buf2, "Enter the first number: ");
		mikeos_input_dialog(Buf3, "Enter the second number: ");

		Num1 = mikeos_string_to_int(Buf2);
		Num2 = mikeos_string_to_int(Buf3);
	}

	if (Buf[0] == '1') {
		Result = Num1 + Num2;
	}
	else if (Buf[0] == '2') {
		Result = Num1 - Num2;
	}
	else if (Buf[0] == '3') {
		Result = Num1 * Num2;
	}
	else if (Buf[0] == '4') {
		if (Num2 == 0) {
			mikeos_print_string(" Error: Cannot divide by zero!");
			goto end;
		}
		else {
			Result = Num1 / Num2;
		}
	}
	else {
		mikeos_print_newline();
		mikeos_print_newline();
		mikeos_print_newline();
		
		mikeos_print_string("Invalid operation!");

		goto end;
	}

	mikeos_int_to_string(Buf4, Result);
	mikeos_print_string(" Result: ");
	mikeos_print_string(Buf4);

	goto end;

	end:
		mikeos_print_newline();
		mikeos_print_newline();
		mikeos_print_newline();
		mikeos_wait_for_key();

	return 0;
}
