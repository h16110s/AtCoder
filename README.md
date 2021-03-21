# AtCoder
AtCoderの過去問を解いたプログラム  

# build image
```
docker build -t gcc-alpine ./
docker run -it -v ${PWD}:/root/workdir/ gcc-alpine 
```
## exec
```
docker run -it --rm -v ${PWD}:/workdir/ gcc-alpine
```

# Docker Compose
```
docker-compose up -d --build
```
## exec
```
docker exec -it clang ash
```
## Compile 
```
acpp <FILE_NAME>
```


# Link
[AtCoder](https://atcoder.jp/)
