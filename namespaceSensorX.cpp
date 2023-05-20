namespace sensorX
{
    getTemp()
}
namespace sensorY
{
    getTemp()
}

sensorx::getTemp();

sensorY::getTemp();
 /* =====================
 */
int * myInt = new int;

delete myInt; 
/* ISSUES:
return address <-- new (data type)
* 1. memory leack (lose the address of the allocated )
*
*  MMU ---> access physical memory
*   MMU
       : lookup table 
* 
*
*/

int * myArr = new myArr[100];

delete myArr ==> /* will delete only the first element */
delete [] myArr;/* It should be done this way */

/* RAII

 */

class Mobile
{
    public:
    Mobile()
    {
        /* Open operation */
    }
    void scrolling()
    {

    }
    ~Mobile()
    {
        /* close */
        /* When 
            How to delete Res
            How can I       
         */
    }
}