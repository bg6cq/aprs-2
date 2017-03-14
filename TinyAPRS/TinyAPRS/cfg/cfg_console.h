/*
 * \file cfg_console.h
 * <!--
 * This file is part of TinyAPRS.
 * Released under GPL License
 *
 * Copyright 2015 Shawn Chain (shawn.chain@gmail.com)
 *
 * -->
 *
 * \brief 
 *
 * \author shawn
 * \date 2015-2-19
 */

#ifndef CFG_CONSOLE_H_
#define CFG_CONSOLE_H_

#define CONSOLE_SERIAL_DEBUG true					// Debugging flag of the console serial port

#define CONSOLE_SEND_COMMAND_ENABLED 0				// enable the "AT+SEND=XXX" command

#define CONSOLE_HELP_COMMAND_ENABLED 1				// enable help command "?" or "AT+HELP"

#define CONSOLE_SETTINGS_COMMANDS_ENABLED 1			// Disable console when the config tool is ready

#define CONSOLE_SETTINGS_COMMAND_DEST_ENABLED 0		// Disable the at+dest command by default

#if CONSOLE_SETTINGS_COMMANDS_ENABLED
	#define CONSOLE_MAX_COMMAND	12					// How many AT commands to support
#else
	#define CONSOLE_MAX_COMMAND	4					// How many AT commands to support
#endif

#endif /* CFG_CONSOLE_H_ */
