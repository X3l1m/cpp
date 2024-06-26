#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static const int _fractionalBits = 8;

	public:
		bool Fixed &operator>(Fixed const &fx);
		bool Fixed &operator<(Fixed const &fx);
		bool Fixed &operator>=(Fixed const &fx);
		bool Fixed &operator<=(Fixed const &fx);
		bool Fixed &operator==(Fixed const &fx);
		Fixed &operator!=(Fixed const &fx);
		Fixed &operator+(Fixed const &fx);
		Fixed &operator-(Fixed const &fx);
		Fixed &operator*(Fixed const &fx);
		Fixed &operator/(Fixed const &fx);
		Fixed &operator++();
		Fixed &operator--();
		Fixed &operator++(int);
		Fixed &operator--(int);
		static Fixed &min(Fixed &fx1, Fixed &fx2);
		static Fixed &max(Fixed &fx1, Fixed &fx2);
		static const Fixed &min(const Fixed &fx1, const Fixed &fx2);
		static const Fixed &max(const Fixed &fx1, const Fixed &fx2);
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &src);
		~Fixed();
		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &i);

#endif