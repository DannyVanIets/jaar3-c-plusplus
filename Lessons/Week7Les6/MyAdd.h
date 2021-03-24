#pragma once

template <typename T>
T add(T const& lhs, T const& rhs);

template int add<int>(int const&, int const&);
template double add<double>(double const&, double const&);