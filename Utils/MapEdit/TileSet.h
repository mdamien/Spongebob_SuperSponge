/*********************/
/*** TileSet Stuph ***/
/*********************/

#ifndef	__TILESET_HEADER__
#define	__TILESET_HEADER__

#include	"stdafx.h"
#include	"gl3d.h"
#include	<gl\gl.h>
#include	<gl\glu.h>
#include	<gl\glut.h>
#include	<Vector>

#include	"TexCache.h"
#include	"Tile.h"
//#include	"GinTex.h"


/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
class	CCore;
class	CTileSet
{
public:
		CTileSet(char *Filename,CCore *Core);
		~CTileSet();

		int		Load(CCore *Core);

private:
		char	Filename[256];
		std::vector<CTile>	Tile;

};

/*****************************************************************************/
#endif