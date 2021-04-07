/*
 * current_sense_tables.h
 *
 *  Created on: 02.04.21
 *      Author: jsteggall, milan
 */

#ifndef CURRENT_SENSE_TABLES_H_
#define CURRENT_SENSE_TABLES_H_


#define ID_T_POLY_COEFF_VDG_START 	240u
#define ID_T_POLY_COEFF_VDG_END 	800u
#define ID_T_POLY_COEFF_VDG_INC 	10u
#define ID_T_POLY_COEFF_LEN 		(((int16_t)ID_T_POLY_COEFF_VDG_END - ID_T_POLY_COEFF_VDG_START) / ID_T_POLY_COEFF_VDG_INC + 1u)
#define ID_T_POLY_LAST_COEFF_IDX	(ID_T_POLY_COEFF_LEN - 1u)


const float a[ID_T_POLY_COEFF_LEN] =
{
		0.00672f, 0.0065f, 0.00628f, 0.00606f, 0.00584f, 0.00562f, 0.0054f, 0.00518f,
		0.00496f, 0.00474f, 0.00452f, 0.0043f, 0.00408f, 0.00386f, 0.00364f, 0.00342f,
		0.0032f, 0.00298f, 0.00276f, 0.00254f, 0.00232f, 0.0021f, 0.00188f, 0.00166f,
		0.00144f, 0.00122f, 0.001f, 0.00065f, 0.0003f, 0.0f,-0.0051f,-0.0092f,-0.0139f,
		-0.0193f,-0.0254f,-0.0323f,-0.0399f,-0.0483f,-0.0576f,-0.0677f,-0.0788f,-0.0909f,-0.104f,
		-0.1181f,-0.1311f,-0.1458f,-0.1612f,-0.1774f,-0.1945f,-0.2123f,-0.231f,-0.2506f,-0.271f,
		-0.2922f,-0.3144f,-0.3374f,-0.3614f
};


const float b[ID_T_POLY_COEFF_LEN] =
{
		0.2169f,0.1571f,0.1201f,0.1042f,0.1078f,0.1295f,0.1676f,0.2207f,0.2872f,0.3655f,0.4541f,
		0.5514f,0.3989f,0.4694f,0.5615f,0.6495f,0.7352f,0.8204f,0.9068f,0.9962f,1.0904f,1.1911f,
		1.3001f,1.4193f,1.5503f,1.695f,1.8551f,2.0323f,2.2286f,2.4456f,3.0549f,3.5263f,4.0515f,
		4.6335f,5.2757f,5.981f,6.7528f,7.5942f,8.5084f,9.4986f,10.568f,11.719f,12.957f,14.282f,
		15.501f,16.858f,18.278f,19.763f,21.312f,22.926f,24.607f,26.354f,28.169f,30.052f,32.004f,
		34.025f,36.117f
};


const float c[ID_T_POLY_COEFF_LEN] =
{
		-8.2299f,-4.4796f,-1.6241f,0.4295f,1.774f,2.5026f,2.708f,2.4833f,1.9213f,1.115f,0.1574f,
		-0.8587f,3.632f,3.669f,4.126f,5.003f,6.3f,8.017f,10.154f,12.711f,15.688f,19.085f,22.902f,
		27.139f,31.796f,36.873f,42.37f,48.287f,54.624f,61.381f,68.558f,76.155f,84.172f,92.609f,
		101.47f,110.74f,120.44f,130.56f,141.09f,152.05f,163.43f,175.23f,187.44f,200.08f,217.37f,
		234.16f,252.12f,271.29f,291.73f,313.5f,336.64f,361.2f,387.24f,414.82f,443.99f,474.79f,507.28f
};


#endif /* CURRENT_SENSE_TABLES_H_ */
