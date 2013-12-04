/*
 * (C) Copyright 2007-2008
 * Stelian Pop <stelian@popies.net>
 * Lead Tech Design <www.leadtechdesign.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/io.h>
#include <asm/arch/at91_pmc.h>
#include <asm/arch/at91_pio.h>
#include <asm/arch/gpio.h>

#ifdef CONFIG_RED_LED
void red_led_on(void)
{
	at91_set_gpio_value(CONFIG_RED_LED, 1);
}

void red_led_off(void)
{
	at91_set_gpio_value(CONFIG_RED_LED, 0);
}
#endif

#ifdef CONFIG_GREEN_LED
void green_led_on(void)
{
	at91_set_gpio_value(CONFIG_GREEN_LED, 0);
}

void green_led_off(void)
{
	at91_set_gpio_value(CONFIG_GREEN_LED, 1);
}
#endif

#ifdef CONFIG_YELLOW_LED
void yellow_led_on(void)
{
	at91_set_gpio_value(CONFIG_YELLOW_LED, 0);
}

void yellow_led_off(void)
{
	at91_set_gpio_value(CONFIG_YELLOW_LED, 1);
}
#endif
