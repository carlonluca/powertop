/*
 * Copyright 2019 Luca Carlon <carlon.luca@gmail.com>
 *
 * This file is part of PowerTOP
 *
 * This program file is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program in a file named COPYING; if not, write to the
 * Free Software Foundation, Inc,
 * 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 * or just google for it.
 */

#if !defined(EXT_LIB_H) && defined(CONF_LIB)
#define EXT_LIB_H

#include <functional>

#include "../process/powerconsumer.h"
#include "../process/process.h"

typedef void (*printf_ptr)(const char *str, ...);
typedef void (*cb_data)(vector<power_consumer*> data);

void init_powertop_lib(printf_ptr f, cb_data data_ready);
void format_watts(double W, char *buffer, unsigned int len);
int main_loop(int argc, char **argv, std::function<bool()> interrupt);

extern printf_ptr log_f;
extern cb_data data_ready; 

#endif // EXT_LIB_H
