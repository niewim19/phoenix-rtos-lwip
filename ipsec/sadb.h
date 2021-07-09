/**
 * @brief IPsec security association data base management (PF_KEY)
 *
 * Phoenix-RTOS
 *
 * Operating system kernel
 *
 * @file
 * @copyright 2016 Phoenix Systems
 * @author Jaub Sejdak <jakub.sejdak@phoesys.com>
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _IPSEC_SADB_H_
#define _IPSEC_SADB_H_

#include <stddef.h>
#include <phoenix/pfkeyv2.h>


int ipsec_sadbDispatch(const struct sadb_msg *msg, struct sadb_msg *reply, size_t reply_size);
void ipsec_sadbInitCheckingTimeouts(void);
void ipsec_sadbStartCheckingTimeouts(void);
void ipsec_sadbStopCheckingTimeouts(void);

#endif
