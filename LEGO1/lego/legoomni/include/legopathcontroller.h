#ifndef LEGOPATHCONTROLLER_H
#define LEGOPATHCONTROLLER_H

#include "decomp.h"
#include "legopathactor.h"
#include "legopathboundary.h"
#include "mxcore.h"
#include "mxstl/stlcompat.h"

class LegoAnimPresenter;
class LegoWorld;
class MxAtomId;
class Vector3;

struct LegoPathControllerComparator {
	MxBool operator()(const undefined*, const undefined*) const { return 0; }
};

// VTABLE: LEGO1 0x100d7d60
// SIZE 0x40
class LegoPathController : public MxCore {
public:
	LegoPathController();
	~LegoPathController() override { Destroy(); }

	MxResult Tickle() override; // vtable+08

	// FUNCTION: LEGO1 0x10045110
	inline const char* ClassName() const override // vtable+0x0c
	{
		// STRING: LEGO1 0x100f11b8
		return "LegoPathController";
	}

	// FUNCTION: LEGO1 0x10045120
	inline MxBool IsA(const char* p_name) const override // vtable+0x10
	{
		return !strcmp(p_name, LegoPathController::ClassName()) || MxCore::IsA(p_name);
	}

	// SYNTHETIC: LEGO1 0x10045740
	// LegoPathController::`scalar deleting destructor'

	virtual void VTable0x14(MxU8* p_data, Vector3& p_location, MxAtomId& p_trigger); // vtable+0x14
	virtual void Destroy();                                                          // vtable+0x18

	MxResult FUN_10045c20(
		LegoPathActor* p_actor,
		const char* p_name,
		MxS32 p_src,
		float p_srcScale,
		MxS32 p_dest,
		float p_destScale
	);
	undefined4 FUN_10046770(LegoPathActor* p_actor);
	void FUN_100468f0(LegoAnimPresenter* p_presenter);
	void FUN_10046930(LegoAnimPresenter* p_presenter);
	MxResult FUN_10046b30(LegoPathBoundary** p_path, MxS32& p_value);
	LegoPathBoundary* GetPathBoundary(const char* p_name);
	void Enable(MxBool p_enable);
	void FUN_10046bb0(LegoWorld* p_world);

private:
	LegoPathBoundary* m_unk0x08;                          // 0x08
	undefined4 m_unk0x0c;                                 // 0x0c
	undefined4 m_unk0x10;                                 // 0x10
	undefined4 m_unk0x14;                                 // 0x14
	MxU16 m_numL;                                         // 0x18
	MxU16 m_numE;                                         // 0x1a
	MxU16 m_numN;                                         // 0x1c
	MxU16 m_numT;                                         // 0x1e
	set<undefined*, LegoPathControllerComparator> m_pfsE; // 0x20
	LegoPathActorSet m_actors;                            // 0x30
};

// clang-format off
// TEMPLATE: LEGO1 0x100451a0
// _Tree<unsigned char *,unsigned char *,set<unsigned char *,LegoPathControllerComparator,allocator<unsigned char *> >::_Kfn,LegoPathControllerComparator,allocator<unsigned char *> >::~_Tree<unsigned char *,unsigned char *,set<unsigned char *,LegoPathControl

// TEMPLATE: LEGO1 0x100457e0
// Set<unsigned char *,LegoPathControllerComparator>::~Set<unsigned char *,LegoPathControllerComparator>

// TEMPLATE: LEGO1 0x10045830
// set<unsigned char *,LegoPathControllerComparator,allocator<unsigned char *> >::~set<unsigned char *,LegoPathControllerComparator,allocator<unsigned char *> >

// GLOBAL: LEGO1 0x100f4360
// _Tree<unsigned char *,unsigned char *,set<unsigned char *,LegoPathControllerComparator,allocator<unsigned char *> >::_Kfn,LegoPathControllerComparator,allocator<unsigned char *> >::_Nil
// clang-format on

#endif // LEGOPATHCONTROLLER_H
