// sub_080ED46C at 0x080ED46C (thumb)

void sub_080ED46C(void)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_03007ff0;
  if ((*DAT_03007ff0 + 0x978c92adU < 2) &&
     (bVar1 = *(byte *)(DAT_03007ff0 + 1), iVar4 = bVar1 - 1,
     *(char *)(DAT_03007ff0 + 1) = (char)iVar4, iVar4 == 0 || bVar1 == 0)) {
    *(undefined *)(piVar3 + 1) = *(undefined *)((int)piVar3 + 0xb);
    uVar2 = DAT_040000c4;
    if ((uVar2 & 0x2000000) != 0) {
      DAT_040000c4 = 0x84400004;
    }
    DAT_040000c4._2_2_ = 0x400;
    DAT_040000c4._2_2_ = 0xb600;
  }
  return;
}

