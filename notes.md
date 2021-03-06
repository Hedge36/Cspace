

# Idea

> **学会用基本的数据结构解决问题，重在底层数据结构的理解。**学C学什么，需要注意这一点，与其他语言不同，C很少用在实际的PC开发中，更多应用于底层逻辑，而这我们往往接触不到，就非常容易有无关紧要的错觉。
>
> ***摆正态度***

# Preface

> 由于其内容与C++大体相似，以下只呈现部分与C++不一致的地方和一些想法。

# Chapter1 General

> 1. 程序总是从main函数开始执行的，无论main函数在整个程序的哪个位置；C程序必须有且只有一个main函数；
> 2. C语言不存在逻辑类型；



# Chapter2 Algorithm

## 1. 概述

> 一个程序包括以下两个方面的信息：
>
> 1. **对数据的描述。**在程序中要指定用到哪些数据，以及这些数据的类型和数据的组织形式。这就是**数据结构**。
> 2. **对操作的描述。**要求计算机进行操作的步骤，也就是**算法**。

## 2. 算法的描述

### 基本结构

> 基本结构的特点包括只有一个进出口、结构内的每一个部分都有机会被执行、不存在死循环，围绕上述原则，可自行设计基本结构。以下3种为最基本的算法结构：
>
> 1. 顺序
> 2. 选择
> 3. 循环

### 基本表示方法

> 自然语言
>
> NS流程图
>
> 伪代码

### 设计方法

> 自顶向下、逐步细化
>
> 分而治之、模块开发



# Chapter3 SimpleDesign

> 类型
>
> 补码
>
> puts, gets()



## 内存分配函数

> malloc
>
> calloc
>
> realloc
>
> free

## 文本读写

> fopen
>
> fclose
>
> fgetc
>
> fputc
>
> fgets
>
> fputs
>
> // 文本文件
>
> fprintf
>
> fscanf
>
> // 二进制文件
>
> fread
>
> fwrite

### status

> feof
>
> exit
>
> ferror
>
> clearerror

### cursor

> rewind
>
> fseek
