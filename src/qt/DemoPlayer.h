#include <QMainWindow>
 
namespace Ui {
    class DemoPlayer;
}
 
class VlcInstance;
class VlcMedia;
class VlcMediaPlayer;
 
class DemoPlayer : public QMainWindow
{
Q_OBJECT
public:
    explicit DemoPlayer(QWidget *parent = 0);
    ~DemoPlayer();
 
private slots:
    void openLocal();
    void openUrl();
 
private:
    Ui::DemoPlayer *ui;
 
    VlcInstance *_instance;
    VlcMedia *_media;
    VlcMediaPlayer *_player;
};
 
#endif // DEMOPLAYER_H_
