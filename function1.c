void addIncome( 
{
	Record newRecord;
	printf("���������������(YYYY-MM-DD)��\n");
	scanf("%s",&newRecord.date);
	printf("�����������Ľ�\n");
	scanf("%lf",&newRecord.amount);
	if(newRecord.amount<=0)
	{
		printf("�ý�����Ϊ���������������룡\n");
		return;
	}
	printf("���������������\n");
	scanf("%s",&newRecord.category);
	printf("�����������ı�ע��\n");
	scanf("%s",&newRecord.remark);
	
	incomeRecords[incomeCount++]=newRecord;
	printf("�����¼��ӳɹ���\n"); 
}

void addSpending() 
{
	Record newRecord;
	printf("�������֧��������(YYYY-MM-DD)��\n");
	scanf("%s",&newRecord.date); 
	printf("�������֧���Ľ�\n");
	scanf("%lf",&newRecord.amount);
	if(newRecord.amount<=0)
	{
		printf("�ý�����Ϊ���������������룡\n");
		return;
	}
	printf("�������֧�������\n");
	scanf("%s",&newRecord.category);
	printf("�������֧���ı�ע��\n");
	scanf("%s",&newRecord.remark); 
	
	spendingRecords[spendingCount++]=newRecord;
	printf("֧����¼��ӳɹ���\n");
 } 

