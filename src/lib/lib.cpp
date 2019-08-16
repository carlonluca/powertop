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

#include "lib.h"

printf_ptr log_f = nullptr;
cb_data data_ready = nullptr;

void init_powertop_lib(printf_ptr f, cb_data _data_ready)
{
	log_f = f;
    data_ready = _data_ready;
}
