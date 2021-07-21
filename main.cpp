#include "principal.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>
#include <QLocale>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QTranslator qtTranslator;
//        qtTranslator.load(QLocale::system(), QStringLiteral("Idiomas"));
//        a.installTranslator(&qtTranslator);

    //Crea un objeto para manejar las traducciones
    QTranslator traduccion;
    //Crear lista de idiomas
    QStringList idiomas;
    idiomas<< "Frances" << "Ingles" << "Español";
    //Soliticar al usuario que elija el usuario
    QString idiomaSel = QInputDialog::getItem(NULL, "Idioma", "Seleccione el idioma: ", idiomas);
    //Evaluar el idioma seleccionado
    if(idiomaSel == "Frances")
        //Cargar un idioma
        traduccion.load(":/traducciones/Idiomas_fr_FR.qm");
    else if(idiomaSel == "Ingles")
        traduccion.load(":/traducciones/Idiomas_en_US.qm");
    else
        traduccion.load(":/traducciones/Idiomas_es_EC.qm");

    //Establecer un idioma a la aplicacion
    a.installTranslator(&traduccion);
    Principal w;
    w.show();
    return a.exec();
}
