/******************************/
/*** Collision  Layer Class ***/
/******************************/

#ifndef __LAYER_COLLISION_H__
#define __LAYER_COLLISION_H__

#include	<dstructs.h>


#ifdef __VERSION_debug__
#define __SHOW_COLLISION__
#endif


/*****************************************************************************/
class CLayerCollision
{
public:
		CLayerCollision(sLayerHdr *Hdr);
virtual	~CLayerCollision();

virtual	void			shutdown();

		u8				Get(int X,int Y)	{return(Map[X+(Y*MapWidth)]);}

#ifdef __SHOW_COLLISION__
		void			render(DVECTOR &MapPos);
#endif


protected:
		sLayerHdr		*LayerHdr;
		int				MapWidth,MapHeight;


		u8				*Map;
};



/*****************************************************************************/

#endif