#include "main.h"
/**
 * jack_bauer - I'm federal agent Jack Bauer
 */
void jack_bauer(void)
{
	int h = 0, th = 0, m = 0, tm = 0;
	int mins;

	for (mins = 0; mins < 24 * 60; mins++)
	{
		_putchar(th + '0');
                _putchar(h + '0');
                _putchar(':');
                _putchar(tm + '0');
                _putchar(m + '0');
                _putchar('\n');
		m++;
		if (m > 9)
		{
			m = 0;
			tm++;
			if (tm > 5)
			{
				tm = 0;
				h++;
				if (h > 9)
				{
					h = 0;
					th++;
				}
			}
		}
	}
}
