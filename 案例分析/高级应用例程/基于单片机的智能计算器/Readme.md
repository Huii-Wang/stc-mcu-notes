## 項目架構分析
    执行单任务系统
    1.初始化硬件LCD
    2.mian中进行按键扫描
    void main()
    {
	    lcdinit();

	    while(1)
	    {
		    keyscan();	
	    }
    }