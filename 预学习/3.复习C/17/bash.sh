set -e
make ex17_addition
./ex17_addition db.dat c 200 20
./ex17_addition db.dat s 1 zed zed@zedshaw.com 1
./ex17_addition db.dat s 2 frank frank@zedshaw.com 0
./ex17_addition db.dat s 3 joe joe@zedshaw.com 1
./ex17_addition db.dat l
./ex17_addition db.dat d 3
./ex17_addition db.dat l
./ex17_addition db.dat g 2