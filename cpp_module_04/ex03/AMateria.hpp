#ifndef CPP_MODULES_SCHOOL21_AMATERIA_HPP
#define CPP_MODULES_SCHOOL21_AMATERIA_HPP


class AMateria {
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	[...]
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_MODULES_SCHOOL21_AMATERIA_HPP
