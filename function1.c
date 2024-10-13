void addIncome() //记录收入 
{
	Record newRecord;
	printf("请输入该收入日期(YYYY-MM-DD)：\n");
	scanf("%s",&newRecord.date);
	printf("请输入该收入的金额：\n");
	scanf("%lf",&newRecord.amount);
	if(newRecord.amount<=0)//判断是否为正数 
	{
		printf("该金额必须为正数，请重新输入！\n");
		return;
	}
	printf("请输入该收入的类别：\n");
	scanf("%s",&newRecord.category);
	printf("请输入该收入的备注：\n");
	scanf("%s",&newRecord.remark);
	
	incomeRecords[incomeCount++]=newRecord;
	printf("收入记录添加成功！\n"); 
}

void addSpending() //记录支出
{
	Record newRecord;
	printf("请输入该支出的日期(YYYY-MM-DD)：\n");
	scanf("%s",&newRecord.date); 
	printf("请输入该支出的金额：\n");
	scanf("%lf",&newRecord.amount);
	if(newRecord.amount<=0)//判断是否为正数
	{
		printf("该金额必须为正数，请重新输入！\n");
		return;
	}
	printf("请输入该支出的类别：\n");
	scanf("%s",&newRecord.category);
	printf("请输入该支出的备注：\n");
	scanf("%s",&newRecord.remark); 
	
	spendingRecords[spendingCount++]=newRecord;
	printf("支出记录添加成功！\n");
 } 


void displayRecords()//查询所有账单
{
	printf("===收入记录===：\n");
	for(int i=0;i<incomeCount;i++)
	{
		printf("日期： %s, 金额： %lf, 类别： %s, 备注： %s\n",
		       incomeRecords[i].date,incomeRecords[i].amount,incomeRecords[i].category,incomeRecords[i].remark); 
	}
	
	printf("===支出记录===：\n");
	for(int i=0;i<spendingCount;i++)
	{
		printf("日期： %s, 金额： %lf, 类别： %s, 备注： %s\n",
		       spendingRecords[i].date,spendingRecords[i].amount,spendingRecords[i].category,spendingRecords[i].remark);
	}
 } 

void findRecords()//查询账单 
{
	int a;
	do{
		printf("请选择以下选项进行查询：\n");
	    printf("1.根据日期查询\n");
	    printf("2.根据类别查询\n");
	    scanf("%d",&a);
	    switch(a)
	    {
	    	case 1:
	    		   findRecords1();
	    		   break;
	    	case 2:
			       findRecords2();
				   break;
			default:
			        printf("输入错误，请重新输入正确的序号！");   	   
		}
	}while(a!=2); 
}

int findRecords1()//根据日期查询账单
{
	char date[10];
	printf("请输入要查询的日期(YYYY-MM-DD)：\n");
	scanf("%s",date);
	
	printf("===收入记录===\n");
	for(int i=0;i<incomeCount;i++)
	{
		if (strcmp(incomeRecords[i].date, date) == 0)
		{
			printf("日期： %s, 金额： %lf,  类别： %s, 备注： %s",
			       incomeRecords[i].date,incomeRecords[i].amount,incomeRecords[i].category,incomeRecords[i].remark);
		}
	}
	
	printf("===支出记录===\n");
	for(int i=0;i<spendingCount;i++)
	{
		if (strcmp(spendingRecords[i].date, date) == 0)
		{
			printf("日期： %s, 金额： %lf,  类别： %s, 备注： %s",
			        spendingRecords[i].date,spendingRecords[i].amount,spendingRecords[i].category,spendingRecords[i].remark);
		}
	}
	return 0;
} 

int findRecords2()//根据类别查询账单
{
	char category[MAXSIZE];
	printf("请输入要查询的类别：\n");
	scanf("%s",category);
	
	printf("===收入记录===\n");
	for(int i=0;i<incomeCount;i++)
	{
		if (strcmp(incomeRecords[i].category, category) == 0)
		{
			printf("日期： %s, 金额： %lf,  类别： %s, 备注： %s",
			       incomeRecords[i].date,incomeRecords[i].amount,incomeRecords[i].category,incomeRecords[i].remark);
		}
	}
	
	printf("===支出记录===\n");
	for(int i=0;i<spendingCount;i++)
	{
		if (strcmp(spendingRecords[i].category, category) == 0)
		{
			printf("日期： %s, 金额： %lf,  类别： %s, 备注： %s",
			        spendingRecords[i].date,spendingRecords[i].amount,spendingRecords[i].category,spendingRecords[i].remark);
		}
	}
	return 0;
 } 

