#include <string>

/// Liefert die Sekunden der aktuellen Minute.
unsigned int seconds();

/// Liefert die Minuten der aktuellen Stunde.
unsigned int minutes();

/// Liefert die Stunden des aktuellen Tages.
unsigned int hours();

/// Liefert die aktuelle Uhrzeit als String im Format "hh:mm:ss".
std::string time_string();
