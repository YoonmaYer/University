int testNum(int input)
{
	extern int guess;// �������� ����

	int result = 0;
	if (input > guess)
		result = -1;
	else if (input < guess)
		result = 1;
	else
		result = 0;

	return result;
}