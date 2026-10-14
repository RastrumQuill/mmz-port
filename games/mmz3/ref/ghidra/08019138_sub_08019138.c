// sub_08019138 at 0x08019138 (thumb)

undefined4 sub_08019138(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0203062c;
  sub_080070D0(DAT_0203062c);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  if (iVar2 != iVar1 + 0x14) {
    do {
      if ((*(byte *)(iVar2 + 0xc) < 3) && (*(char *)(iVar2 + 9) == ',')) {
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
        *(undefined4 *)(iVar2 + 0xc) = 3;
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar2 + 9)] + 0xc)
        ;
      }
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
      *(int *)(iVar1 + 0xc) = iVar2;
    } while (iVar2 != iVar1 + 0x14);
  }
  iVar1 = DAT_020305f8;
  sub_080070D0(DAT_020305f8);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  if (iVar2 != iVar1 + 0x14) {
    do {
      if ((*(byte *)(iVar2 + 0xc) < 3) && ((byte)(*(char *)(iVar2 + 9) - 0x10U) < 2)) {
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
        *(undefined4 *)(iVar2 + 0x8c) = 0;
        *(undefined4 *)(iVar2 + 0x90) = 0;
        *(undefined *)(iVar2 + 0x94) = 0;
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
        *(undefined4 *)(iVar2 + 0xc) = 3;
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(iVar2 + 9)] + 0xc)
        ;
      }
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
      *(int *)(iVar1 + 0xc) = iVar2;
    } while (iVar2 != iVar1 + 0x14);
  }
  iVar1 = DAT_020305e8;
  sub_080070D0(DAT_020305e8);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  if (iVar2 != iVar1 + 0x14) {
    do {
      if ((*(byte *)(iVar2 + 0xc) < 3) && ((byte)(*(char *)(iVar2 + 9) - 0x1eU) < 3)) {
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
        *(undefined4 *)(iVar2 + 0x8c) = 0;
        *(undefined4 *)(iVar2 + 0x90) = 0;
        *(undefined *)(iVar2 + 0x94) = 0;
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
        *(undefined4 *)(iVar2 + 0xc) = 3;
        *(undefined4 *)(iVar2 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
      }
      iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
      *(int *)(iVar1 + 0xc) = iVar2;
    } while (iVar2 != iVar1 + 0x14);
  }
  return in_lr;
}

