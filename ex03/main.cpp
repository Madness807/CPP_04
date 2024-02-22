#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    return 0;
}

/*
                      +---------------+
                      | <<interface>> |
                      |  ICharacter   |
                      +-------+-------+
                              ^
                              |
                              |
          +-------------------+-------------------+---------------------+
          |                                       |                     |
+---------v---------+                   +---------v---------+   +-------v------+
|     Character     |                   |   IMateriaSource  |   |  AMateria    |
+-------------------+                   +-------------------+   +--------------+
| -name: str        |                   |                    |  | -type: str   |
| -inventory[4]:    |                   +---+------------+---+  +------+-------+
|    AMateria*      |                       ^            ^             |
+-------------------+                       |            |             |
          ^                                 |            |             |
          |                                 |            |             |
          |                    +------------+            +-------------+
          |                    |                         |
          |                    |                         |
          |          +---------v---------+       +-------v------+
          |          |   MateriaSource   |       |   Concrete   |
          +----------+-------------------+       |   Materia    |
                     | -materias[4]:     |       +--------------+
                     |    AMateria*      |       | Ice          |
                     +-------------------+       | Cure         |
                                                 +--------------+
*/
