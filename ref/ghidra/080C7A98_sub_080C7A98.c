// sub_080C7A98 at 0x080C7A98 (thumb)

undefined4 sub_080C7A98(void)

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
    FUN_080c88f0(&local_8,piVar2 + 0xd4,&DAT_0500018c);
  }
  return uStack_4;
}

