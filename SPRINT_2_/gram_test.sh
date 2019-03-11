#! /bin/bash
rm -R ./buildJava/
mkdir ./buildJava/
antlr4 $1 -o ./buildJava/
javac ./buildJava/*.java