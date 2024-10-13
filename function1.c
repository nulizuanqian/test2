void addIncome() //��¼���� 
{
	Record newRecord;
	printf("���������������(YYYY-MM-DD)��\n");
	scanf("%s",&newRecord.date);
	printf("�����������Ľ�\n");
	scanf("%lf",&newRecord.amount);
	if(newRecord.amount<=0)//�ж��Ƿ�Ϊ���� 
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

void addSpending() //��¼֧��
{
	Record newRecord;
	printf("�������֧��������(YYYY-MM-DD)��\n");
	scanf("%s",&newRecord.date); 
	printf("�������֧���Ľ�\n");
	scanf("%lf",&newRecord.amount);
	if(newRecord.amount<=0)//�ж��Ƿ�Ϊ����
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


void displayRecords()//��ѯ�����˵�
{
	printf("===�����¼===��\n");
	for(int i=0;i<incomeCount;i++)
	{
		printf("���ڣ� %s, �� %lf, ��� %s, ��ע�� %s\n",
		       incomeRecords[i].date,incomeRecords[i].amount,incomeRecords[i].category,incomeRecords[i].remark); 
	}
	
	printf("===֧����¼===��\n");
	for(int i=0;i<spendingCount;i++)
	{
		printf("���ڣ� %s, �� %lf, ��� %s, ��ע�� %s\n",
		       spendingRecords[i].date,spendingRecords[i].amount,spendingRecords[i].category,spendingRecords[i].remark);
	}
 } 

void findRecords()//��ѯ�˵� 
{
	int a;
	do{
		printf("��ѡ������ѡ����в�ѯ��\n");
	    printf("1.�������ڲ�ѯ\n");
	    printf("2.��������ѯ\n");
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
			        printf("�������������������ȷ����ţ�");   	   
		}
	}while(a!=2); 
}

int findRecords1()//�������ڲ�ѯ�˵�
{
	char date[10];
	printf("������Ҫ��ѯ������(YYYY-MM-DD)��\n");
	scanf("%s",date);
	
	printf("===�����¼===\n");
	for(int i=0;i<incomeCount;i++)
	{
		if (strcmp(incomeRecords[i].date, date) == 0)
		{
			printf("���ڣ� %s, �� %lf,  ��� %s, ��ע�� %s",
			       incomeRecords[i].date,incomeRecords[i].amount,incomeRecords[i].category,incomeRecords[i].remark);
		}
	}
	
	printf("===֧����¼===\n");
	for(int i=0;i<spendingCount;i++)
	{
		if (strcmp(spendingRecords[i].date, date) == 0)
		{
			printf("���ڣ� %s, �� %lf,  ��� %s, ��ע�� %s",
			        spendingRecords[i].date,spendingRecords[i].amount,spendingRecords[i].category,spendingRecords[i].remark);
		}
	}
	return 0;
} 

int findRecords2()//��������ѯ�˵�
{
	char category[MAXSIZE];
	printf("������Ҫ��ѯ�����\n");
	scanf("%s",category);
	
	printf("===�����¼===\n");
	for(int i=0;i<incomeCount;i++)
	{
		if (strcmp(incomeRecords[i].category, category) == 0)
		{
			printf("���ڣ� %s, �� %lf,  ��� %s, ��ע�� %s",
			       incomeRecords[i].date,incomeRecords[i].amount,incomeRecords[i].category,incomeRecords[i].remark);
		}
	}
	
	printf("===֧����¼===\n");
	for(int i=0;i<spendingCount;i++)
	{
		if (strcmp(spendingRecords[i].category, category) == 0)
		{
			printf("���ڣ� %s, �� %lf,  ��� %s, ��ע�� %s",
			        spendingRecords[i].date,spendingRecords[i].amount,spendingRecords[i].category,spendingRecords[i].remark);
		}
	}
	return 0;
 } 

