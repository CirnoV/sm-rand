#if defined _rand_included
  #endinput
#endif
#define _rand_included

native int GetRandomIntEx(int nmin, int nmax);

native int GetRandomFloatEx(float nmin, float nmax);

public Extension __ext_rand =
{
	name = "rand",
	file = "rand.ext",
#if defined AUTOLOAD_EXTENSIONS
	autoload = 1,
#else
	autoload = 0,
#endif
#if defined REQUIRE_EXTENSIONS
	required = 1,
#else
	required = 0,
#endif
};
