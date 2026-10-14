// sub_08018FB8 at 0x08018FB8 (thumb)

undefined4 sub_08018FB8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0203062c;
  sub_080070D0(DAT_0203062c);
  iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
  *(int *)(iVar2 + 0xc) = iVar3;
  if (iVar3 != iVar2 + 0x14) {
    do {
      if ((*(byte *)(iVar3 + 0xc) < 3) && (*(char *)(iVar3 + 9) == ' ')) {
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar3 + 9)] + 0xc)
        ;
      }
      iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
      *(int *)(iVar2 + 0xc) = iVar3;
    } while (iVar3 != iVar2 + 0x14);
  }
  iVar2 = DAT_020305f8;
  sub_080070D0(DAT_020305f8);
  iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
  *(int *)(iVar2 + 0xc) = iVar3;
  if (iVar3 != iVar2 + 0x14) {
    do {
      if ((*(byte *)(iVar3 + 0xc) < 3) &&
         (((cVar1 = *(char *)(iVar3 + 9), (byte)(cVar1 - 1U) < 3 || (cVar1 == '\x06')) ||
          (cVar1 == '\b')))) {
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0x8c) = 0;
        *(undefined4 *)(iVar3 + 0x90) = 0;
        *(undefined *)(iVar3 + 0x94) = 0;
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(iVar3 + 9)] + 0xc)
        ;
      }
      iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
      *(int *)(iVar2 + 0xc) = iVar3;
    } while (iVar3 != iVar2 + 0x14);
  }
  iVar2 = DAT_020305e8;
  sub_080070D0(DAT_020305e8);
  iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
  *(int *)(iVar2 + 0xc) = iVar3;
  if (iVar3 != iVar2 + 0x14) {
    do {
      if ((*(byte *)(iVar3 + 0xc) < 3) &&
         (((((cVar1 = *(char *)(iVar3 + 9), cVar1 == '\v' || (cVar1 == '\x16')) &&
            ((*(char *)(iVar3 + 0x10) == '\x01' ||
             ((cVar1 == '\x16' && (*(char *)(iVar3 + 0x10) == '\x02')))))) ||
           ((*(char *)(iVar3 + 9) == '6' && (*(char *)(iVar3 + 0x10) == '\x01')))) ||
          (*(char *)(iVar3 + 9) == '\x1c')))) {
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0x8c) = 0;
        *(undefined4 *)(iVar3 + 0x90) = 0;
        *(undefined *)(iVar3 + 0x94) = 0;
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
      }
      iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
      *(int *)(iVar2 + 0xc) = iVar3;
    } while (iVar3 != iVar2 + 0x14);
  }
  return in_lr;
}

