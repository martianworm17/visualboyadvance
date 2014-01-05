// VisualBoyAdvance - Nintendo Gameboy/GameboyAdvance (TM) emulator.
// Copyright (C) 2008 VBA-M development team

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or(at your option)
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

#ifndef __VBA_PAUSECREEN_SDL_H__
#define __VBA_PAUSECREEN_SDL_H__

#include "DisplaySDL.h"
#include <glib.h>

/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

/**
 * Opaque PauseScreen entity
 */
typedef struct PauseScreen PauseScreen;

/**
 * Create a game screen entity
 *
 * @param display Display to use for rendering
 * @param err return location for a GError, or NULL
 * @return Newly allocated PauseScreen object
 */
PauseScreen *pausescreen_create(Display *display, GError **err);

/**
 * Free a game screen
 *
 * @param game Game screen to free
 */
void pausescreen_free(PauseScreen *game);

/**
 * Process an SDL event to update the game screen
 *
 * @param game Game screen
 * @param event An event that has just occured
 * @return TRUE when the event has been handled
 */
gboolean pausescreen_process_event(PauseScreen *game, const SDL_Event *event);

/**
 * Main loop element allowing the game to advance
 *
 * @param game Game screen
 */
void pausescreen_update(PauseScreen *game);

/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif

#endif // __VBA_PAUSECREEN_SDL_H__
