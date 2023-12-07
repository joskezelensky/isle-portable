#ifndef MXVIDEOPARAM_H
#define MXVIDEOPARAM_H

#include "compat.h"
#include "mxpalette.h"
#include "mxrect32.h"
#include "mxtypes.h"
#include "mxvariabletable.h"
#include "mxvideoparamflags.h"

#include <ddraw.h>

// SIZE 0x24
class MxVideoParam {
public:
	__declspec(dllexport) MxVideoParam();
	__declspec(dllexport) MxVideoParam(MxVideoParam&);
	__declspec(dllexport)
		MxVideoParam(COMPAT_CONST MxRect32& rect, MxPalette* pal, MxULong p3, COMPAT_CONST MxVideoParamFlags& flags);
	__declspec(dllexport) MxVideoParam& operator=(const MxVideoParam&);
	__declspec(dllexport) ~MxVideoParam();

	__declspec(dllexport) void SetDeviceName(char* id);

	inline MxVideoParamFlags& flags() { return m_flags; }

	inline void SetPalette(MxPalette* p_palette) { this->m_palette = p_palette; }
	inline void SetBackBuffers(MxU32 p_backBuffers) { this->m_backBuffers = p_backBuffers; }

	inline MxRect32& GetRect() { return this->m_rect; }
	inline MxPalette* GetPalette() { return this->m_palette; }
	inline MxU32 GetBackBuffers() { return this->m_backBuffers; }

private:
	MxRect32 m_rect;           // 0x00
	MxPalette* m_palette;      // 0x10
	MxU32 m_backBuffers;       // 0x14
	MxVideoParamFlags m_flags; // 0x18
	int m_unk1c;               // 0x1c
	char* m_deviceId;          // 0x20
};

#endif // MXVIDEOPARAM_H
