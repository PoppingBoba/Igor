#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD$:");

#include <sys/param.h>
#include <sys/types.h>

#include <sys/conf.h>
#include <sys/errno.h>
#include <sys/fcntl.h>
#include <sys/kernel.h>
#include <sys/kmem.h>
#include <sys/mutex.h>
#include <sys/condvar.h>
#include <sys/poll.h>
#include <sys/uio.h>

#include <dev/igor/igor.h>

void igorattach(int n);

const struct cdevsw igor_cdevsw = {
    .d_open = noopen,
    .d_close = noclose,
    .d_read = noread,
    .d_write = nowrite,
    .d_ioctl = noioctl,
    .d_stop = nostop,
    .d_tty = notty,
    .d_poll = nopoll,
    .d_mmap = nommap,
    .d_kqfilter = nokqfilter,
    .d_discard = nodiscard,
    .d_flag = D_OTHER | D_MPSAFE,
};

void
igorattach(int n)
{
    return;
}