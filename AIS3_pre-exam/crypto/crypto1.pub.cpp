#include <stdio.h>
#include <string.h>

int main()
{
	int val1 = ?????????, val2 = ?????????, val3 = ???????, val4 = ??????, i, *ptr;
	char flag[29] = "????????????????????????????"; // Hint: The flag begins with AIS3
	
	for(i = 0, ptr = (int*)flag ; i < 7 ; ++i)
		printf("%d\n", ptr[i] ^ val1 ^ val2 ^ val3 ^ val4);
	
	/*
	964600246
	1376627084
	1208859320
	1482862807
	1326295511
	1181531558
	2003814564
	*/

    //00111001011111101010000110110110  964600246
    //00110011010100110100100101000001  3SIA
    //00001010001011011110100011110111  val1234

    
	
	return 0;
}

