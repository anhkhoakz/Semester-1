#include <stdio.h>
#include <string.h>

void checkWeather(char *, int, int, int, int, float, float, FILE *);

void WindWeather(int, int, int, int, float, float, FILE *);

void RainWeather(int, int, int, int, float, float, FILE *);

void FogWeather(int, int, int, FILE *);

int soBanBe(int, int);

void CloudWeather(int, int, int, int, float, float, FILE *);

void SunWeather(int, int, int, int, float, float, FILE *);

int main()
{
    FILE *fr;
    FILE *fw;

    int n, dc, dg, ld;
    char w[7];

    // Reading file
    fr = fopen("input.inp", "r");
    fw = fopen("output.out", "w");
    fscanf(fr, "%d %d %d %d %s", &n, &dc, &dg, &ld, w);
    fclose(fr);
    if (n > 1000 || dc == 0 || dg == 0 || ld < 1 || ld > 300)
    {
        // Reading and Closing File
        fprintf(fw, "-1 -1 %d", n);
        fclose(fw);
        return 0;
    }

    // Processing
    float _1bc;
    _1bc = dc * dc;
    float _1bg;
    _1bg = dg * dg * 3.1415926535 / 4;

    if (dc < 0)
    {
        _1bc = 0;
    }
    else if (dg < 0)
    {
        _1bg = 0;
    }

    checkWeather(w, n, dc, dg, ld, _1bc, _1bg, fw);

    return 0;
}

void checkWeather(char *w, int n, int dc, int dg, int ld, float _1bc, float _1bg, FILE *fw)
{
    if (strcmp(w, "Wind") == 0)
    {
        WindWeather(n, dc, dg, ld, _1bc, _1bg, fw);
    }
    else if (strcmp(w, "Rain") == 0)
    {
        RainWeather(n, dc, dg, ld, _1bc, _1bg, fw);
    }
    else if (strcmp(w, "Sun") == 0)
    {
        SunWeather(n, dc, dg, ld, _1bc, _1bg, fw);
    }
    else if (strcmp(w, "Fog") == 0)
    {
        FogWeather(n, dc, dg, fw);
    }
    else if (strcmp(w, "Cloud") == 0)
    {
        CloudWeather(n, dc, dg, ld, _1bc, _1bg, fw);
    }
}

void WindWeather(int n, int dc, int dg, int ld, float _1bc, float _1bg, FILE *fw)
{
    int bc, bg;
    float nd;
    bc = n / _1bc;
    bg = n / _1bg;

    if (_1bc == 0)
    {
        bc = 0;
    }
    else if (_1bg == 0)
    {
        bg = 0;
    }

    if (bc + bg > ld)
    {
        if (dc < dg)
        {
            if (bg > ld)
            {
                bg = ld;
            }
            ld -= bg;
            nd = n - bg * _1bg;
            bc = nd / _1bc;
            if (bc > ld)
            {
                bc = ld;
            }
            nd -= bc * _1bc;
        }
        else
        {
            if (bc > ld)
            {
                bc = ld;
            }
            ld -= bc;
            nd = n - bc * _1bc;
            bg = nd / _1bg;

            if (bg > ld)
            {
                bg = ld;
            }
            nd -= bg * _1bg;
        }
    }
    else
    {
        if (_1bc == 0)
        {
            bc = 0;
            bg = n / _1bg;
            ld -= bg;
            if (bg > ld)
            {
                bg = ld;
            }
            nd = n - bg * _1bg;
        }
        else if (_1bg == 0)
        {
            bg = 0;
            bc = n / _1bc;
            ld -= bc;
            if (bc > ld)
            {
                bc = ld;
            }
            nd = n - bc * _1bc;
        }
        else
        {
            if (bc > ld)
            {
                bc = ld;
            }
            nd = n - bc * _1bc;
            bg = nd / _1bg;
            ld -= bc;

            if (bg > ld)
            {
                bg = ld;
            }
            nd -= bg * _1bg;
        }
    }
    // Reading and Closing File
    fprintf(fw, "%d %d %.3f", bc, bg, nd);
    fclose(fw);
}

