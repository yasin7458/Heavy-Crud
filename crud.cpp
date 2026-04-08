#include <iostream>
using namespace std;

class ArrayManager
{
private:
    int arr[20];
    int num;

public:
    ArrayManager()
    {
        num = 0;
    }

    void creatarray()
    {
        cout << endl;
        cout << "How Many Elements Want To Add In Array :- ";
        cin >> num;

        if (num <= 20)
        {
            cout << endl;

            for (int i = 0; i < num; i++)
            {
                cout << "Enter Element Of Array " << i + 1 << " :- ";
                cin >> arr[i];
            }

            cout << endl;
            cout << "Array Created Successfully..." << endl;
        }
    }

    void readarray()
    {
        cout << endl;
        cout << "Array Elements Are :- ";

        for (int i = 0; i < num; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void deletearray()
    {
        int pos;

        cout << endl;
        cout << "Enter Element Position To Delete :- ";
        cin >> pos;

        if (pos > 0 && pos <= num)
        {
            for (int i = pos - 1; i < num - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            num--;

            cout << endl;
            cout << "Array Deleted Successfully...." << endl;

            readarray();
        }
    }

    void updatearray()
    {
        int pos, value;

        cout << endl;
        cout << "Enter Element Position To Update :- ";
        cin >> pos;

        if (pos > 0 && pos <= num)
        {
            cout << "Enter New Value :- ";
            cin >> value;

            arr[pos - 1] = value;

            cout << endl;
            cout << "Array Updated Successfully" << endl;

            readarray();
        }
    }

    void positiveNegative()
    {
        int pos = 0, neg = 0;

        for (int i = 0; i < num; i++)
        {
            if (arr[i] >= 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }

        cout << endl;
        cout << "Positive :- " << pos << endl;
        cout << "Negative :- " << neg << endl;
    }

    void evenOdd()
    {
        int even = 0, odd = 0;

        for (int i = 0; i < num; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        cout << endl;
        cout << "Even :- " << even << endl;
        cout << "Odd :- " << odd << endl;
    }

    void minMax()
    {
        int min = arr[0];
        int max = arr[0];

        for (int i = 1; i < num; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }

            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        cout << endl;
        cout << "Min :- " << min << endl;
        cout << "Max :- " << max << endl;
    }

    void sumAverage()
    {
        int sum = 0;

        for (int i = 0; i < num; i++)
        {
            sum += arr[i];
        }

        float avg = (float)sum / num;

        cout << endl;
        cout << "Sum :- " << sum << endl;
        cout << "Average :- " << avg << endl;
    }

    void reverseArray()
    {
        int tempArr[20];

        for (int i = 0; i < num; i++)
        {
            tempArr[i] = arr[i];
        }

        for (int i = 0; i < num / 2; i++)
        {
            int temp = tempArr[i];
            tempArr[i] = tempArr[num - i - 1];
            tempArr[num - i - 1] = temp;
        }

        cout << endl;
        cout << "Reversed Array :- ";

        for (int i = 0; i < num; i++)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
    }

    void removeDuplicates()
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (arr[i] == arr[j])
                {
                    for (int k = j; k < num - 1; k++)
                    {
                        arr[k] = arr[k + 1];
                    }

                    num--;
                    j--;
                }
            }
        }

        cout << endl;
        cout << "Duplicates Removed" << endl;

        readarray();
    }

    void bubbleSort()
    {
        int tempArr[20];

        for (int i = 0; i < num; i++)
        {
            tempArr[i] = arr[i];
        }

        for (int i = 0; i < num - 1; i++)
        {
            for (int j = 0; j < num - i - 1; j++)
            {
                if (tempArr[j] > tempArr[j + 1])
                {
                    int temp = tempArr[j];
                    tempArr[j] = tempArr[j + 1];
                    tempArr[j + 1] = temp;
                }
            }
        }

        cout << endl;
        cout << "Sorted Array (Ascending) :- ";

        for (int i = 0; i < num; i++)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
        cout << "Sorted Array (Descending) :- ";

        for (int i = num - 1; i >= 0; i--)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
    }

    void insertionSort()
    {
        int tempArr[20];

        for (int i = 0; i < num; i++)
        {
            tempArr[i] = arr[i];
        }

        for (int i = 1; i < num; i++)
        {
            int key = tempArr[i];
            int j = i - 1;

            while (j >= 0 && tempArr[j] > key)
            {
                tempArr[j + 1] = tempArr[j];
                j--;
            }

            tempArr[j + 1] = key;
        }

        cout << endl;
        cout << "Insertion Ascending :- ";

        for (int i = 0; i < num; i++)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
        cout << "Insertion Descending :- ";

        for (int i = num - 1; i >= 0; i--)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
    }

    void selectionSort()
    {
        int tempArr[20];

        for (int i = 0; i < num; i++)
        {
            tempArr[i] = arr[i];
        }

        for (int i = 0; i < num - 1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < num; j++)
            {
                if (tempArr[j] < tempArr[minIndex])
                {
                    minIndex = j;
                }
            }

            // swap
            int temp = tempArr[i];
            tempArr[i] = tempArr[minIndex];
            tempArr[minIndex] = temp;
        }

        cout << endl;
        cout << "Selection Ascending :- ";

        for (int i = 0; i < num; i++)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
        cout << "Selection Descending :- ";

        for (int i = num - 1; i >= 0; i--)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    ArrayManager obj;
    int choice;

    while (true)
    {
        cout << endl;
        cout << "========= MENU =========" << endl;

        cout << "1. Create" << endl;
        cout << "2. Read" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Update" << endl;
        cout << "5. Positive/Negative" << endl;
        cout << "6. Even/Odd" << endl;
        cout << "7. Min-Max" << endl;
        cout << "8. Sum/Average" << endl;
        cout << "9. Reverse" << endl;
        cout << "10. Remove Duplicates" << endl;
        cout << "11. Left Rotate" << endl;
        cout << "12. Right Rotate" << endl;
        cout << "13. Leader Elements" << endl;
        cout << "14. Bubble Sort" << endl;
        cout << "15. Insertion Sort" << endl;
        cout << "16. selectio sort" << endl;
        cout << "0. Exit" << endl;

        cout << endl;
        cout << "Enter Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.creatarray();
            break;

        case 2:
            obj.readarray();
            break;

        case 3:
            obj.deletearray();
            break;

        case 4:
            obj.updatearray();
            break;

        case 5:
            obj.positiveNegative();
            break;

        case 6:
            obj.evenOdd();
            break;

        case 7:
            obj.minMax();
            break;

        case 8:
            obj.sumAverage();
            break;

        case 9:
            obj.reverseArray();
            break;

        case 10:
            obj.removeDuplicates();
            break;

        case 14:
            obj.bubbleSort();
            break;

        case 15:
            obj.insertionSort();
            break;
        case 16:

            obj.selectionSort();
            break;

        case 0:
            cout << endl;
            cout << "Exit Successfully...!!" << endl;
            return 0;

        default:
            cout << endl;
            cout << "Invalid Choice" << endl;
        }
    }
}