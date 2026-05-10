#include <stdio.h>

// 三角形の構造体
typedef struct {
    float x1, y1;
    float x2, y2;
    float x3, y3;
} Triangle;

// 三角形の面積を求める関数
float area(float x1, float y1, float x2, float y2, float x3, float y3) {
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

// 点が三角形の内部にあるか判定
int checkPointInTriangle(Triangle t, float px, float py) {
    float A = area(t.x1, t.y1, t.x2, t.y2, t.x3, t.y3);
    float A1 = area(px, py, t.x2, t.y2, t.x3, t.y3);
    float A2 = area(t.x1, t.y1, px, py, t.x3, t.y3);
    float A3 = area(t.x1, t.y1, t.x2, t.y2, px, py);

    return (A == (A1 + A2 + A3));
}

int main() {
    Triangle t = {0, 0, 5, 0, 2.5, 5};
    float px = 2.5, py = 2;

    if (checkPointInTriangle(t, px, py))
        printf("点は三角形の内部にあります！\n");
    else
        printf("点は三角形の外部です。\n");

    return 0;
}
