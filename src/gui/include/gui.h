#include <gtkmm.h>

namespace UserInterface
{
class MainWindow : public Gtk::Window
{
public:
  MainWindow (BaseObjectType *cobject,
              const Glib::RefPtr<Gtk::Builder> &refBuilder);

protected:
  Glib::RefPtr<Gtk::Builder> m_refBuilder;
  Gtk::Button *m_join_button = nullptr;
  Gtk::Button *m_create_button = nullptr;

  void on_join_chat_server_button_clicked ();
  void on_create_chat_server_button_clicked ();
};
} // namespace UserInterface
