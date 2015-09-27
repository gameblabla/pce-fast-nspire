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
#include "threads.h"

MDFN_Thread *MDFND_CreateThread(int (*fn)(void *), void *data)
{
 thread_no_t t;
 /*return (MDFN_Thread*)SDL_CreateThread(fn, data);*/
 return (MDFN_Thread*) create_thread(fn)
}

void MDFND_WaitThread(MDFN_Thread *thread, int *status)
{
 /*SDL_WaitThread((SDL_Thread*)thread, status);*/
}

MDFN_Mutex *MDFND_CreateMutex(void)
{

}

void MDFND_DestroyMutex(MDFN_Mutex *mutex)
{
}

int MDFND_LockMutex(MDFN_Mutex *mutex)
{
}

int MDFND_UnlockMutex(MDFN_Mutex *mutex)
{
}

MDFN_Cond* MDFND_CreateCond(void)
{
}

void MDFND_DestroyCond(MDFN_Cond* cond)
{
}

int MDFND_SignalCond(MDFN_Cond* cond)
{
}

int MDFND_WaitCond(MDFN_Cond* cond, MDFN_Mutex* mutex)
{
}

int MDFND_WaitCondTimeout(MDFN_Cond* cond, MDFN_Mutex* mutex, unsigned ms)
{
}

MDFN_Sem* MDFND_CreateSem(void)
{
}

void MDFND_DestroySem(MDFN_Sem* sem)
{
}

int MDFND_PostSem(MDFN_Sem* sem)
{
}

int MDFND_WaitSem(MDFN_Sem* sem)
{
}

int MDFND_WaitSemTimeout(MDFN_Sem* sem, unsigned ms)
{

}

uint32 MDFND_ThreadID(void)
{
 /*return SDL_ThreadID();*/
 return 1;
}
