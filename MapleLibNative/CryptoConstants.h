/*  MapleLibNative - A general-purpose MapleStory library for C++ 11+
 * Copyright (C) 2014 DeadCode, Felix Lebel
   
 * This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#pragma once
#include "Includes.h"

MAPLELIB
namespace MapleCryptoLib
{


	class CryptoConstants
	{
	public:
		static byte UserKey[128];
		static byte bShuffle[256];
		static byte bDefaultAESKeyValue[16];
		static byte WZ_GMSIV[4];
		static byte WZ_MSEAIV[4];
		static UINT WZ_OffsetConstant;

		static std::vector<byte> getTrimmedUserKey();
		
	};
}
END_MAPLELIB