#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>

// 测试整数运算速度
void testIntegerOperations() {
    using namespace std::chrono;
    
    auto start = high_resolution_clock::now();
    auto end = start + seconds(1);
    
    volatile int64_t counter = 0; // 使用volatile防止编译器优化
    
    // 运行1秒钟
    while (high_resolution_clock::now() < end) {
        // 执行一些简单的整数运算
        counter += 1;
        counter *= 1;
        counter -= 0;
        counter = counter + 1;
    }
    
    std::cout << "整数运算次数: " << counter << " 次/秒" << std::endl;
}

// 测试浮点运算速度
void testFloatOperations() {
    using namespace std::chrono;
    
    auto start = high_resolution_clock::now();
    auto end = start + seconds(1);
    
    volatile double counter = 0.0;
    
    while (high_resolution_clock::now() < end) {
        counter += 1.0;
        counter *= 1.0;
        counter /= 1.0;
        counter = counter + 1.0;
    }
    
    std::cout << "浮点运算次数: " << static_cast<int64_t>(counter) << " 次/秒" << std::endl;
}

// 更精确的测试（避免编译器优化）
void testPreciseOperations() {
    using namespace std::chrono;
    
    auto start = high_resolution_clock::now();
    auto end = start + seconds(1);
    
    int64_t counter = 0;
    int64_t dummy = 0; // 用于存储结果，防止优化
    
    while (high_resolution_clock::now() < end) {
        // 执行一些不会被编译器优化的运算
        for (int i = 0; i < 100; i++) {
            counter += i;
            counter *= 1;
        }
        dummy = counter; // 确保结果被使用
    }
    
    // 防止编译器优化掉dummy
    if (dummy == 0) {
        std::cout << "整数运算次数: " << counter << " 次/秒" << std::endl;
    } else {
        std::cout << "整数运算次数: " << counter << " 次/秒" << std::endl;
    }
}

// 使用atomic进行线程安全的测试
void testAtomicOperations() {
    using namespace std::chrono;
    
    auto start = high_resolution_clock::now();
    auto end = start + seconds(1);
    
    std::atomic<int64_t> counter(0);
    
    while (high_resolution_clock::now() < end) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
    
    std::cout << "原子操作次数: " << counter.load() << " 次/秒" << std::endl;
}

// 综合性能测试
void comprehensiveTest() {
    std::cout << "=== 电脑运算速度测试 ===" << std::endl;
    std::cout << "测试时间: 1秒" << std::endl;
    std::cout << "------------------------" << std::endl;
    
    testIntegerOperations();
    testFloatOperations();
    testPreciseOperations();
    testAtomicOperations();
    
    std::cout << "=========================" << std::endl;
}

int main() {
    comprehensiveTest();
    
    // 可选：多次测试取平均值
    std::cout << "\n进行3次测试取平均值..." << std::endl;
    
    for (int i = 0; i < 3; i++) {
        std::cout << "第 " << i + 1 << " 次测试: ";
        testPreciseOperations();
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 短暂休息
    }
    
    return 0;
}