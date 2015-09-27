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

#include <mednafen/mednafen.h>
#include "CDAFReader.h"
#include "CDAFReader_Vorbis.h"


class CDAFReader_Vorbis final : public CDAFReader
{
 public:
 CDAFReader_Vorbis(Stream *fp);
 ~CDAFReader_Vorbis();

 uint64 Read_(int16 *buffer, uint64 frames) override;
 bool Seek_(uint64 frame_offset) override;
 uint64 FrameCount(void) override;

 private:
 int ovfile;
 Stream *fw;
};


static size_t iov_read_func(void *ptr, size_t size, size_t nmemb, void *user_data)
{
 
  return(0);
}

static int iov_seek_func(void *user_data, int offset, int whence)
{
  return(-1);
}

static int iov_close_func(void *user_data)
{
 
  return(0);
}

static long iov_tell_func(void *user_data)
{
  return(-1);
}

CDAFReader_Vorbis::CDAFReader_Vorbis(Stream *fp) : fw(fp)
{
}

CDAFReader_Vorbis::~CDAFReader_Vorbis()
{
}

uint64 CDAFReader_Vorbis::Read_(int16 *buffer, uint64 frames)
{
 return(0);
}

bool CDAFReader_Vorbis::Seek_(uint64 frame_offset)
{
 return(true);
}

uint64 CDAFReader_Vorbis::FrameCount(void)
{
 return(0);
}

CDAFReader* CDAFR_Vorbis_Open(Stream* fp)
{
 return 0;
}
