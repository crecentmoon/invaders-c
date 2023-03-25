## https://pkgs.alpinelinux.org/packages

FROM alpine:3.8
RUN apk add --no-cache gcc libc-dev ncurses mlocate
WORKDIR /home