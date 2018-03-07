#include "BlankObject.h"

DEFINE_LOG_CATEGORY(BlankPlugin);

UBlankObject::UBlankObject()
{
	// You can test your hot-reloading by changing this log message...
	UE_LOG(BlankPlugin, Warning, TEXT("Your plugin log message..."));
}
