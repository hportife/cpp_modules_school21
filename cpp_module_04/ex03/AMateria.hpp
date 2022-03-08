#ifndef CPP_MODULES_SCHOOL21_AMATERIA_HPP
#define CPP_MODULES_SCHOOL21_AMATERIA_HPP

#include "iostream"

class AMateria {
protected:
	std::string type;
public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria (const AMateria &other);
	virtual ~AMateria();

	AMateria &operator=(const AMateria &other);

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_MODULES_SCHOOL21_AMATERIA_HPP
