#ifndef _DEV_IGOR_IGOR_H_
#define _DEV_IGOR_IGOR_H_

#include <sys/ioccom.h>
#include <sys/types.h>

#define IGOR_IOC_MAGIC  '@'

#define IGOR_TEST       _IO(IGOR_IOC_MAGIC, 0)

#endif