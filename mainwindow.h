#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		MainWindow(QWidget *parent = nullptr);
		~MainWindow();

	protected:
		void keyPressEvent(QKeyEvent *);

	private slots:
		void update_time();		// 遊戲時間更新
		void update_object();	// 遊戲物體移動更新

		void on_button_start_game_clicked();

		void on_action_start_game_triggered();

		void on_action_close_game_triggered();

	private:
		Ui::MainWindow *ui;
		int time;				// 遊戲時間
		int game_status;		// 遊戲狀態
		int bgm_pos;			// 背景的位置(水平)
		int car_pos;			// 車子的位置(垂直)
		int car_direction;		// 車子的方向(垂直)
		float car_distance;		// 車子移動的距離

		QTimer *clock_timer;	// 遊戲時間計時器
		QTimer *object_timer;	// 物體移動計時器

		void game_start();		// 遊戲開始
		void game_pause();		// 遊戲暫停
		void game_stop();		// 遊戲停止
		void move_car();		// 車子移動
		void move_blocks();		// 障礙物移動
		void detect_blocks();	// 偵測障礙物位置
		bool is_collision(int x, int y);	// 判斷是否碰撞到障礙物
};
#endif // MAINWINDOW_H
