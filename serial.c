#include "serial.h"

int open_port(void)
{
	int fd; /* File descriptor fot the port. */


	fd = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NDELAY);
	if (fd == -1)
	{
		/*
		 * Could not open the port.
		 *
		 */
		perror("open_port: Unable tp open /dev/ttyUSB0 -");
	}
	else
		fcntl(fd, F_SETFL, 0);
	return (fd);
}

