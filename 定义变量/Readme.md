一.作用域：
	局部变量：
		1.不同的函数可以使用相同的名字的变量,他们代表不同的对象,互不干扰.
		2.形参是局部变量
		3.在一个函数内部,可以在复合语句中定义变量,
	  	  这些变量只在复合语句中有效
		auto
		static
		register
	全局变量：
		1.一般将全局变量的第一个字母大写
		2.如果在同一个源文件中,外部变量与局部变量同名,
		  则在局部变量的作用范围外部变量被屏蔽
		static
		extern  
			用extern声明外部变量,扩展它在程序文件的作用域或扩展到其他文件
			用extern声明外部变量,类型名可以省略
二.生存期：
	静态变量：分配到固定的存储空间（全局变量）
		static
		extern
 		1.静态变量若不赋值,系统会自动赋0或'\0'.
	
	动态变量：动态分配存储空间,在本函数内有效.
		1.函数形参
		2.自动变量auto
		3.函数调用时现场保护和返回地址
		4.只有局部自动变量和形式参数可以作为寄存器变量register
