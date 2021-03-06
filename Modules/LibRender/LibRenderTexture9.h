#ifndef __CLIENT_TEXTURE9__
#define __CLIENT_TEXTURE9__

#include <d3d9.h>
#include "TextureGenerator.h"

class ClientTexture9 {
private:
	

public:
	IDirect3DTexture9* m_tex;

	char * buffer;

	ClientTexture9(IDirect3DTexture9* ptr);
	HRESULT FillData(int Level, int Pitch, int size, void* ptr);
	IDirect3DTexture9* GetTex9();

	HRESULT SetAutoGenFilterType(D3DTEXTUREFILTERTYPE FilterType);
	void GenerateMipSubLevels();
	HRESULT GetSurfaceLevel(UINT Level, IDirect3DSurface9** ppSurfaceLevel);
	void ReplaceTexture(IDirect3DTexture9* nptr,IDirect3DDevice9* cur_device);
};

#endif