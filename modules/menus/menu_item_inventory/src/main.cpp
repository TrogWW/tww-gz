#include <main.h>
#include "menus/menu_item_inventory/include/item_inventory_menu.h"
#include "events/draw_listener.h"
#include "menus/utils/menu_mgr.h"
#include "utils/draw.h"

void onCreate();
void onLoad();
void onDraw();
void onUnload();
void onDelete();

ItemInventoryMenu* l_ItemInventoryMenu;

namespace twwgz::modules {
void main() {
    g_menuMgr->setCreateHook(onCreate);
    g_menuMgr->setLoadHook(onLoad);
    g_menuMgr->setUnloadHook(onUnload);
    g_menuMgr->setDeleteHook(onDelete);
}
void exit() {
    g_menuMgr->setCreateHook(nullptr);
    g_menuMgr->setLoadHook(nullptr);
    g_menuMgr->setUnloadHook(nullptr);
    g_menuMgr->setDeleteHook(nullptr);
}
}  // namespace twwgz::modules

void onCreate() {
    if (!g_menuMgr->getPermanentData<Cursor>()) {
        g_menuMgr->setPermanentData(new Cursor);
    }
}

void onLoad() {
    l_ItemInventoryMenu = new ItemInventoryMenu(*g_menuMgr->getPermanentData<Cursor>());
    g_drawListener->addListener(onDraw);
}

void onDraw() {
    l_ItemInventoryMenu->draw();
}

void onUnload() {
    g_drawListener->removeListener(onDraw);
    delete l_ItemInventoryMenu;
}

void onDelete() {}
