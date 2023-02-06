/*
 *	elks/arch/i86/drivers/char/bell-A7150.c
 *
 *	Copyright 2023 TK Ordoban <@Stefan.Berndt@imoriath.com>
 *
 *	This file rings the PC speaker.
 */

#include <linuxmt/config.h>
#include <arch/ports.h>
#include <arch/io.h>
#include <arch/irq.h>

/*
 * Turn PC speaker on at specified frequency (more precisely, wave period).
 */
void soundp(unsigned period)
{
}

/*
 * Turn PC speaker off.
 */
void nosound(void)
{
}

/*
 * Actually sound the speaker.
 */
void bell(void)
{
}
