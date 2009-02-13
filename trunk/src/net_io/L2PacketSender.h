#ifndef L2PACKETSENDER_H_
#define L2PACKETSENDER_H_

//#define L2P_NETWORK_DEBUGOUT

// return values:
// > 0 on OK
//   0 on timeout
//  -1 on error

// 1st 2 bytes of rawPacket must be packet size (as in all L2 protocol)
/*int L2PacketSend_1byte( const unsigned char *rawPacket,
		unsigned int sock,
		long tv_sec, long tv_usec,
		unsigned int *sentLen );*/

#ifdef L2PNET_ENABLE_OLD_RECVSEND

// 1st 2 bytes of rawPacket must be packet size (as in all L2 protocol)
int L2PacketSend( const unsigned char *rawPacket,
		unsigned int sock,
		long tv_sec, long tv_usec,
		unsigned int *sentLen );

#endif /* L2PNET_ENABLE_OLD_RECVSEND */

int L2PacketSend2( const unsigned char *rawPacket, unsigned int sock, long lWaitMilliSecs, unsigned int *sentLen );

int L2PacketSend( unsigned int sock, L2BasePacket *pack, long lWaitMilliSecs, unsigned int *sentLen );

#endif /*L2PACKETSENDER_H_*/
