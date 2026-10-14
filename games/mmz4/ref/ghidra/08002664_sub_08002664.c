// sub_08002664 at 0x08002664 (thumb)

undefined4 sub_08002664(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  DAT_02000a00 = DAT_02000a00 & 0xb0f8;
  local_8 = 0;
  DAT_040000d4 = &local_8;
  DAT_040000d8 = 0x2000a04;
  DAT_040000dc = 0x8500000e;
  uVar1 = DAT_040000dc;
  DAT_02000a04 = 0xc008;
  DAT_02000a06 = 0x4205;
  DAT_02000a08 = 0x4406;
  DAT_02000a0a = 0x4807;
  uStack_4 = in_lr;
  sub_080026D0();
  return uStack_4;
}

