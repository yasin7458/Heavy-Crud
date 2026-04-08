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
        cout << "Enter Element Position To Update:- ";
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
        int pos = 0;
        int neg = 0;

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
        int even = 0;
        int odd = 0;

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

    void leftRotate()
    {
        int tempArr[20];

        for (int i = 0; i < num; i++)
        {
            tempArr[i] = arr[i];
        }

        int first = tempArr[0];

        for (int i = 0; i < num - 1; i++)
        {
            tempArr[i] = tempArr[i + 1];
        }

        tempArr[num - 1] = first;

        cout << endl;
        cout << "Left Rotated :- ";

        for (int i = 0; i < num; i++)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
    }

    void rightRotate()
    {
        int tempArr[20];

        for (int i = 0; i < num; i++)
        {
            tempArr[i] = arr[i];
        }

        int last = tempArr[num - 1];

        for (int i = num - 1; i > 0; i--)
        {
            tempArr[i] = tempArr[i - 1];
        }

        tempArr[0] = last;

        cout << endl;
        cout << "Right Rotated :- ";

        for (int i = 0; i < num; i++)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
    }

    void leaderElements()
    {
        cout << endl;
        cout << "Leader Elements :- ";

        for (int i = 0; i < num; i++)
        {
            bool isLeader = true;

            for (int j = i + 1; j < num; j++)
            {
                if (arr[i] < arr[j])
                {
                    isLeader = false;
                    break;
                }
            }

            if (isLeader)
            {
                cout << arr[i] << " ";
            }
        }

        cout << endl;
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
        cout << "Sorted Array :- ";

        for (int i = 0; i < num; i++)
        {
            cout << tempArr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    ArrayManager obj;

    while (true)
    {
        cout << endl;
        cout << "========= MENU =========" << endl;

        cout << "1.Create" << endl;
        cout << "2.Read" << endl;
        cout << "3.Delete" << endl;
        cout << "4.Update" << endl;
        cout << "5.Positive/Negative" << endl;
        cout << "6.Even/Odd" << endl;
        cout << "7.Min-Max" << endl;
        cout << "8.Sum/Average" << endl;
        cout << "9.Reverse" << endl;
        cout << "10.Remove Duplicates" << endl;
        cout << "11.Left Rotate" << endl;
        cout << "12.Right Rotate" << endl;
        cout << "13.Leader Elements" << endl;
        cout << "14.Bubble Sort" << endl;
        cout << "0.Exit" << endl;

        int choice;

        cout << endl;
        cout << "Enter Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            obj.creatarray();
            break;
        }

        case 2:
        {
            obj.readarray();
            break;
        }

        case 3:
        {
            obj.deletearray();
            break;
        }

        case 4:
        {
            obj.updatearray();
            break;
        }

        case 5:
        {
            obj.positiveNegative();
            break;
        }

        case 6:
        {
            obj.evenOdd();
            break;
        }

        case 7:
        {
            obj.minMax();
            break;
        }

        case 8:
        {
            obj.sumAverage();
            break;
        }

        case 9:
        {
            obj.reverseArray();
            break;
        }

        case 10:
        {
            obj.removeDuplicates();
            break;
        }

        case 11:
        {
            obj.leftRotate();
            break;
        }

        case 12:
        {
            obj.rightRotate();
            break;
        }

        case 13:
        {
            obj.leaderElements();
            break;
        }

        case 14:
        {
            obj.bubbleSort();
            break;
        }

        case 0:
        {
            cout << "Exit Successfully...!!";
            return 0;
        }

        default:
        {
            cout << endl;
            cout << "Invalid Choice" << endl;
        }
        }
    }
}