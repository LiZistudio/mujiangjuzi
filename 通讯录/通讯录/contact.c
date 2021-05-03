#define _CRT_SECURE_NO_WARNINGS 1

//	____                      ____
///	|	|                  / |    |
//|	|	|                  | |____|
//|	|	|                  |/____/
//|	|	|                   ______
//|	|	|                 / |     |  
//|	|	|______________   | |     |  
//|	|__________________|  | |     |
//|/___________________/  | |_____|
//                        | /_____/	
//

#include"tongxun.h"

static int FindByName(const struct Contact* ps, char name[MAX_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}
//�������ݺ���
static void CheckCapacity(struct Contact* ps);
void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("Contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//��ȡ�ļ���ŵ�ͨѶ¼��
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}
void InitContact(struct Contact* ps)
{
	//memset(ps->data,0,sizeof(ps->data));
	//ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
	ps->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (ps->data==NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = 3;
	//�ѱ���õ��ļ��е����ݼ��ص�ͨѶ¼���ڴ棩��
	LoadContact(ps);
}


static void CheckCapacity(struct Contact* ps)
{
	if (ps->size==ps->capacity)
	{
		//����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr!=NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ���\n");
		}
		else
		{
			printf("����ʧ�ܣ�\n");
		}
	}
	return 0;
}
void AddContact(struct Contact* ps)
{
	/*if (ps->size==MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
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

	
	//��⵱ǰͨѶ¼������
	//1.����ռ����ˣ������ӿռ�
	//2.����ռ�û����ɶ�²���
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
}
void ShwoContact(const struct Contact* ps)
{
	if (ps->size==0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for ( i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
void DelContact(struct Contact* ps)
{
	char name[MAX_name];
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	// 
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1
	int pos = FindByName(ps, name);
	//2.ɾ��
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for ( j = pos; j <ps->size-1 ; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void SearchContact(const struct Contact* ps)
{
	char name[MAX_name];
	printf("������Ҫ�����˵���Ϣ:\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos==-1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}
void ModdifyContact(struct Contact* ps)
{
	char name[MAX_name];
	printf("������Ҫ�޸ĵ�����\n");
	scanf("%s", name);
	int pos=FindByName(ps, name);
	if (pos==-1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
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
static int cmp_int(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}
void SortContact(struct Contact* ps)
{
	int sz = sizeof(ps->data) / sizeof(ps->data[0]);
	qsort(ps->data,sz,sizeof(ps->data[0]),cmp_int);
	printf("����ɹ�\n");
}
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}

//�ڴ��ͷ�
void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}
//�����ļ�
void SaveContact(struct Contact* ps)
{
	int i = 0;
	FILE* pfWrite = fopen("Contact.dat", "wb");
	if (pfWrite==NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//д��ͨѶ¼�е����ݵ��ļ���
	for ( i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}
	printf("����ɹ���\n");
	fclose(pfWrite);
	pfWrite = NULL;
}