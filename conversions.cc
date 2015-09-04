#include <cstdio>
#include <cstring>
int main()
{
    int cases;
    scanf("%d", &cases);
    ++cases;

    for(int i=1; i != cases; ++i)
    {
	double value;
	char unit[2];
	scanf("%lf %s", &value, unit);

	switch(unit[0])
	{
	case 'k':
	    value *= 2.2046;
	    strcpy(unit, "lb");
	    break;
	case 'g':
	    value *= 3.7854;
	    strcpy(unit, "l");
	    break;
	case 'l':
	    switch(unit[1])
	    {
	    case 'b':
		value *= 0.4536;
		strcpy(unit, "kg");
		break;
	    case '\0':
		value *= 0.2642;
		strcpy(unit, "g");
		break;
	    }
	    break;
	}
	printf("%d %0.4lf %s\n", i, value, unit);
    }
    return 0;
}