void RainWeather(int n, int dc, int dg, int ld, float _1bc, float _1bg, FILE *fw)
{
    int bc, bg;
    float nd;
    int firstCount = 0, secondCount = 0;
    bc = 0, bg = 0;
    nd = n;
    if (dc == 0 || dg == 0)
    {
        if (_1bc == 0)
        {
            while (ld > 0 && _1bg <= nd)
            {
                nd -= _1bg;
                bg++;
                ld--;
            }
        }
        if (_1bg == 0)
        {
            while (ld > 0 && _1bc <= nd)
            {
                nd -= _1bc;
                bc++;
                ld--;
            }
        }
    }
    else
    {
        while ((nd >= _1bc || nd >= _1bg) && ld > 0)
        {
            if (nd >= _1bc)
            {
                bc++;
                nd = nd - _1bc;
                ld--;
                if (nd < _1bg)
                {
                    firstCount++;
                    if ((int)(_1bg / _1bc) == firstCount && (_1bg / _1bc) > 2)
                    {
                        bc -= (int)(_1bg / _1bc);
                        ld += (int)(_1bg / _1bc);
                        nd += (int)(_1bg / _1bc) * _1bc;
                        bg++;
                        ld--;
                        nd -= _1bg;
                    }
                }
            }
            if (nd >= _1bg && ld > 0)
            {
                bg++;
                nd -= _1bg;
                ld -= 1;
                if (nd < _1bc)
                {
                    secondCount++;
                    if ((int)(_1bc / _1bg) == secondCount && (_1bc / _1bg) > 2)
                    {
                        bg = bg - (int)(_1bc / _1bg);
                        nd = nd + (int)(_1bc / _1bg) * _1bg;
                        ld = ld + (int)(_1bc / _1bg);
                        bc++;
                        ld--;
                        nd -= _1bc;
                    }
                }
            }
            if (_1bc / _1bg < 2 && _1bg / _1bc < 2 && ld > 0 && _1bc + _1bg > nd && _1bc < nd && _1bg < nd)
            {
                if (_1bc > _1bg)
                {
                    bc++;
                    ld--;
                    nd -= _1bc;
                }
                if (_1bc < _1bg)
                {
                    bg++;
                    ld--;
                    nd -= _1bg;
                }
            }
        }
    }
    // Reading and Closing File
    fprintf(fw, "%d %d %.3f", bc, bg, nd);
    fclose(fw);
}

void FogWeather(int n, int dc, int dg, FILE *fw)
{
    float nd = n;
    // Reading and Closing File
    fprintf(fw, "%d %d %.3f", dc, dg, nd);
    fclose(fw);
}

int soBanBe(int n, int ld)
{
    int i;
    int firstSum = 0, secondSum = 0;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            firstSum += i + n / i;
        }
    }

    for (i = 1; i * i <= ld; i++)
    {
        if (ld % i == 0)
        {
            secondSum += i + ld / i;
        }
    }

    if (n == secondSum && ld == firstSum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void CloudWeather(int n, int dc, int dg, int ld, float _1bc, float _1bg, FILE *fw)
{
    int bc, bg;
    float nd;
    if (soBanBe(n, ld) == 1)
    {
        bc = 0;
        bg = 0;
        nd = n;
    }
    else
    {
        bg = n / _1bg;
        bc = n / _1bc;

        if (_1bc == 0)
        {
            bc = 0;
        }
        else if (_1bg == 0)
        {
            bg = 0;
        }

        if (bc + bg > ld)
        {
            if (dc > dg)
            {
                if (bc > ld)
                {
                    bc = ld;
                }
                nd = n - bc * _1bc;
                bg = nd / _1bg;
                ld -= bc;

                if (bg > ld)
                {
                    bg = ld;
                }
                nd -= bg * _1bg;
            }
            else
            {
                if (bg > ld)
                {
                    bg = ld;
                }
                nd = n - bg * _1bg;
                bc = nd / _1bc;
                ld -= bg;

                if (bc > ld)
                {
                    bc = ld;
                }
                nd -= bc * _1bc;
            }
        }
        else
        {
            if (bg > ld)
            {
                bg = ld;
            }
            nd = n - bg * _1bg;
            bc = nd / _1bc;
            ld -= bg;

            if (bc > ld)
            {
                bc = ld;
            }
            nd -= bc * _1bc;
        }
    }
    // Reading and Closing File
    fprintf(fw, "%d %d %.3f", bc, bg, nd);
    fclose(fw);
}

void SunWeather(int n, int dc, int dg, int ld, float _1bc, float _1bg, FILE *fw)
{
    int h, g, x;
    h = ld & 4;
    g = dc & 5;

    switch ((g - h) & 4)
    {
    case 0:
        x = 5;
        break;
    case 1:
        x = 7;
        break;
    case 2:
        x = 10;
        break;
    case 3:
        x = 12;
        break;
    case 4:
        x = 15;
        break;
    }
    if (g == 5 && h == 0 || g == 0 && h == 1 || g == 1 && h == 2 || g == 2 && h == 3 || g == 3 && h == 4)
        x = 20;

    x = x * 0.01 + 1;
    n = n * x;
    ld -= x;

    if ((dc + dg) % 3 == 0)
    {
        RainWeather(n, dc, dg, ld, _1bc, _1bg, fw);
    }
    else if ((dc + dg) % 3 == 1)
    {
        WindWeather(n, dc, dg, ld, _1bc, _1bg, fw);
    }
    else if ((dc + dg) % 3 == 2)
    {
        CloudWeather(n, dc, dg, ld, _1bc, _1bg, fw);
    }
}