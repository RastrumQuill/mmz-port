// sub_08002518 at 0x08002518 (thumb)

undefined4 sub_08002518(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined2 local_18 [2];
  
  uVar2 = DAT_04000208;
  DAT_04000208 = 0;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xff3f;
  DAT_04000208 = uVar2;
  DAT_04000134 = 0;
  Ram04000128 = 0x2000;
  uVar1 = Ram04000128;
  Ram04000128 = uVar1 | 0x4003;
  DAT_02000004 = DAT_04000208;
  DAT_04000208 = 0;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 | 0x80;
  DAT_04000208 = DAT_02000004;
  DAT_0400012a = 0;
  DAT_04000120 = 0;
  DAT_04000124 = 0;
  local_1c = 0;
  FUN_080fe114(&local_1c,&DAT_02001790,&DAT_05000266);
  local_18[0] = 0;
  FUN_080fe114(local_18,&DAT_0200177c,0x1000002);
  DAT_02000006 = 0;
  DAT_02000007 = 0;
  DAT_02000008 = 0;
  DAT_02001770 = 0;
  DAT_02001778 = 0;
  DAT_02000009 = 0;
  DAT_0200000a = 0;
  DAT_0200000c = 0;
  return in_lr;
}

