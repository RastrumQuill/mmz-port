// sub_080EE114 at 0x080EE114 (thumb)

undefined4 sub_080EE114(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar2 = DAT_03007ff0;
  uStack_4 = in_lr;
  if (*DAT_03007ff0 + 0x978c92adU < 2) {
    *DAT_03007ff0 = *DAT_03007ff0 + 10;
    uVar1 = DAT_040000c4;
    if ((uVar1 & 0x2000000) != 0) {
      DAT_040000c4 = 0x84400004;
    }
    DAT_040000c4._2_2_ = 0x400;
    local_8 = 0;
    sub_080EEF6C(&local_8,piVar2 + 0xd4,&DAT_0500018c);
  }
  return uStack_4;
}

