// sub_081276F4 at 0x081276F4 (thumb)

undefined4 sub_081276F4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = DAT_03007ff0;
  iVar2 = *DAT_03007ff0;
  if (iVar2 != 0x68736d53) {
    DAT_040000c4._2_2_ = 0xb600;
    *(undefined *)(DAT_03007ff0 + 1) = 0;
    *piVar1 = iVar2 + -10;
  }
  return in_lr;
}

