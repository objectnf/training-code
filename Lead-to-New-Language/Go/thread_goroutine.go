package main

import (
	"fmt"
	"time"
)

func outer() {
	var num = 0
	for {
		fmt.Println("Out! No.", num)
		num++
		time.Sleep(time.Second * 2)
	}
}

func main() {
	/*
	 * go 关键字用来开启一个go程，go程是go并行的核心
	 * goroutine是go通过runtime管理的轻量级线程管理器
	 * go程不是协程，不是普通的线程，更不是进程
	 */
	go outer()

	var inTimes = 0
	for {
		fmt.Println("InMain! No.", inTimes)
		inTimes++
		time.Sleep(time.Second)
	}
}
