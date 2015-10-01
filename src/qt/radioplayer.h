#include <QMainWindow>
 
namespace Ui {
    class radioplayer;
}
 
class VlcInstance;
class VlcMedia;
class VlcMediaPlayer;
 
class radioplayer : public QMainWindow
{
Q_OBJECT
public:
    explicit radioplayer(QWidget *parent = 0);
    ~radioplayer();
 
private slots:
    void openLocal();
    void openUrl();
 
private:
    Ui::radioplayer *ui;
 
    VlcInstance *_instance;
    VlcMedia *_media;
    VlcMediaPlayer *_player;
};
 
#endif // RADIOPLAYER_H_
