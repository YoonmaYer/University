int testNum(int input)
{
	extern int guess;// 전역변수 선언

	int result = 0;
	if (input > guess)
		result = -1;
	else if (input < guess)
		result = 1;
	else
		result = 0;

	return result;
}