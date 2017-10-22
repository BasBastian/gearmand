/* 
 * File:   RequestProtocol.cpp
 * Author: BasBastian
 *
 * Simple protocol object implementation. It does not require
 * any low-level knowledge. It just manages request's protocol
 * to keep data in check.
 * 
 * It is not the same abstraction level as packet or a frame.
 * Defines only required data stores and how they should be managed.
 * 
 * In request protocol we want to provide a protocol with a set
 * of available commands and an interface to cope with any content available. 
 */

#ifndef REQUESTPROTOCOL_HPP
#define REQUESTPROTOCOL_HPP

class RequestProtocol {
public:
    RequestProtocol();
    RequestProtocol(const RequestProtocol& orig);
    virtual ~RequestProtocol();
private:

};

#endif /* REQUESTPROTOCOL_HPP */

