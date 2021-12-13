#ifndef _ZFS_COMPAT_H_
#define _ZFS_COMPAT_H_

/*
 * preempt_schedule_notrace is GPL-only which breaks the ZFS build, so
 * replace it with preempt_schedule under the following condition:
*/
#if defined(CONFIG_ARM64) && \
    defined(CONFIG_PREEMPTION) && \
    defined(CONFIG_BLK_CGROUP)
#define preempt_schedule_notrace(x) preempt_schedule(x)
#endif

#endif /* _ZFS_COMPAT_H_ */
