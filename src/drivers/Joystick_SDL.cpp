/* Mednafen - Multi-system Emulator
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "main.h"
#include "input.h"
#include "Joystick.h"
#include "Joystick_SDL.h"

#include <SDL.h>

class Joystick_SDL : public Joystick
{
 public:

 Joystick_SDL(unsigned index);
 ~Joystick_SDL();

 void UpdateInternal(void);

 virtual unsigned HatToButtonCompat(unsigned hat);

 private:
 int *sdl_joy;
 unsigned sdl_num_axes;
 unsigned sdl_num_hats;
 unsigned sdl_num_balls;
 unsigned sdl_num_buttons;
};

unsigned Joystick_SDL::HatToButtonCompat(unsigned hat)
{
 return(sdl_num_buttons + (hat * 4));
}

Joystick_SDL::Joystick_SDL(unsigned index) : sdl_joy(NULL)
{
 
}

Joystick_SDL::~Joystick_SDL()
{

}

void Joystick_SDL::UpdateInternal(void)
{

}

class JoystickDriver_SDL : public JoystickDriver
{
 public:

 JoystickDriver_SDL();
 virtual ~JoystickDriver_SDL();

 virtual unsigned NumJoysticks();                       // Cached internally on JoystickDriver instantiation.
 virtual Joystick *GetJoystick(unsigned index);
 virtual void UpdateJoysticks(void);

 private:
 std::vector<Joystick_SDL *> joys;
};


JoystickDriver_SDL::JoystickDriver_SDL()
{
}

JoystickDriver_SDL::~JoystickDriver_SDL()
{
}

unsigned JoystickDriver_SDL::NumJoysticks(void)
{
}

Joystick *JoystickDriver_SDL::GetJoystick(unsigned index)
{
}

void JoystickDriver_SDL::UpdateJoysticks(void)
{
 
}

JoystickDriver *JoystickDriver_SDL_New(void)
{

}
