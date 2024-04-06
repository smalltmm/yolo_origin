#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>

int main() {
    std::string modelPath = "/home/zxw/Desktop/yolov5-face-rm/onnx_model/model001.onnx"; // 替换为你的 ONNX 模型路径


    // 加载 ONNX 模型
    cv::dnn::Net net = cv::dnn::readNetFromONNX(modelPath);

    

    // 图像预处理
    cv::Mat blob;
    cv::dnn::blobFromImage(image, blob, 1.0, cv::Size(224, 224), cv::Scalar(104, 117, 123), true, false);

    // 设置模型输入
    net.setInput(blob);

    // 推理
    cv::Mat output = net.forward();

    // 处理输出...
    std::cout << "推理完成" << std::endl;

    return 0;
}
