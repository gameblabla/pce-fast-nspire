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

#include "mednafen.h"

#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

#include <trio/trio.h>
#include "driver.h"
#include "general.h"
#include "state.h"
#include "movie.h"
#include "video.h"
#include "video/resize.h"

#include "MemoryStream.h"
#include "compress/GZFileStream.h"
#include <list>

static void SubWrite(Stream *st, SFORMAT *sf)
{

}

struct compare_cstr
{
 bool operator()(const char *s1, const char *s2) const
 {
  return(strcmp(s1, s2) < 0);
 }
};

typedef std::map<const char *, SFORMAT *, compare_cstr> SFMap_t;

static void MakeSFMap(SFORMAT *sf, SFMap_t &sfmap)
{

}

static void ReadStateChunk(Stream *st, SFORMAT *sf, uint32 size, const bool svbe)
{

}

//
// Fast raw chunk reader/writer.
//
template<bool load>
static void FastRWChunk(Stream *st, SFORMAT *sf)
{

}

//
// When updating this function make sure to adhere to the guarantees in state.h.
//
bool MDFNSS_StateAction(StateMem *sm, const unsigned load, const bool data_only, SFORMAT *sf, const char *sname, const bool optional) noexcept
{
 
 return(true);
}

void StateMem::ThrowDeferred(void)
{
}

void MDFNSS_SaveSM(Stream *st, bool data_only, const MDFN_Surface *surface, const MDFN_Rect *DisplayRect, const int32 *LineWidths)
{

}

void MDFNSS_LoadSM(Stream *st, bool data_only)
{

}

//
//
//
static int SaveStateStatus[10];
static int CurrentState = 0;
static int RecentlySavedState = -1;

void MDFNSS_CheckStates(void)
{
	
}

void MDFNSS_GetStateInfo(const char *filename, StateStatusStruct *status)
{

}

void MDFNI_SelectState(int w) noexcept
{

}  

bool MDFNI_SaveState(const char *fname, const char *suffix, const MDFN_Surface *surface, const MDFN_Rect *DisplayRect, const int32 *LineWidths) noexcept
{
	return true;
}

bool MDFNI_LoadState(const char *fname, const char *suffix) noexcept
{

 return(true);
}
