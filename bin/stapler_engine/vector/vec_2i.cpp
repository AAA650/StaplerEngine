// vec_2i.cpp
#include "../../../lib/stapler_engine/vector/vec_2i.h"

namespace stapler_engine::vec
{
	DLLAPI_SE const int Vector2i::x_()
	{
		return x;
	}

	DLLAPI_SE void Vector2i::x_(int arg)
	{
		this->x = arg;
	}

	DLLAPI_SE const int Vector2i::y_()
	{
		return y;
	}

	DLLAPI_SE void Vector2i::y_(int arg)
	{
		this->y = arg;
	}

	DLLAPI_SE Vector2i Vector2i::plus_(const Vector2i& arg) const
	{
		return Vector2i(this->x + arg.x, this->y + arg.y);
	}

	DLLAPI_SE Vector2i Vector2i::operator+(const Vector2i& arg) const
	{
		return this->plus_(arg);
	}

	DLLAPI_SE Vector2i Vector2i::plus_(int arg) const
	{
		return Vector2i(this->x + arg, this->y + arg);
	}

	DLLAPI_SE Vector2i Vector2i::operator+(int arg) const
	{
		return this->plus_(arg);
	}

	DLLAPI_SE Vector2i Vector2i::minus_(const Vector2i& arg) const
	{
		return Vector2i(this->x - arg.x, this->y - arg.y);
	}

	DLLAPI_SE Vector2i Vector2i::operator-(const Vector2i& arg) const
	{
		return this->minus_(arg);
	}

	DLLAPI_SE Vector2i Vector2i::minus_(int arg) const
	{
		return Vector2i(this->x - arg, this->y - arg);
	}

	DLLAPI_SE Vector2i Vector2i::operator-(int arg) const
	{
		return this->minus_(arg);
	}

	DLLAPI_SE Vector2i Vector2i::ride_(int arg) const
	{
		return Vector2i(this->x * arg, this->y * arg);
	}

	DLLAPI_SE Vector2i Vector2i::operator*(int arg) const
	{
		return this->ride_(arg);
	}

	DLLAPI_SE int Vector2i::dot_(const Vector2i& arg) const
	{
		return this->x * arg.x + this->y * arg.y;
	}

	DLLAPI_SE int Vector2i::cross_(const Vector2i& arg) const
	{
		return this->x * arg.y - this->y * arg.x;
	}

	DLLAPI_SE Vector2i Vector2i::divide_(int arg) const
	{
		return Vector2i(this->x / arg, this->y / arg);
	}

	DLLAPI_SE Vector2i Vector2i::operator/(int arg) const
	{
		return this->divide_(arg);
	}

	DLLAPI_SE int Vector2i::norm_without_radical_() const
	{
		return x * x + y * y;
	}

	DLLAPI_SE void Vector2i::operator+=(const Vector2i& arg)
	{
		*this = this->plus_(arg);
	}

	DLLAPI_SE void Vector2i::operator+=(int arg)
	{
		*this = this->plus_(arg);
	}

	DLLAPI_SE void Vector2i::operator-=(const Vector2i& arg)
	{
		*this = this->minus_(arg);
	}

	DLLAPI_SE void Vector2i::operator-=(int arg)
	{
		*this = this->minus_(arg);
	}

	DLLAPI_SE void Vector2i::operator*=(int arg)
	{
		*this = this->ride_(arg);
	}

	DLLAPI_SE void Vector2i::operator/=(int arg)
	{
		*this = this->divide_(arg);
	}

	DLLAPI_SE bool Vector2i::equal_(const Vector2i& arg) const
	{
		return this->x == arg.x && this->y == arg.y;
	}

	DLLAPI_SE bool Vector2i::operator==(const Vector2i& arg) const
	{
		return this->equal_(arg);
	}

	DLLAPI_SE bool Vector2i::unequal_(const Vector2i& arg) const
	{
		return !(this->equal_(arg));
	}

	DLLAPI_SE bool Vector2i::operator!=(const Vector2i& arg) const
	{
		return this->unequal_(arg);
	}

	Vector2i::Vector2i()
	{
		this->x = 0;
		this->y = 0;
	}

	Vector2i::Vector2i(int arg_x, int arg_y)
	{
		this->x = arg_x;
		this->y = arg_y;
	}
}
