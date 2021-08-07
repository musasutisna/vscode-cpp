#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window;

    if (!glfwInit()) {
        return -1;
    }

    window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

    if (!window) {
        glfwTerminate();

        return -1;
    }

    glfwMakeContextCurrent(window);

    bool toggle = false;

    while (!glfwWindowShouldClose(window)) {
        if (toggle) {
            glClearColor(1.0, 0, 0, 0);
        } else {
            glClearColor(0, 0.5, 0, 0);
        }

        glClear(GL_COLOR_BUFFER_BIT);

        // toggle = !toggle;

        glBegin(GL_TRIANGLES);

        glColor3f(5.0, 0, 0);
        glVertex3f(-0.6f, -0.4f, -0.f);
        glVertex3f(0.6f, -0.4f, 0.f);
        glVertex3f(0.f, 0.6f, 0.f);

        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}
