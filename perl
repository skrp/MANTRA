use strict; use warnings;

# set & print a variable
my $var = 'hi';
my $var2 = 'bye';

print "$var $var2\n";

# set & print array;
my @array = ("hi", "bye");
print "$array[1] $array[0]"\n";

# example array
my @week = ("mon", "tuesday", "03", "thu", "fri", "saturday", "07-sunday");
print "$week[5]\n";

# add variables
my $first = 1;
my $second = 3;
my $new = 0;
my $new = $second + $first;
print "$new\n";
my $new = $second * $first;
print "$new\n";
