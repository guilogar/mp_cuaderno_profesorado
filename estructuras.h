#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

//Alumnos y usuarios primeros en ser volcados

typedef struct usuarios {
	char id_usuario[4];
	char nomb_usuario[21];
	char perfil_usuario[14];
	char usuario[21];
	char contrasena[9];
} usuarios;

typedef struct alumnos{
	char id_alum[7];
	char nombre_alum[21];
	char direc_alum[31];
	char local_alum[31];
	char curso[31];
	char grupo[11];
} alumnos;

typedef struct materias{
	char id_materia[5];
	char nombre_materia[100];
	char abrev_materia[10];
} materias;

//Depende de alumnos

typedef struct matriculas{
	char id_materias[5];
	char id_alum[7];
} matriculas;

//Depende de alumnos y materias

typedef struct calificaciones{
	char fecha_calif[11];
	char descrip_calif[31];
	char id_materia[5];
	char id_alum[7];
	int valor_calif;
} calificaciones;

//Depende de alumnos

typedef struct faltas{
	char fecha_falta[11];
	int hora_falta;
	char descrip_falta[31];
	char estado_falta[14];
	char id_alum[7];
} faltas;

//Depende de usuarios, alumnos y materias

typedef struct horarios{
	char id_prof[4];
	int dia_clase;
	int hora_clase;
	char id_materia[5];
	char grupo[500];
} horarios;

#endif
