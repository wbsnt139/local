#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact( Contact* ps)
{
	ps->data = ( PeoInfo*)malloc(3 * sizeof( PeoInfo));
	if (ps->data == NULL)
	{
		return;  
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct PeoInfo*ptr= realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼������
	//1.������˾����ӿռ�
	//2.����������Ǿ�ʲô��û�з���
	CheckCapacity(ps);
	//��������
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("��ӳɹ�\n");

	/*if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����");
	}
	else
	{
		printf("����������:>");
			scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
			scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
			scanf("%s", ps->data[ps->size].sex);
			printf("������绰:>");
			scanf("%s", ps->data[ps->size].tele);
			printf("�������ַ:>");
			scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}*/
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-12s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			for (i = 0; i < ps->size; i++)
			{
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-12s\n",
					ps->data[i].name,
					ps->data[i].age,
					ps->data[i].sex,
					ps->data[i].tele,
					ps->data[i].addr);
		}
	}
}
//�����˵ĺ���
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{

			return  i;
		}
	}
	return -1;//�Ҳ��������
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������ɾ���˵�����:>");
		scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
		//���ò��Һ���
	int pos=FindByName(ps, name);
	//�ҵ��˷�����������Ԫ�ص��±�
	// �Ҳ����ͷ���-1
	//2.ɾ��
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ�����ݣ�һ��һ����ǰ���ǵ�����
		int j = 0;
		for (j = pos; j <ps->size-1 ; j++)
		{
           ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
	

}
void SearchContact(const struct Contact* ps)
{
	
	char name[MAX_NAME];
	printf("����������˵�����:>");
	scanf("%s", name);
	//��ɾ����ʱ����һ��
	int pos=FindByName(ps, name);
	if (pos == -1)
	{
		printf("���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-12s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-12s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸����\n");
	}
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;

}

void SortContact(struct Contact* ps)
{
	return strcmp((char*)ps->data->name, (char*)ps->data->name);
}