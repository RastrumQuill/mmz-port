// sub_08002F2C at 0x08002F2C (thumb)

undefined4 sub_08002F2C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  DAT_02000f90 = DAT_02000f90 & 0xb0f8;
  local_8 = 0;
  DAT_040000d4 = &local_8;
  DAT_040000d8 = 0x2000f94;
  DAT_040000dc = 0x8500000e;
  uVar1 = DAT_040000dc;
  DAT_02000f94 = 0xc008;
  DAT_02000f96 = 0x4205;
  DAT_02000f98 = 0x4406;
  DAT_02000f9a = 0x4807;
  uStack_4 = in_lr;
  sub_08002F98();
  return uStack_4;
}

