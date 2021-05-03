#include<iostream>
#include<vector>
#include<string>
#include<time.h>
using namespace std;
//A编程模板类--类型参数化
 /*
     类模板的定义 类模板的使用 类模板做函数参数
 */
 //template < typename t>
 //class a
 //{
 //public:
 //    a(t a = 0)
 //    {
 //        this->a = a;
 //    }
 //public:
 //    void printa()
 //    {
 //        cout << "a:" << a << endl;
 //    }
 //protected:
 //private:
 //    t a;
 //};


//class A
//{
//public:
//};
//
//class B : A{};

 ////参数 c++编译器具体的类
 //void usea(a<int> & a)
 //{
 //        a.printa();
 //}
 //void main()
 //{
 //        //模板类本身就是抽象的，具体的类，具体的变量
 //     a<int> a1(11), a2(22), a3(33);//模板类是抽象的， 需要类型具体化
 //        //a1.printa();
 //      
 //     usea(a1);
 //     usea(a2);
 //     usea(a3);
 //}

//using namespace std;
//
//void bulluesort(int* a,int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n - 1 - i; ++j)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a[5] = { 12,35,6,79,100 };
//	bulluesort(a, 5);
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << a[i] << ",";
//	}
//}

//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        int index = 0;
//        for (auto& c : nums)
//        {
//            if (c != val)
//                nums[index++] = c;
//        }
//        return index;
//    }
//};
//
//int main()
//{
//    vector<int> num;
//    for (int i = 0; i < 10; ++i)
//    {
//        num.push_back[i];
//    }
//}



//int main()
//{
//   vector<int> vec;
//   for(int i = 0;i<10;++i)
//   {
//	   vec.push_back(i);
//   }
//   for (unsigned int i = 0; i < vec.size(); ++i)
//   {
//	   cout << vec[i] << ' ' ;
//   }
//
//	/*for (int i = 0;i<c.size();++i)
//	{
//		cout << c[i] << endl;
//	}
//	*/
//}


//void fun(string &str)
//{
//	for (auto &c : str)
//	{
//		
//	}
//}
//
//void fun1(int num)
//{
//
//}
//void display(string& str)
//{
//	for (int i = 0; i < str.size(); ++i)
//	{
		
//	}
//}

//int main()
//{
//	string s;
//	
//	getline(cin, s);
//	cout << s << endl;
//}
//int main() {
//	string str;
//	int count = 0;
//	getline(cin, str);
//	for (auto c : str) {
//		if (c != '\0' && c != ' ')
//			count++;
//	}
//	cout << count << endl;
//}


//int main()
//{
//	string str;
//	int count = 0;
//	cout << "请输入字符串：";
//	cin >> str; 
//	getline(cin, str);
//	/*for (int i = 0; i < str.size(); ++i)
//	{
//		if (str[i] != ' ' && str[i] != '\0')
//		{
//			++count;
//		}
//	}*/
//	for (int i = 0; i < str.size(); ++i)
//	{
//	     
//	}
//	cout << str << endl;
//	
//}

//int fun(string& s)
//{
//    int count = 0;
//	for(int i = 0;i <= s.size(); ++i)
//	{
//		if (s[i] != ' ')
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	string str;
//	cout << "Please input:";
//	cin >> str;
//	getline(cin, str);
//	cout << fun(str) << endl;
//}

//struct person
//{
//	string name;
//	int age;
//	float weight;
//};
//
//int main() {
//	person s1;
//	s1.name = "李四";
//	s1.age = 18;
//	s1.weight = 62.5;
//	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 体重:" << s1.weight << endl;
//}

//struct student
//{
//    string name;  
//    int age;      
//    int score;   
//};
//
//
//int main() {
//
//    struct student stu1; 
//
//    stu1.name = "张三";
//    stu1.age = 18;
//    stu1.score = 100;
//
//    cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 成绩：" << stu1.score << endl;
//}
//int main()
//{
//	int count = 0;
//	string str ;
//	cout << "please input:";
//	cin >> str;
//	getline(cin,str);
//	for(int i = 0;i <= str.size(); ++i)
//	{
//		if (str[i] == ' ')
//		{
//			count++;
//		}
//	}
//	count += 1;
//	cout << count << endl;
//}



