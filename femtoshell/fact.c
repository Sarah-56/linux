long long fact(int num){
    long long fact = 1;
	/* Loop to calcuate the factorial for example (5! = 5 * 4 * 3 * 2 * 1) */
    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    return fact;
}