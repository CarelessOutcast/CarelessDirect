#include "gui.h"

#include "buildinfo.h"
#include "client/client.h"
#include "server/server.h"

namespace UserInterface
{

MainWindow::MainWindow (BaseObjectType *cobject,
                        const Glib::RefPtr<Gtk::Builder> &refBuilder)
    : Gtk::Window (cobject), m_refBuilder (refBuilder),
      m_join_button (
          m_refBuilder->get_widget<Gtk::Button> ("join_chat_server_button")),
      m_create_button (
          m_refBuilder->get_widget<Gtk::Button> ("create_chat_server_button"))
{
  if (m_join_button)
    {
      m_join_button->signal_clicked ().connect (sigc::mem_fun (
          *this, &MainWindow::on_join_chat_server_button_clicked));
    }
  if (m_create_button)
    {
      m_create_button->signal_clicked ().connect (sigc::mem_fun (
          *this, &MainWindow::on_create_chat_server_button_clicked));
    }
}

void
MainWindow::on_join_chat_server_button_clicked ()
{
  std::cout << "Clicked join button" << std::endl;
};
void
MainWindow::on_create_chat_server_button_clicked ()
{
  std::cout << "Clicked create button" << std::endl;
};

} // namespace UserInterface
