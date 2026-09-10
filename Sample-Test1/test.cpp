#include "pch.h"

#include "h.h" // Предполагается, что ваш класс находится в этом файле

// Тест на корректное создание объекта и вычисление площади
TEST(TriangleTest, ValidConstructorAndArea) {
    Triangle t(5.0, 4.0);
    EXPECT_DOUBLE_EQ(t.getS(), 5.0);
    EXPECT_DOUBLE_EQ(t.getH(), 4.0);
    EXPECT_DOUBLE_EQ(t.area(), 10.0);
}

// Тест сеттеров с корректными значениями
TEST(TriangleTest, ValidSetters) {
    Triangle t(1.0, 1.0);

    t.setS(10.0);
    EXPECT_DOUBLE_EQ(t.getS(), 10.0);

    t.setH(3.0);
    EXPECT_DOUBLE_EQ(t.getH(), 3.0);

    EXPECT_DOUBLE_EQ(t.area(), 15.0);
}

// Тест на выброс исключения при некорректных значениях в конструкторе
TEST(TriangleTest, InvalidConstructorArgs) {
    // Основание <= 0
    EXPECT_THROW(Triangle t(0, 5.0), std::invalid_argument);
    EXPECT_THROW(Triangle t(-3.0, 5.0), std::invalid_argument);

    // Высота <= 0
    EXPECT_THROW(Triangle t(5.0, 0), std::invalid_argument);
    EXPECT_THROW(Triangle t(5.0, -1.0), std::invalid_argument);
}

// Тест на выброс исключения в сеттерах
TEST(TriangleTest, InvalidSetterArgs) {
    Triangle t(5.0, 4.0);

    // Проверка setS
    EXPECT_THROW(t.setS(0), std::invalid_argument);
    EXPECT_THROW(t.setS(-2.5), std::invalid_argument);

    // Проверка setH
    EXPECT_THROW(t.setH(0), std::invalid_argument);
    EXPECT_THROW(t.setH(-10.0), std::invalid_argument);

    // Значения не должны измениться после неудачных попыток
    EXPECT_DOUBLE_EQ(t.getS(), 5.0);
    EXPECT_DOUBLE_EQ(t.getH(), 4.0);
}