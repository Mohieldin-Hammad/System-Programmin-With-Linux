int factorial(int num)
{
    int f = 1;

    if (num < 0)
	return -1;
    else if (num == 0)
	return 1;
    else {
	for (int i = 1; i <= num; i++) {
	    f = f * i;
	}
	return f;
    }
}
