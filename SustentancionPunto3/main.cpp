#include <iostream>
#include "./Categoria.cpp"
#include "./VideoJuego.cpp"
using namespace std;

int main(int argc, char const *argv[])
{

    vector<Categoria *> categorias;
    vector<VideoJuego *> videoJuegos;
    Categoria *categoria = nullptr;
    VideoJuego *videoJuego = nullptr;
    int opcion = 0;

    do
    {
        cout << "1. Crear Categoria" << endl;
        cout << "2. Crear VideoJuego " << endl;
        cout << "3. Asignar VideoJuego a Categoria" << endl;
        cout << "4. Ver Lista Categorias" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            categoria = new Categoria();
            categoria->showForm();
            categorias.push_back(categoria);
            break;
        case 2:
            videoJuego = new VideoJuego();
            videoJuego->showForm();
            videoJuegos.push_back(videoJuego);
            break;
        case 3:

            if (categorias.empty())
            {
                cout << "No hay categorias registradas" << endl;
                break;
            }
            else if (videoJuegos.empty())
            {
                cout << "No hay juegos registrados" << endl;
                break;
            }

            cout << "Seleccione la categoria que desdea agregar un videoJuego " << endl;
            int selectCategoria;
            for (int i = 0; i < categorias.size(); i++)
            {
                cout << (i + 1) << "." << categorias[i]->getNombre() << endl;
            }
            cin >> selectCategoria;

            if (selectCategoria >= 1 && selectCategoria <= categorias.size())
            {
                cout << "Seleccione el video juego" << endl;
                int selectVideoJuego;
                for (int i = 0; i < videoJuegos.size(); i++)
                {
                    cout << (i + 1) << "." << videoJuegos[i]->getNombre() << endl;
                }
                cin >> selectVideoJuego;

                if (selectVideoJuego >= 1 && selectVideoJuego <= videoJuegos.size())
                {
                    categorias[selectCategoria - 1]->addVideoJuego(videoJuegos[selectVideoJuego - 1]);
                }
                else
                {
                    cout << "Opcion no valida" << endl;
                }
            }
            else
            {
                cout << "opcion no valida" << endl;
            }

            break;
        case 4:
            if (categorias.empty())
            {
                cout << "No hay categorias registradas" << endl;
            }
            for (Categoria *categoria : categorias)
            {
                categoria->showCategoria();
            }
            break;
        default:
            break;
        }
    } while (opcion != 0);

    return 0;
}
