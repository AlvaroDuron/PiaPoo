#include "Estructura.h"

Estructura::Estructura() 
{
    glGenVertexArrays(1, &this->VAO);
    glGenBuffers(1, &this->VBO);

    glBindVertexArray(this->VAO);

    glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    // texture coord attribute
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
}

GLuint* Estructura::getVao() 
{
    return &this->VAO;
}

GLuint* Estructura::getVbo()
{
    return &this->VBO;
}

glm::vec3 Estructura::getPisoPosition(unsigned int index) 
{
    return this->pisoPositions[index];
}

glm::vec3 Estructura::getTechoPosition(unsigned int index)
{
    return this->techoPositions[index];
}

glm::vec3 Estructura::getParedPosition(unsigned int index)
{
    return this->paredPositions[index];
}

glm::vec3 Estructura::getParedInicialPosition(unsigned int index)
{
    return this->paredInicialPositions[index];
}

glm::vec3 Estructura::getParedFinalPosition(unsigned int index)
{
    return this->paredFinalPositions[index];
}

glm::vec3 Estructura::getParedViasInicialPosition(unsigned int index)
{
    return this->paredViasInicialPositions[index];
}

glm::vec3 Estructura::getParedViasFinalPosition(unsigned int index)
{
    return this->paredViasFinalPositions[index];
}

glm::vec3 Estructura::getViasPosition(unsigned int index)
{
    return this->viasPositions[index];
}