#include <iostream>
using namespace std;
void blackJack();

void blackJack() //2798
{
    int N, M;
    int numbers[100];
    int res = 0;
    int temp = 0;

    cin >> N >> M;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                temp = numbers[i] + numbers[j] + numbers[k];
                if (temp <= M && res < temp)
                    res = temp;
            }
        }
    }

    cout << res;
}

void blackJack2()
{
    int N, M;
    int numbers[100];
    int res = 0;
    int temp = 0;


    int mousePosX = 0;
    int mousePosY = 0;

    enum class eButtonState {   

    };
    eButtonState presentState; 

    if(mouseX < mDestRect.x && mousePosY <  mDestRect.x + mDestRect.w)
        qdjpqowdmjopqjwmf eqip,da mjwo (7คล)

}