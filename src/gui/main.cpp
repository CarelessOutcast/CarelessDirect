#include "gui.h"

namespace
{
UserInterface::MainWindow *mainWindow = nullptr;
Glib::RefPtr<Gtk::Application> app;

void
on_app_activate ()
{
  auto refBuilder = Gtk::Builder::create ();
  try
    {
      refBuilder->add_from_file (BUILD_DIRECTORY "/bin/gui/basic.ui");
    }
  catch (const Glib::FileError &ex)
    {
      std::cerr << "FileError: " << ex.what () << std::endl;
      return;
    }
  catch (const Glib::MarkupError &ex)
    {
      std::cerr << "MarkupError: " << ex.what () << std::endl;
      return;
    }
  catch (const Gtk::BuilderError &ex)
    {
      std::cerr << "BuilderError: " << ex.what () << std::endl;
      return;
    }

  mainWindow = Gtk::Builder::get_widget_derived<UserInterface::MainWindow> (
      refBuilder, "DialogBasic");
  if (!mainWindow)
    {
      std::cerr << "No \"DialogBasic\" object in the UI file" << std::endl;
      return;
    }
  mainWindow->signal_hide ().connect ([] () { delete mainWindow; });
  app->add_window (*mainWindow);
  mainWindow->set_visible (true);
}

}

int
main (int argc, char *argv[])
{
  app = Gtk::Application::create ("com.Careless.Direct");

  app->signal_activate ().connect ([] () { on_app_activate (); });

  return app->run (argc, argv);
}
