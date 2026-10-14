// sub_0800442C at 0x0800442C (thumb)

undefined4 sub_0800442C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  DAT_030032d4 = 0x1040;
  DAT_030032d0 = &DAT_03002ed0;
  local_8 = 0x200;
  DAT_040000d4 = &local_8;
  DAT_040000d8 = 0x3002ed0;
  DAT_040000dc = 0x85000100;
  uVar1 = DAT_040000dc;
  uStack_4 = in_lr;
  sub_08004474(uVar1);
  return uStack_4;
}

