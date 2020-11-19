#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Estructura
{
private:
	const float vertices[180] = {
		-1.0f, -1.0f,  1.0f,  0.0f, 0.0f,
		 1.0f, -1.0f,  1.0f,  1.0f, 0.0f,
		 1.0f,  1.0f,  1.0f,  1.0f, 1.0f,
		 1.0f,  1.0f,  1.0f,  1.0f, 1.0f,
		-1.0f,  1.0f,  1.0f,  0.0f, 1.0f,
		-1.0f, -1.0f,  1.0f,  0.0f, 0.0f,

	};
	glm::vec3 pisoPositions[72] = {
	   glm::vec3(0.0f,  0.0f,  0.0f),
	   glm::vec3(2.0f,  0.0f,  0.0f),
	   glm::vec3(4.0f,  0.0f,  0.0f),

	   glm::vec3(0.0f,  0.0f,  -2.0f),
	   glm::vec3(2.0f,  0.0f,  -2.0f),
	   glm::vec3(4.0f,  0.0f,  -2.0f),

	   glm::vec3(0.0f,  0.0f,  -4.0f),
	   glm::vec3(2.0f,  0.0f,  -4.0f),
	   glm::vec3(4.0f,  0.0f,  -4.0f),

	   glm::vec3(0.0f,  0.0f,  -6.0f),
	   glm::vec3(2.0f,  0.0f,  -6.0f),
	   glm::vec3(4.0f,  0.0f,  -6.0f),

	   glm::vec3(0.0f,  0.0f,  -8.0f),
	   glm::vec3(2.0f,  0.0f,  -8.0f),
	   glm::vec3(4.0f,  0.0f,  -8.0f),

	   glm::vec3(0.0f,  0.0f,  -10.0f),
	   glm::vec3(2.0f,  0.0f,  -10.0f),
	   glm::vec3(4.0f,  0.0f,  -10.0f),

	   glm::vec3(0.0f,  0.0f,  -12.0f),
	   glm::vec3(2.0f,  0.0f,  -12.0f),
	   glm::vec3(4.0f,  0.0f,  -12.0f),

	   glm::vec3(0.0f,  0.0f,  -14.0f),
	   glm::vec3(2.0f,  0.0f,  -14.0f),
	   glm::vec3(4.0f,  0.0f,  -14.0f),

	   glm::vec3(0.0f,  0.0f,  -16.0f),
	   glm::vec3(2.0f,  0.0f,  -16.0f),
	   glm::vec3(4.0f,  0.0f,  -16.0f),

	   glm::vec3(0.0f,  0.0f,  -18.0f),
	   glm::vec3(2.0f,  0.0f,  -18.0f),
	   glm::vec3(4.0f,  0.0f,  -18.0f),

	   glm::vec3(0.0f,  0.0f,  -20.0f),
	   glm::vec3(2.0f,  0.0f,  -20.0f),
	   glm::vec3(4.0f,  0.0f,  -20.0f),

	   glm::vec3(0.0f,  0.0f,  -22.0f),
	   glm::vec3(2.0f,  0.0f,  -22.0f),
	   glm::vec3(4.0f,  0.0f,  -22.0f),

	   //------------------------------
	   glm::vec3(0.0f,  0.0f, -24.0f),
	   glm::vec3(2.0f,  0.0f, -24.0f),
	   glm::vec3(4.0f,  0.0f, -24.0f),

	   glm::vec3(0.0f,  0.0f,  -26.0f),
	   glm::vec3(2.0f,  0.0f,  -26.0f),
	   glm::vec3(4.0f,  0.0f,  -26.0f),

	   glm::vec3(0.0f,  0.0f,  -28.0f),
	   glm::vec3(2.0f,  0.0f,  -28.0f),
	   glm::vec3(4.0f,  0.0f,  -28.0f),

	   glm::vec3(0.0f,  0.0f,  -30.0f),
	   glm::vec3(2.0f,  0.0f,  -30.0f),
	   glm::vec3(4.0f,  0.0f,  -30.0f),

	   glm::vec3(0.0f,  0.0f,  -32.0f),
	   glm::vec3(2.0f,  0.0f,  -32.0f),
	   glm::vec3(4.0f,  0.0f,  -32.0f),

	   glm::vec3(0.0f,  0.0f,  -34.0f),
	   glm::vec3(2.0f,  0.0f,  -34.0f),
	   glm::vec3(4.0f,  0.0f,  -34.0f),

	   glm::vec3(0.0f,  0.0f,  -36.0f),
	   glm::vec3(2.0f,  0.0f,  -36.0f),
	   glm::vec3(4.0f,  0.0f,  -36.0f),

	   glm::vec3(0.0f,  0.0f,  -38.0f),
	   glm::vec3(2.0f,  0.0f,  -38.0f),
	   glm::vec3(4.0f,  0.0f,  -38.0f),

	   glm::vec3(0.0f,  0.0f,  -40.0f),
	   glm::vec3(2.0f,  0.0f,  -40.0f),
	   glm::vec3(4.0f,  0.0f,  -40.0f),

	   glm::vec3(0.0f,  0.0f,  -42.0f),
	   glm::vec3(2.0f,  0.0f,  -42.0f),
	   glm::vec3(4.0f,  0.0f,  -42.0f),

	   glm::vec3(0.0f,  0.0f,  -44.0f),
	   glm::vec3(2.0f,  0.0f,  -44.0f),
	   glm::vec3(4.0f,  0.0f,  -44.0f),

	   glm::vec3(0.0f,  0.0f,  -46.0f),
	   glm::vec3(2.0f,  0.0f,  -46.0f),
	   glm::vec3(4.0f,  0.0f,  -46.0f),
	};

	glm::vec3 techoPositions[148] = {
	   glm::vec3(0.0f,  4.0f,  0.0f),
	   glm::vec3(2.0f,  4.0f,  0.0f),
	   glm::vec3(4.0f,  4.0f,  0.0f),

	   glm::vec3(0.0f,  4.0f,  -2.0f),
	   glm::vec3(2.0f,  4.0f,  -2.0f),
	   glm::vec3(4.0f,  4.0f,  -2.0f),

	   glm::vec3(0.0f,  4.0f,  -4.0f),
	   glm::vec3(2.0f,  4.0f,  -4.0f),
	   glm::vec3(4.0f,  4.0f,  -4.0f),

	   glm::vec3(0.0f,  4.0f,  -6.0f),
	   glm::vec3(2.0f,  4.0f,  -6.0f),
	   glm::vec3(4.0f,  4.0f,  -6.0f),

	   glm::vec3(0.0f,  4.0f,  -8.0f),
	   glm::vec3(2.0f,  4.0f,  -8.0f),
	   glm::vec3(4.0f,  4.0f,  -8.0f),

	   glm::vec3(0.0f,  4.0f,  -10.0f),
	   glm::vec3(2.0f,  4.0f,  -10.0f),
	   glm::vec3(4.0f,  4.0f,  -10.0f),

	   glm::vec3(0.0f,  4.0f,  -12.0f),
	   glm::vec3(2.0f,  4.0f,  -12.0f),
	   glm::vec3(4.0f,  4.0f,  -12.0f),

	   glm::vec3(0.0f,  4.0f,  -14.0f),
	   glm::vec3(2.0f,  4.0f,  -14.0f),
	   glm::vec3(4.0f,  4.0f,  -14.0f),

	   glm::vec3(0.0f,  4.0f,  -16.0f),
	   glm::vec3(2.0f,  4.0f,  -16.0f),
	   glm::vec3(4.0f,  4.0f,  -16.0f),

	   glm::vec3(0.0f,  4.0f,  -18.0f),
	   glm::vec3(2.0f,  4.0f,  -18.0f),
	   glm::vec3(4.0f,  4.0f,  -18.0f),

	   glm::vec3(0.0f,  4.0f,  -20.0f),
	   glm::vec3(2.0f,  4.0f,  -20.0f),
	   glm::vec3(4.0f,  4.0f,  -20.0f),

	   glm::vec3(0.0f,  4.0f,  -22.0f),
	   glm::vec3(2.0f,  4.0f,  -22.0f),
	   glm::vec3(4.0f,  4.0f,  -22.0f),

	   glm::vec3(0.0f,  4.0f, -24.0f),
	   glm::vec3(2.0f,  4.0f, -24.0f),
	   glm::vec3(4.0f,  4.0f, -24.0f),

	   glm::vec3(0.0f,  4.0f,  -26.0f),
	   glm::vec3(2.0f,  4.0f,  -26.0f),
	   glm::vec3(4.0f,  4.0f,  -26.0f),

	   glm::vec3(0.0f,  4.0f,  -28.0f),
	   glm::vec3(2.0f,  4.0f,  -28.0f),
	   glm::vec3(4.0f,  4.0f,  -28.0f),

	   glm::vec3(0.0f,  4.0f,  -30.0f),
	   glm::vec3(2.0f,  4.0f,  -30.0f),
	   glm::vec3(4.0f,  4.0f,  -30.0f),

	   glm::vec3(0.0f,  4.0f,  -32.0f),
	   glm::vec3(2.0f,  4.0f,  -32.0f),
	   glm::vec3(4.0f,  4.0f,  -32.0f),

	   glm::vec3(0.0f,  4.0f,  -34.0f),
	   glm::vec3(2.0f,  4.0f,  -34.0f),
	   glm::vec3(4.0f,  4.0f,  -34.0f),

	   glm::vec3(0.0f,  4.0f,  -36.0f),
	   glm::vec3(2.0f,  4.0f,  -36.0f),
	   glm::vec3(4.0f,  4.0f,  -36.0f),

	   glm::vec3(0.0f,  4.0f,  -38.0f),
	   glm::vec3(2.0f,  4.0f,  -38.0f),
	   glm::vec3(4.0f,  4.0f,  -38.0f),

	   glm::vec3(0.0f,  4.0f,  -40.0f),
	   glm::vec3(2.0f,  4.0f,  -40.0f),
	   glm::vec3(4.0f,  4.0f,  -40.0f),

	   glm::vec3(0.0f,  4.0f,  -42.0f),
	   glm::vec3(2.0f,  4.0f,  -42.0f),
	   glm::vec3(4.0f,  4.0f,  -42.0f),

	   glm::vec3(0.0f,  4.0f,  -44.0f),
	   glm::vec3(2.0f,  4.0f,  -44.0f),
	   glm::vec3(4.0f,  4.0f,  -44.0f),

	   glm::vec3(0.0f,  4.0f,  -46.0f),
	   glm::vec3(2.0f,  4.0f,  -46.0f),
	   glm::vec3(4.0f,  4.0f,  -46.0f),

	   //-----------------------------------

	   glm::vec3(6.0f,  4.0f,  0.0f),
	   glm::vec3(8.0f,  4.0f,  0.0f),
	   glm::vec3(10.0f,  4.0f,  0.0f),

	   glm::vec3(6.0f,  4.0f,  -2.0f),
	   glm::vec3(8.0f,  4.0f,  -2.0f),
	   glm::vec3(10.0f,  4.0f,  -2.0f),

	   glm::vec3(6.0f,  4.0f,  -4.0f),
	   glm::vec3(8.0f,  4.0f,  -4.0f),
	   glm::vec3(10.0f,  4.0f,  -4.0f),

	   glm::vec3(6.0f,  4.0f,  -6.0f),
	   glm::vec3(8.0f,  4.0f,  -6.0f),
	   glm::vec3(10.0f,  4.0f,  -6.0f),

	   glm::vec3(6.0f,  4.0f,  -8.0f),
	   glm::vec3(8.0f,  4.0f,  -8.0f),
	   glm::vec3(10.0f,  4.0f,  -8.0f),

	   glm::vec3(6.0f,  4.0f,  -10.0f),
	   glm::vec3(8.0f,  4.0f,  -10.0f),
	   glm::vec3(10.0f,  4.0f,  -10.0f),

	   glm::vec3(6.0f,  4.0f,  -12.0f),
	   glm::vec3(8.0f,  4.0f,  -12.0f),
	   glm::vec3(10.0f,  4.0f,  -12.0f),

	   glm::vec3(6.0f,  4.0f,  -14.0f),
	   glm::vec3(8.0f,  4.0f,  -14.0f),
	   glm::vec3(10.0f,  4.0f,  -14.0f),

	   glm::vec3(6.0f,  4.0f,  -16.0f),
	   glm::vec3(8.0f,  4.0f,  -16.0f),
	   glm::vec3(10.0f,  4.0f,  -16.0f),

	   glm::vec3(6.0f,  4.0f,  -18.0f),
	   glm::vec3(8.0f,  4.0f,  -18.0f),
	   glm::vec3(10.0f,  4.0f,  -18.0f),

	   glm::vec3(6.0f,  4.0f,  -20.0f),
	   glm::vec3(8.0f,  4.0f,  -20.0f),
	   glm::vec3(10.0f,  4.0f,  -20.0f),

	   glm::vec3(6.0f,  4.0f,  -22.0f),
	   glm::vec3(8.0f,  4.0f,  -22.0f),
	   glm::vec3(10.0f,  4.0f,  -22.0f),

	   glm::vec3(6.0f,  4.0f, -24.0f),
	   glm::vec3(8.0f,  4.0f, -24.0f),
	   glm::vec3(10.0f,  4.0f, -24.0f),

	   glm::vec3(6.0f,  4.0f,  -26.0f),
	   glm::vec3(8.0f,  4.0f,  -26.0f),
	   glm::vec3(10.0f,  4.0f,  -26.0f),

	   glm::vec3(6.0f,  4.0f,  -28.0f),
	   glm::vec3(8.0f,  4.0f,  -28.0f),
	   glm::vec3(10.0f,  4.0f,  -28.0f),

	   glm::vec3(6.0f,  4.0f,  -30.0f),
	   glm::vec3(8.0f,  4.0f,  -30.0f),
	   glm::vec3(10.0f,  4.0f,  -30.0f),

	   glm::vec3(6.0f,  4.0f,  -32.0f),
	   glm::vec3(8.0f,  4.0f,  -32.0f),
	   glm::vec3(10.0f,  4.0f,  -32.0f),

	   glm::vec3(6.0f,  4.0f,  -34.0f),
	   glm::vec3(8.0f,  4.0f,  -34.0f),
	   glm::vec3(10.0f,  4.0f,  -34.0f),

	   glm::vec3(6.0f,  4.0f,  -36.0f),
	   glm::vec3(8.0f,  4.0f,  -36.0f),
	   glm::vec3(10.0f,  4.0f,  -36.0f),

	   glm::vec3(6.0f,  4.0f,  -38.0f),
	   glm::vec3(8.0f,  4.0f,  -38.0f),
	   glm::vec3(10.0f,  4.0f,  -38.0f),

	   glm::vec3(6.0f,  4.0f,  -40.0f),
	   glm::vec3(8.0f,  4.0f,  -40.0f),
	   glm::vec3(10.0f,  4.0f,  -40.0f),

	   glm::vec3(6.0f,  4.0f,  -42.0f),
	   glm::vec3(8.0f,  4.0f,  -42.0f),
	   glm::vec3(10.0f,  4.0f,  -42.0f),

	   glm::vec3(6.0f,  4.0f,  -44.0f),
	   glm::vec3(8.0f,  4.0f,  -44.0f),
	   glm::vec3(10.0f,  4.0f,  -44.0f),

	   glm::vec3(6.0f,  4.0f,  -46.0f),
	   glm::vec3(8.0f,  4.0f,  -46.0f),
	   glm::vec3(10.0f,  4.0f,  -46.0f),
	};

	glm::vec3 paredPositions[48] = {
	   glm::vec3(0.0f,  2.0f,  0.0f),
	   glm::vec3(0.0f,  4.0f,  0.0f),

	   glm::vec3(0.0f,  2.0f,  -2.0f),
	   glm::vec3(0.0f,  4.0f,  -2.0f),

	   glm::vec3(0.0f,  2.0f,  -4.0f),
	   glm::vec3(0.0f,  4.0f,  -4.0f),

	   glm::vec3(0.0f,  2.0f,  -6.0f),
	   glm::vec3(0.0f,  4.0f,  -6.0f),

	   glm::vec3(0.0f,  2.0f,  -8.0f),
	   glm::vec3(0.0f,  4.0f,  -8.0f),

	   glm::vec3(0.0f,  2.0f,  -10.0f),
	   glm::vec3(0.0f,  4.0f,  -10.0f),

	   glm::vec3(0.0f,  2.0f,  -12.0f),
	   glm::vec3(0.0f,  4.0f,  -12.0f),

	   glm::vec3(0.0f,  2.0f,  -14.0f),
	   glm::vec3(0.0f,  4.0f,  -14.0f),

	   glm::vec3(0.0f,  2.0f,  -16.0f),
	   glm::vec3(0.0f,  4.0f,  -16.0f),

	   glm::vec3(0.0f,  2.0f,  -18.0f),
	   glm::vec3(0.0f,  4.0f,  -18.0f),

	   glm::vec3(0.0f,  2.0f,  -20.0f),
	   glm::vec3(0.0f,  4.0f,  -20.0f),

	   glm::vec3(0.0f,  2.0f,  -22.0f),
	   glm::vec3(0.0f,  4.0f,  -22.0f),

	   glm::vec3(0.0f,  2.0f,  -24.0f),
	   glm::vec3(0.0f,  4.0f,  -24.0f),

	   glm::vec3(0.0f,  2.0f,  -26.0f),
	   glm::vec3(0.0f,  4.0f,  -26.0f),

	   glm::vec3(0.0f,  2.0f,  -28.0f),
	   glm::vec3(0.0f,  4.0f,  -28.0f),

	   glm::vec3(0.0f,  2.0f,  -30.0f),
	   glm::vec3(0.0f,  4.0f,  -30.0f),

	   glm::vec3(0.0f,  2.0f,  -32.0f),
	   glm::vec3(0.0f,  4.0f,  -32.0f),

	   glm::vec3(0.0f,  2.0f,  -34.0f),
	   glm::vec3(0.0f,  4.0f,  -34.0f),

	   glm::vec3(0.0f,  2.0f,  -36.0f),
	   glm::vec3(0.0f,  4.0f,  -36.0f),

	   glm::vec3(0.0f,  2.0f,  -38.0f),
	   glm::vec3(0.0f,  4.0f,  -38.0f),

	   glm::vec3(0.0f,  2.0f,  -40.0f),
	   glm::vec3(0.0f,  4.0f,  -40.0f),

	   glm::vec3(0.0f,  2.0f,  -42.0f),
	   glm::vec3(0.0f,  4.0f,  -42.0f),

	   glm::vec3(0.0f,  2.0f,  -44.0f),
	   glm::vec3(0.0f,  4.0f,  -44.0f),

	   glm::vec3(0.0f,  2.0f,  -46.0f),
	   glm::vec3(0.0f,  4.0f,  -46.0f),
	};

	glm::vec3 viasPositions[72] = {
	   glm::vec3(6.0f,  -2.0f,  0.0f),
	   glm::vec3(8.0f,  -2.0f,  0.0f),
	   glm::vec3(10.0f, -2.0f,  0.0f),

	   glm::vec3(6.0f,  -2.0f,  -2.0f),
	   glm::vec3(8.0f,  -2.0f,  -2.0f),
	   glm::vec3(10.0f, -2.0f,  -2.0f),

	   glm::vec3(6.0f,  -2.0f,  -4.0f),
	   glm::vec3(8.0f,  -2.0f,  -4.0f),
	   glm::vec3(10.0f, -2.0f,  -4.0f),

		glm::vec3(6.0f,  -2.0f,  -6.0f),
	   glm::vec3(8.0f,  -2.0f,  -6.0f),
	   glm::vec3(10.0f, -2.0f,  -6.0f),

		glm::vec3(6.0f,  -2.0f,  -8.0f),
	   glm::vec3(8.0f,  -2.0f,  -8.0f),
	   glm::vec3(10.0f, -2.0f,  -8.0f),

		glm::vec3(6.0f,  -2.0f,  -10.0f),
	   glm::vec3(8.0f,  -2.0f,  -10.0f),
	   glm::vec3(10.0f, -2.0f,  -10.0f),

		glm::vec3(6.0f,  -2.0f,  -12.0f),
	   glm::vec3(8.0f,  -2.0f,  -12.0f),
	   glm::vec3(10.0f, -2.0f,  -12.0f),

		glm::vec3(6.0f,  -2.0f,  -14.0f),
	   glm::vec3(8.0f,  -2.0f,  -14.0f),
	   glm::vec3(10.0f, -2.0f,  -14.0f),

		glm::vec3(6.0f,  -2.0f,  -16.0f),
	   glm::vec3(8.0f,  -2.0f,  -16.0f),
	   glm::vec3(10.0f, -2.0f,  -16.0f),

		glm::vec3(6.0f,  -2.0f,  -18.0f),
	   glm::vec3(8.0f,  -2.0f,  -18.0f),
	   glm::vec3(10.0f, -2.0f,  -18.0f),

		glm::vec3(6.0f,  -2.0f,  -20.0f),
	   glm::vec3(8.0f,  -2.0f,  -20.0f),
	   glm::vec3(10.0f, -2.0f,  -20.0f),

	   glm::vec3(6.0f,  -2.0f,  -22.0f),
	   glm::vec3(8.0f,  -2.0f,  -22.0f),
	   glm::vec3(10.0f, -2.0f,  -22.0f),

	   //------------------------------
		glm::vec3(6.0f,  -2.0f,  -24.0f),
	   glm::vec3(8.0f,  -2.0f,  -24.0f),
	   glm::vec3(10.0f, -2.0f,  -24.0f),

		glm::vec3(6.0f,  -2.0f,  -26.0f),
	   glm::vec3(8.0f,  -2.0f,  -26.0f),
	   glm::vec3(10.0f, -2.0f,  -26.0f),

		glm::vec3(6.0f,  -2.0f,  -28.0f),
	   glm::vec3(8.0f,  -2.0f,  -28.0f),
	   glm::vec3(10.0f, -2.0f,  -28.0f),

		glm::vec3(6.0f,  -2.0f,  -30.0f),
	   glm::vec3(8.0f,  -2.0f,  -30.0f),
	   glm::vec3(10.0f, -2.0f,  -30.0f),

		glm::vec3(6.0f,  -2.0f,  -32.0f),
	   glm::vec3(8.0f,  -2.0f,  -32.0f),
	   glm::vec3(10.0f, -2.0f,  -32.0f),

	   glm::vec3(6.0f,  -2.0f,  -34.0f),
	   glm::vec3(8.0f,  -2.0f,  -34.0f),
	   glm::vec3(10.0f, -2.0f,  -34.0f),

		glm::vec3(6.0f,  -2.0f,  -36.0f),
	   glm::vec3(8.0f,  -2.0f,  -36.0f),
	   glm::vec3(10.0f, -2.0f,  -36.0f),

		glm::vec3(6.0f,  -2.0f,  -38.0f),
	   glm::vec3(8.0f,  -2.0f,  -38.0f),
	   glm::vec3(10.0f, -2.0f,  -38.0f),

		glm::vec3(6.0f,  -2.0f,  -40.0f),
	   glm::vec3(8.0f,  -2.0f,  -40.0f),
	   glm::vec3(10.0f, -2.0f,  -40.0f),

		glm::vec3(6.0f,  -2.0f,  -42.0f),
	   glm::vec3(8.0f,  -2.0f,  -42.0f),
	   glm::vec3(10.0f, -2.0f,  -42.0f),

	   glm::vec3(6.0f,  -2.0f,  -44.0f),
	   glm::vec3(8.0f,  -2.0f,  -44.0f),
	   glm::vec3(10.0f, -2.0f,  -44.0f),

		glm::vec3(6.0f,  -2.0f,  -46.0f),
	   glm::vec3(8.0f,  -2.0f,  -46.0f),
	   glm::vec3(10.0f, -2.0f,  -46.0f),
	};

	glm::vec3 paredViasInicialPositions[24] = {
		glm::vec3(4.0f,  0.0f,  0.0f),

		glm::vec3(4.0f,  0.0f,  -2.0f),

		glm::vec3(4.0f,  0.0f,  -4.0f),

		glm::vec3(4.0f,  0.0f,  -6.0f),

		glm::vec3(4.0f,  0.0f,  -8.0f),

		glm::vec3(4.0f,  0.0f,  -10.0f),

		glm::vec3(4.0f,  0.0f,  -12.0f),

		glm::vec3(4.0f,  0.0f,  -14.0f),

		glm::vec3(4.0f,  0.0f,  -16.0f),

		glm::vec3(4.0f,  0.0f,  -18.0f),

		glm::vec3(4.0f,  0.0f,  -20.0f),

		glm::vec3(4.0f,  0.0f,  -22.0f),

	    glm::vec3(4.0f,  0.0f,  -24.0f),

		glm::vec3(4.0f,  0.0f,  -26.0f),

		glm::vec3(4.0f,  0.0f,  -28.0f),

		glm::vec3(4.0f,  0.0f,  -30.0f),

		glm::vec3(4.0f,  0.0f,  -32.0f),

		glm::vec3(4.0f,  0.0f,  -34.0f),

		glm::vec3(4.0f,  0.0f,  -36.0f),

		glm::vec3(4.0f,  0.0f,  -38.0f),

		glm::vec3(4.0f,  0.0f,  -40.0f),

		glm::vec3(4.0f,  0.0f,  -42.0f),

		glm::vec3(4.0f,  0.0f,  -44.0f),

		glm::vec3(4.0f,  0.0f,  -46.0f),
	};

	glm::vec3 paredViasFinalPositions[72] = {
		glm::vec3(10.0f,  0.0f,  0.0f),
		glm::vec3(10.0f,  0.0f,  -2.0f),
		glm::vec3(10.0f,  0.0f,  -4.0f),
		glm::vec3(10.0f,  0.0f,  -6.0f),
		glm::vec3(10.0f,  0.0f,  -8.0f),
		glm::vec3(10.0f,  0.0f,  -10.0f),
		glm::vec3(10.0f,  0.0f,  -12.0f),
		glm::vec3(10.0f,  0.0f,  -14.0f),
		glm::vec3(10.0f,  0.0f,  -16.0f),
		glm::vec3(10.0f,  0.0f,  -18.0f),
		glm::vec3(10.0f,  0.0f,  -20.0f),
		glm::vec3(10.0f,  0.0f,  -22.0f),
		glm::vec3(10.0f,  0.0f,  -24.0f),
		glm::vec3(10.0f,  0.0f,  -26.0f),
		glm::vec3(10.0f,  0.0f,  -28.0f),
		glm::vec3(10.0f,  0.0f,  -30.0f),
		glm::vec3(10.0f,  0.0f,  -32.0f),
		glm::vec3(10.0f,  0.0f,  -34.0f),
		glm::vec3(10.0f,  0.0f,  -36.0f),
		glm::vec3(10.0f,  0.0f,  -38.0f),
		glm::vec3(10.0f,  0.0f,  -40.0f),
		glm::vec3(10.0f,  0.0f,  -42.0f),
		glm::vec3(10.0f,  0.0f,  -44.0f),
		glm::vec3(10.0f,  0.0f,  -46.0f),

	    glm::vec3(10.0f,  2.0f,  0.0f),
		glm::vec3(10.0f,  2.0f,  -2.0f),
		glm::vec3(10.0f,  2.0f,  -4.0f),
		glm::vec3(10.0f,  2.0f,  -6.0f),
		glm::vec3(10.0f,  2.0f,  -8.0f),
		glm::vec3(10.0f,  2.0f,  -10.0f),
		glm::vec3(10.0f,  2.0f,  -12.0f),
		glm::vec3(10.0f,  2.0f,  -14.0f),
		glm::vec3(10.0f,  2.0f,  -16.0f),
		glm::vec3(10.0f,  2.0f,  -18.0f),
		glm::vec3(10.0f,  2.0f,  -20.0f),
		glm::vec3(10.0f,  2.0f,  -22.0f),
		glm::vec3(10.0f,  2.0f,  -24.0f),
		glm::vec3(10.0f,  2.0f,  -26.0f),
		glm::vec3(10.0f,  2.0f,  -28.0f),
		glm::vec3(10.0f,  2.0f,  -30.0f),
		glm::vec3(10.0f,  2.0f,  -32.0f),
		glm::vec3(10.0f,  2.0f,  -34.0f),
		glm::vec3(10.0f,  2.0f,  -36.0f),
		glm::vec3(10.0f,  2.0f,  -38.0f),
		glm::vec3(10.0f,  2.0f,  -40.0f),
		glm::vec3(10.0f,  2.0f,  -42.0f),
		glm::vec3(10.0f,  2.0f,  -44.0f),
		glm::vec3(10.0f,  2.0f,  -46.0f),

		glm::vec3(10.0f,  4.0f,  0.0f),
		glm::vec3(10.0f,  4.0f,  -2.0f),
		glm::vec3(10.0f,  4.0f,  -4.0f),
		glm::vec3(10.0f,  4.0f,  -6.0f),
		glm::vec3(10.0f,  4.0f,  -8.0f),
		glm::vec3(10.0f,  4.0f,  -10.0f),
		glm::vec3(10.0f,  4.0f,  -12.0f),
		glm::vec3(10.0f,  4.0f,  -14.0f),
		glm::vec3(10.0f,  4.0f,  -16.0f),
		glm::vec3(10.0f,  4.0f,  -18.0f),
		glm::vec3(10.0f,  4.0f,  -20.0f),
		glm::vec3(10.0f,  4.0f,  -22.0f),
		glm::vec3(10.0f,  4.0f,  -24.0f),
		glm::vec3(10.0f,  4.0f,  -26.0f),
		glm::vec3(10.0f,  4.0f,  -28.0f),
		glm::vec3(10.0f,  4.0f,  -30.0f),
		glm::vec3(10.0f,  4.0f,  -32.0f),
		glm::vec3(10.0f,  4.0f,  -34.0f),
		glm::vec3(10.0f,  4.0f,  -36.0f),
		glm::vec3(10.0f,  4.0f,  -38.0f),
		glm::vec3(10.0f,  4.0f,  -40.0f),
		glm::vec3(10.0f,  4.0f,  -42.0f),
		glm::vec3(10.0f,  4.0f,  -44.0f),
		glm::vec3(10.0f,  4.0f,  -46.0f)
	};

	glm::vec3 paredInicialPositions[6] = {
		glm::vec3(0.0f,  2.0f,  0.0f),
		glm::vec3(2.0f,  2.0f,  0.0f),
		glm::vec3(4.0f,  2.0f,  0.0f),

		glm::vec3(0.0f,  4.0f,  0.0f),
		glm::vec3(2.0f,  4.0f,  0.0f),
		glm::vec3(4.0f,  4.0f,  0.0f),
	};

	glm::vec3 paredFinalPositions[6] = {
		glm::vec3(0.0f,  2.0f, -48.0f),
		glm::vec3(2.0f,  2.0f, -48.0f),
		glm::vec3(4.0f,  2.0f, -48.0f),

		glm::vec3(0.0f,  4.0f, -48.0f),
		glm::vec3(2.0f,  4.0f, -48.0f),
		glm::vec3(4.0f,  4.0f, -48.0f),
	};

	unsigned int VAO, VBO;
public:
	Estructura();

	GLuint* getVao();
	GLuint* getVbo();
	glm::vec3 getPisoPosition(unsigned int index);
	glm::vec3 getTechoPosition(unsigned int index);
	glm::vec3 getParedPosition(unsigned int index);
	glm::vec3 getParedInicialPosition(unsigned int index);
	glm::vec3 getParedFinalPosition(unsigned int index);
	glm::vec3 getParedViasInicialPosition(unsigned int index);
	glm::vec3 getParedViasFinalPosition(unsigned int index);
	glm::vec3 getViasPosition(unsigned int index);
};

#endif