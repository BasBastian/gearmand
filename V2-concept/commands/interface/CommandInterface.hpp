/** 
 * Author: BasBastian
 */

#ifndef COMMANDINTERFACE_HPP
#define COMMANDINTERFACE_HPP

class CommandInterface {
public:
    CommandInterface();
    CommandInterface(const CommandInterface& orig);
    virtual ~CommandInterface();
    
    /**
     * Common interface to make sure command was created.
     */
    void create() = 0;
protected:
    /** Name associated with command */
    char * command  = "";
    /** Function to call on command fire */
    char * function = "";
    /** Content of what was sent to JobServer */
    char * payload  = ""; 
private:
};

#endif /* COMMANDINTERFACE_HPP */

