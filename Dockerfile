FROM alpine:latest


RUN apk add --no-cache gcc libc-dev g++ boost git


RUN echo "echo \$1; g++ -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -o a.out \$1 && ./a.out " >> /usr/bin/acpp
RUN chmod -R +x /usr/bin/

RUN mkdir workdir
WORKDIR /workdir

# g++ -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -o a.out hello.cpp