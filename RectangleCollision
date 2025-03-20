#include <stdio.h>

// 四角形の構造体
typedef struct {
    float x, y;     // 左上の座標
    float width, height; // 幅と高さ
} Rectangle;

// 四角形と四角形の当たり判定（AABB方式）
int checkRectangleCollision(Rectangle r1, Rectangle r2) {
    return (r1.x < r2.x + r2.width &&
            r1.x + r1.width > r2.x &&
            r1.y < r2.y + r2.height &&
            r1.y + r1.height > r2.y);
}

int main() {
    Rectangle r1 = {0, 0, 5, 5};
    Rectangle r2 = {3, 3, 5, 5};

    if (checkRectangleCollision(r1, r2))
        printf("四角形が衝突しています！\n");
    else
        printf("四角形は衝突していません。\n");

    return 0;
}
