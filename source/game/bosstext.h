/*=========================================================================

	bosstext.h

	Author:		PKG
	Created:
	Project:	Spongebob
	Purpose:

	Copyright (c) 2001 Climax Development Ltd

===========================================================================*/

#ifndef	__GAME_BOSSTEXT_H__
#define	__GAME_BOSSTEXT_H__

/*----------------------------------------------------------------------
	Includes
	-------- */

#ifndef __SOUND_SOUND_H__
#include "sound\sound.h"
#endif


/*	Std Lib
	------- */

/*----------------------------------------------------------------------
	Tyepdefs && Defines
	------------------- */

/*----------------------------------------------------------------------
	Structure defintions
	-------------------- */

class CBossText
{
public:
	void			init();
	void			shutdown();

	void			select();
	void			think(int _frames);
	void			render();
	int				isReadyToExit();


private:
	typedef struct
	{
		u16							m_titleTextId;
		u16							m_subTitleTextId;
		u16							m_instructionsTextId;
		CSoundMediator::SONGID		m_songId;
	} BOSS_DATA;
	static const BOSS_DATA	s_bossData[];



	class FontBank			*m_fontBank;
	class ScalableFontBank	*m_scalableFontBank;

};


/*----------------------------------------------------------------------
	Globals
	------- */

/*----------------------------------------------------------------------
	Functions
	--------- */

/*---------------------------------------------------------------------- */

#endif	/* __GAME_BOSSTEXT_H__ */

/*===========================================================================
 end */
