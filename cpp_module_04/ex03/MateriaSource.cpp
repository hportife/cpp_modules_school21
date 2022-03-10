#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "DBG: MateriaSource constructor called\n";
    for (int i = 0; i < SOURCES; i++)
        source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & copy) {
    std::cout << "DBG: MateriaSource copy called\n";
    *this = copy;
}

MateriaSource const& MateriaSource::operator=(MateriaSource const& assign) {
    std::cout << "DBG: MateriaSource [=] operator called\n";
    for (int i = 0; i < SOURCES; i++) {
        this->source[i] = assign.source[i];
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << "DBG: MateriaSource " << "destructor" << " called\n";
    for (int i = 0; i < SOURCES; i++)
        delete source[i];
}

void	MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < SOURCES; i++) {
        if (!source[i]) {
            std::cout << "Learned " << m->getType() << std::endl;
            source[i] = m;
            return ;
        }
    }
}

AMateria	*MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < SOURCES && source[i]; i++) {
        if (type == source[i]->getType()) {
            std::cout << "Materia have been created!\n";
            return source[i]->clone();
        }
    }
    std::cout << "Materia not found\n";
    return NULL;
}