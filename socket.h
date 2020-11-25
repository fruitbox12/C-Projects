#pragma once

#include<netinet/in.h>		// For sockaddr_in
class Socket {
	private:
		// C-style data structure
		int			m_sock;					// socket id (4 bytes, 32 bits) (-2GB to 2GB)

		/* Standard C++:
			struct sockaddr_in {
				sa_family_t sin_family;			Address Family - AF_INET nowadays (IP addressing)
				uint16_t sin_port;				Port number
				struct in_addr sin_addr;		Internet address
				unsigned char sin_zero[8];		Pad Bytes
			};
		*/
		
		/* Microsoft C++:
			struct sockaddr_in {
				short sin_family;			(2 bytes, 16 bits) (-32768 to 32768)
				unsigned short sin_port;	(2 bytes, 16 bits) (0 to 65535)
				struct in_addr sin_addr;		
				char sin_zero[8]; 
			};
		*/

	public:
		Socket();
		virtual ~Socket();
};

