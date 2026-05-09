#include <stdio.h>
#include <math.h>

// 円の構造体
typedef struct {
    float x, y;  // 中心座標
    float radius; // 半径
} Circle;

// 円と円の当たり判定
int checkCircleCollision(Circle c1, Circle c2) {
    float dx = c1.x - c2.x;
    float dy = c1.y - c2.y;
    float distance = sqrt(dx * dx + dy * dy);
    return distance <= (c1.radius + c2.radius);
}

int main() {
    Circle c1 = {0, 0, 5};
    Circle c2 = {4, 0, 3};

    if (checkCircleCollision(c1, c2))
        printf("円が衝突しています！\n");
    else
        printf("円は衝突していません。\n");

    return 0;
}
