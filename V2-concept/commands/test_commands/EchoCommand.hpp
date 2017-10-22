/** 
 * Author: BasBastian
 */

#ifndef ECHOCOMMAND_HPP
#define ECHOCOMMAND_HPP

#include "../interface/CommandInterface.hpp"

class EchoCommand : CommandInterface {
public:
    EchoCommand();
    EchoCommand(const EchoCommand& orig);
    virtual ~EchoCommand();
    
    void create();
private:
    
};

#endif /* ECHOCOMMAND_HPP */

