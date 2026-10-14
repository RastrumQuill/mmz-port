// sub_08004270 at 0x08004270 (thumb)

undefined4 sub_08004270(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  DAT_020023c0 = DAT_020023c0 & 0xb0f8;
  local_8 = 0;
  DAT_040000d4 = &local_8;
  DAT_040000d8 = 0x20023c4;
  DAT_040000dc = 0x8500000e;
  uVar1 = DAT_040000dc;
  DAT_020023c4 = 0xc008;
  DAT_020023c6 = 0x4205;
  DAT_020023c8 = 0x4406;
  DAT_020023ca = 0x4807;
  uStack_4 = in_lr;
  sub_080042DC();
  return uStack_4;
}

