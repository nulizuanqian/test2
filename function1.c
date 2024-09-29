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