//{
//      int i = 0, s = 0;
//     while (i <= 100)
//     {
//       s += i;
//       i++;
//       }
//     cout << s << endl;
//     }



//void swap(int* p, int* q)
//{
//	int tmp = *p;
//	*p = *q;
//	*q = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 1100;
//	swap(a, b);
//	cout << a << ","<< b << endl;
//}



//void randDate(int* a, int n)
//{
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i)
//	{
//		a[i] = rand() % 100;
//		cout << a[i] << ",";
//	}
//	cout << "\n";
//}

//void bullueSort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; ++i)
//	{
//		for (int j = 0; j < n - 1 - i; ++j)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}

//void display(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		cout << a[i] << ",";
//	}
//	cout << "\n";
//}

//void Pan(int n)
//{
//	if ();
//	{
//
//	}
//}

//int main()
//{
//	int a[10] = { 9,2,3,4,5,44,453,8,21,10 };
//	Pan(10);
//	//const int N = 10 ;
//	//int a[N];
//	//randDate(a, 10);
//	//bullueSort(a, 10);
//	//display(a, 10);
//	return 0;
//}






//void randDate(int* a,int n)
//{
//	srand(time(NULL));
//	for (int i = 0; i < n; ++i)
//	{
//		a[i] = rand() % 100;
//		cout << a[i] << ",";
//	}
//	cout << "\n";
//}
//void swap(int* p, int* q)
//{
//	int tmp = *p;
//	*p = *q;
//	*q = tmp;
//}
//
//void BullueSort(int* a)
//{
//	for (int i = 0; i < 5; ++i)
//	{
//		for (int j = 0; j < 5 - i ; ++j)
//		{
//			if (a[j] > a[j + 1])
//			{
//				swap(a[j], a[j + 1]);
//			}
//		}
//	}
//}
////
//void display(int* a)
//{
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << a[i] << ",";
//	}
//	cout << "\n";
//}
//
//int  main()
//{
//	int a[6] = {12,35,6,79,100};
//	//randDate(a,N);
//	BullueSort(a);
//	display(a);
//	return 0;
//}

//void swap(int* p, int* q)
//{
//	int t = *p;
//	*p = *q;
//	*q = t;
//}
//
//void SelectSort(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		int min = i;
//		for (int j = i + 1; j < n; ++j)
//		{
//			if (a[min] > a[j])
//			{
//				min = j;
//			}
//			if (min != i)
//			{
//				swap(&a[min], &a[i]);
//			}
//		}
//	}
//}
//
//void display(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		cout << a[i] << ",";
//	}
//	cout << "\n";
//}
//
//int main()
//{
//	int a[10] = { 12,35,6,79,100 };
//	SelectSort(a, 10);
//	display(a, 10);
//	return 0;
//}


void randDate(int* a, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 100;
		cout << a[i] << ",";
	}
	cout << "\n";

}

//
//void swap(int* p, int* q)
//{
//	int t = *p;
//	*p = *q;
//	*q = t;
//}
//
//void InsterSort(int* a, int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (a[j] < a[j - 1])
//			{
//				swap(&a[j], &a[j - 1]);
//			}
//			else
//				break;
//		}
//	}
//}

// 快速排序：时间复杂度：O（nlog2的n次方）  空间复杂的：log2的n次方
void Qsort(int* a, int start, int end)
{
    
    int i = start;
    int j = end;
    int key = a[i];
    if (i >= j)
        return;
    while (i<j)
    {
        while (i < j && a[j] >= key)
        {
            j--;
        }
        a[i] = a[j];

        while (i < j && a[i] <= key)
        {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = key;
    Qsort(a,start,i-1);
    Qsort(a,i+1,end);
}



void display(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ",";
	}
	cout << "\n";
}

int main()
{
	const int N = 10;
	int a[N];
	randDate(a, N);
	//InsterSort(a,N);
    Qsort(a, 0, N - 1);
	display(a, N);
	return 0;
}