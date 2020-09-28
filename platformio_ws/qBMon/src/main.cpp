/*
 * HeliOS Embedded Operating System
 * Copyright (C) 2020 Manny Peterson <me@mannypeterson.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "debug.h"
#include "ros_manager.h"
#include "batt_mon.h"
#include "state_mon.h"
#include "sch_manager.h"

void setup()
{
   Debug_Init();
   RosMan_Init();
   StateMon_Init();
   SchMan_Init();
}

void loop()
{
   SchMan_Spin();
}