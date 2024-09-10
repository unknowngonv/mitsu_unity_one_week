﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t3245421752;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef CONTROLMODE_T2950481286_H
#define CONTROLMODE_T2950481286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCharacterControl/ControlMode
struct  ControlMode_t2950481286 
{
public:
	// System.Int32 SimpleCharacterControl/ControlMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlMode_t2950481286, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLMODE_T2950481286_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SIMPLECHARACTERCONTROL_T1921274470_H
#define SIMPLECHARACTERCONTROL_T1921274470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCharacterControl
struct  SimpleCharacterControl_t1921274470  : public MonoBehaviour_t3962482529
{
public:
	// System.Single SimpleCharacterControl::m_moveSpeed
	float ___m_moveSpeed_2;
	// System.Single SimpleCharacterControl::m_turnSpeed
	float ___m_turnSpeed_3;
	// System.Single SimpleCharacterControl::m_jumpForce
	float ___m_jumpForce_4;
	// UnityEngine.Animator SimpleCharacterControl::m_animator
	Animator_t434523843 * ___m_animator_5;
	// UnityEngine.Rigidbody SimpleCharacterControl::m_rigidBody
	Rigidbody_t3916780224 * ___m_rigidBody_6;
	// SimpleCharacterControl/ControlMode SimpleCharacterControl::m_controlMode
	int32_t ___m_controlMode_7;
	// System.Single SimpleCharacterControl::m_currentV
	float ___m_currentV_8;
	// System.Single SimpleCharacterControl::m_currentH
	float ___m_currentH_9;
	// System.Single SimpleCharacterControl::m_interpolation
	float ___m_interpolation_10;
	// System.Single SimpleCharacterControl::m_walkScale
	float ___m_walkScale_11;
	// System.Single SimpleCharacterControl::m_backwardsWalkScale
	float ___m_backwardsWalkScale_12;
	// System.Single SimpleCharacterControl::m_backwardRunScale
	float ___m_backwardRunScale_13;
	// System.Boolean SimpleCharacterControl::m_wasGrounded
	bool ___m_wasGrounded_14;
	// UnityEngine.Vector3 SimpleCharacterControl::m_currentDirection
	Vector3_t3722313464  ___m_currentDirection_15;
	// System.Single SimpleCharacterControl::m_jumpTimeStamp
	float ___m_jumpTimeStamp_16;
	// System.Single SimpleCharacterControl::m_minJumpInterval
	float ___m_minJumpInterval_17;
	// System.Boolean SimpleCharacterControl::m_isGrounded
	bool ___m_isGrounded_18;
	// System.Collections.Generic.List`1<UnityEngine.Collider> SimpleCharacterControl::m_collisions
	List_1_t3245421752 * ___m_collisions_19;

public:
	inline static int32_t get_offset_of_m_moveSpeed_2() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_moveSpeed_2)); }
	inline float get_m_moveSpeed_2() const { return ___m_moveSpeed_2; }
	inline float* get_address_of_m_moveSpeed_2() { return &___m_moveSpeed_2; }
	inline void set_m_moveSpeed_2(float value)
	{
		___m_moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_turnSpeed_3() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_turnSpeed_3)); }
	inline float get_m_turnSpeed_3() const { return ___m_turnSpeed_3; }
	inline float* get_address_of_m_turnSpeed_3() { return &___m_turnSpeed_3; }
	inline void set_m_turnSpeed_3(float value)
	{
		___m_turnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_jumpForce_4() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_jumpForce_4)); }
	inline float get_m_jumpForce_4() const { return ___m_jumpForce_4; }
	inline float* get_address_of_m_jumpForce_4() { return &___m_jumpForce_4; }
	inline void set_m_jumpForce_4(float value)
	{
		___m_jumpForce_4 = value;
	}

	inline static int32_t get_offset_of_m_animator_5() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_animator_5)); }
	inline Animator_t434523843 * get_m_animator_5() const { return ___m_animator_5; }
	inline Animator_t434523843 ** get_address_of_m_animator_5() { return &___m_animator_5; }
	inline void set_m_animator_5(Animator_t434523843 * value)
	{
		___m_animator_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_animator_5), value);
	}

	inline static int32_t get_offset_of_m_rigidBody_6() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_rigidBody_6)); }
	inline Rigidbody_t3916780224 * get_m_rigidBody_6() const { return ___m_rigidBody_6; }
	inline Rigidbody_t3916780224 ** get_address_of_m_rigidBody_6() { return &___m_rigidBody_6; }
	inline void set_m_rigidBody_6(Rigidbody_t3916780224 * value)
	{
		___m_rigidBody_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_rigidBody_6), value);
	}

	inline static int32_t get_offset_of_m_controlMode_7() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_controlMode_7)); }
	inline int32_t get_m_controlMode_7() const { return ___m_controlMode_7; }
	inline int32_t* get_address_of_m_controlMode_7() { return &___m_controlMode_7; }
	inline void set_m_controlMode_7(int32_t value)
	{
		___m_controlMode_7 = value;
	}

	inline static int32_t get_offset_of_m_currentV_8() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_currentV_8)); }
	inline float get_m_currentV_8() const { return ___m_currentV_8; }
	inline float* get_address_of_m_currentV_8() { return &___m_currentV_8; }
	inline void set_m_currentV_8(float value)
	{
		___m_currentV_8 = value;
	}

	inline static int32_t get_offset_of_m_currentH_9() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_currentH_9)); }
	inline float get_m_currentH_9() const { return ___m_currentH_9; }
	inline float* get_address_of_m_currentH_9() { return &___m_currentH_9; }
	inline void set_m_currentH_9(float value)
	{
		___m_currentH_9 = value;
	}

	inline static int32_t get_offset_of_m_interpolation_10() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_interpolation_10)); }
	inline float get_m_interpolation_10() const { return ___m_interpolation_10; }
	inline float* get_address_of_m_interpolation_10() { return &___m_interpolation_10; }
	inline void set_m_interpolation_10(float value)
	{
		___m_interpolation_10 = value;
	}

	inline static int32_t get_offset_of_m_walkScale_11() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_walkScale_11)); }
	inline float get_m_walkScale_11() const { return ___m_walkScale_11; }
	inline float* get_address_of_m_walkScale_11() { return &___m_walkScale_11; }
	inline void set_m_walkScale_11(float value)
	{
		___m_walkScale_11 = value;
	}

	inline static int32_t get_offset_of_m_backwardsWalkScale_12() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_backwardsWalkScale_12)); }
	inline float get_m_backwardsWalkScale_12() const { return ___m_backwardsWalkScale_12; }
	inline float* get_address_of_m_backwardsWalkScale_12() { return &___m_backwardsWalkScale_12; }
	inline void set_m_backwardsWalkScale_12(float value)
	{
		___m_backwardsWalkScale_12 = value;
	}

	inline static int32_t get_offset_of_m_backwardRunScale_13() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_backwardRunScale_13)); }
	inline float get_m_backwardRunScale_13() const { return ___m_backwardRunScale_13; }
	inline float* get_address_of_m_backwardRunScale_13() { return &___m_backwardRunScale_13; }
	inline void set_m_backwardRunScale_13(float value)
	{
		___m_backwardRunScale_13 = value;
	}

	inline static int32_t get_offset_of_m_wasGrounded_14() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_wasGrounded_14)); }
	inline bool get_m_wasGrounded_14() const { return ___m_wasGrounded_14; }
	inline bool* get_address_of_m_wasGrounded_14() { return &___m_wasGrounded_14; }
	inline void set_m_wasGrounded_14(bool value)
	{
		___m_wasGrounded_14 = value;
	}

	inline static int32_t get_offset_of_m_currentDirection_15() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_currentDirection_15)); }
	inline Vector3_t3722313464  get_m_currentDirection_15() const { return ___m_currentDirection_15; }
	inline Vector3_t3722313464 * get_address_of_m_currentDirection_15() { return &___m_currentDirection_15; }
	inline void set_m_currentDirection_15(Vector3_t3722313464  value)
	{
		___m_currentDirection_15 = value;
	}

	inline static int32_t get_offset_of_m_jumpTimeStamp_16() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_jumpTimeStamp_16)); }
	inline float get_m_jumpTimeStamp_16() const { return ___m_jumpTimeStamp_16; }
	inline float* get_address_of_m_jumpTimeStamp_16() { return &___m_jumpTimeStamp_16; }
	inline void set_m_jumpTimeStamp_16(float value)
	{
		___m_jumpTimeStamp_16 = value;
	}

	inline static int32_t get_offset_of_m_minJumpInterval_17() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_minJumpInterval_17)); }
	inline float get_m_minJumpInterval_17() const { return ___m_minJumpInterval_17; }
	inline float* get_address_of_m_minJumpInterval_17() { return &___m_minJumpInterval_17; }
	inline void set_m_minJumpInterval_17(float value)
	{
		___m_minJumpInterval_17 = value;
	}

	inline static int32_t get_offset_of_m_isGrounded_18() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_isGrounded_18)); }
	inline bool get_m_isGrounded_18() const { return ___m_isGrounded_18; }
	inline bool* get_address_of_m_isGrounded_18() { return &___m_isGrounded_18; }
	inline void set_m_isGrounded_18(bool value)
	{
		___m_isGrounded_18 = value;
	}

	inline static int32_t get_offset_of_m_collisions_19() { return static_cast<int32_t>(offsetof(SimpleCharacterControl_t1921274470, ___m_collisions_19)); }
	inline List_1_t3245421752 * get_m_collisions_19() const { return ___m_collisions_19; }
	inline List_1_t3245421752 ** get_address_of_m_collisions_19() { return &___m_collisions_19; }
	inline void set_m_collisions_19(List_1_t3245421752 * value)
	{
		___m_collisions_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_collisions_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECHARACTERCONTROL_T1921274470_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (SimpleCharacterControl_t1921274470), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1800[18] = 
{
	SimpleCharacterControl_t1921274470::get_offset_of_m_moveSpeed_2(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_turnSpeed_3(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_jumpForce_4(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_animator_5(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_rigidBody_6(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_controlMode_7(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_currentV_8(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_currentH_9(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_interpolation_10(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_walkScale_11(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_backwardsWalkScale_12(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_backwardRunScale_13(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_wasGrounded_14(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_currentDirection_15(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_jumpTimeStamp_16(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_minJumpInterval_17(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_isGrounded_18(),
	SimpleCharacterControl_t1921274470::get_offset_of_m_collisions_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (ControlMode_t2950481286)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1801[3] = 
{
	ControlMode_t2950481286::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
