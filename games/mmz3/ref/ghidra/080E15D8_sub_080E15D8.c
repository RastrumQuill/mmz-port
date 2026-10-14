// sub_080E15D8 at 0x080E15D8 (thumb)

undefined8 sub_080E15D8(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  ushort auStack_10 [4];
  
  sub_080FE598(auStack_10,&DAT_080fed2c,6);
  if (((int)(uint)(byte)(&DAT_02002430)[auStack_10[param_1 & 0xff] >> 3] >>
       (auStack_10[param_1 & 0xff] & 7) & 1U) == 0) {
    iVar1 = -0x70000000;
  }
  else {
    iVar1 = -0x6fff0000;
  }
  return CONCAT44(in_lr,(param_1 & 0xff) * 0x1000000 + iVar1 >> 0x10);
}

