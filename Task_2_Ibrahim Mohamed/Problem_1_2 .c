#include <stdio.h>

// دالة للتحقق من قابلية القسمة
const char* checkDivisibility(int a, int b) {
    // التحقق من القسمة على صفر
    if (b == 0) {
        return "لا يمكن القسمة على صفر";
    }
    // في حالة أن a يقبل القسمة على b
    else if (a % b == 0) {
        static char result[50];
        sprintf(result, "%d قابل للقسمة على %d", a, b);
        return result;
    }
    // في حالة أن a لا يقبل القسمة على b
    else {
        static char result[50];
        sprintf(result, "%d غير قابل للقسمة على %d", a, b);
        return result;
    }
}

int main() {
    int num1, num2;

    // إدخال القيم من المستخدم
    printf("أدخل رقمين صحيحين: ");
    scanf("%d %d", &num1, &num2);

    // استدعاء الدالة وطباعة النتيجة
    const char* result = checkDivisibility(num1, num2);
    printf("%s\n", result);

    return 0;
}
