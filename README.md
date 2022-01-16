# reasonml-template

![ReasonML](https://img.shields.io/badge/-ReasonML-DD4B3A?style=square&logo=reason&logoColor=white)

Opinionated ReasonML starter template. With esy and dune.

Dune by default assumes that all the source code lays on the same directory as the `dune` file. If you want to have subdirs inside `lib` then you have to have a separated `dune` file for each of them. But this template comes with `(include_subdirs unqualified)` as a dune option. Which allows having others subdirs inside `lib` without having to setup them as separated libraries. If you do not want this behaviour just remove [this line](https://github.com/mxthevs/reasonml-starter/blob/main/lib/dune#L4).

## Prerequisites

### esy

A package manager for the OCaml ecosystem. It can install packages from `opam` and from `npm`.

It also automatically resolves transitive dependencies, and generates a lock file containing their versions to make it easier to replicate your setup on multiple machines without storing the downloaded dependencies.

```console
npm i -g esy
```

Or, if you're using yarn

```console
yarn global add esy
```

## Up and running

Install the dependencies with esy:

```console
esy
```

Build the project:

```console
esy build
```

Run the example binary:

```console
esy x ReasonStarter <dividend> <divisor>
```
