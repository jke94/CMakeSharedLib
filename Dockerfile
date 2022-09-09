FROM ubuntu:latest
RUN apt-get update && apt-get install -y \
    cmake \
    g++ \
    && rm -rf /var/lib/apt/lists/*
COPY /PrimeLibrary /PrimeLibrary
WORKDIR /PrimeLibrary/build
RUN cmake ..
RUN make 
# TODO: Move to other FROM (layer)
RUN make install
CMD ["ls", "-l"]