// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id: i_timer.h 455 2006-03-30 19:08:37Z fraggle $
//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
// DESCRIPTION:
//      System-specific timer interface
//
//-----------------------------------------------------------------------------


#ifndef __I_TIMER__
#define __I_TIMER__

// Called by D_DoomLoop,
// returns current time in tics.
int I_GetTime (void);

// returns current time in ms
int I_GetTimeMS (void);

// Pause for a specified number of ms
void I_Sleep(int ms);

// Initialise timer
void I_InitTimer(void);

#endif

//-----------------------------------------------------------------------------
//
// $Log$
//
//-----------------------------------------------------------------------------