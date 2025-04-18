#ifndef SERIAL_H
#define SERIAL_H 1

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

int ser_get_bps_const(int speed);
int ser_init_conn(char *tty, int speed);
int ser_set_flow_control(int fd, int status);
int ser_get_control_lines(int fd);
int ser_set_control_lines(int fd, int state);
int ser_write(int fd, unsigned char *data, int len, int delay);
int ser_read(int fd, unsigned char *data, int len);

#endif
