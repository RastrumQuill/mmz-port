// sub_08002498 at 0x08002498 (thumb)

undefined4 sub_08002498(void)

{
  ushort uVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined2 local_10 [2];
  
  DAT_02000004 = DAT_04000208;
  DAT_04000208 = 0;
  uVar1 = DAT_04000200._0_2_;
  DAT_04000200._0_2_ = uVar1 & 0xff3f;
  DAT_04000208 = DAT_02000004;
  Ram04000128 = 0x2000;
  DAT_0400010e = 0;
  DAT_04000200._2_2_ = 0xc0;
  local_14 = 0;
  FUN_080fe114(&local_14,&DAT_02001790,&DAT_05000266);
  local_10[0] = 0;
  FUN_080fe114(local_10,&DAT_0200177c,0x1000002);
  DAT_0200177d = 0;
  return in_lr;
}

