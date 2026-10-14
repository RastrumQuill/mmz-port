// sub_0809F65C at 0x0809F65C (thumb)

undefined4 sub_0809F65C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0809f696:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08367818);
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_08017700(param_1,0x3308);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0809f696;
  }
  if (bVar1 == 2) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (bVar1 != 3) {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 5) {
    if ((bVar1 & 2) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0809f718;
    }
  }
  else if ((bVar1 & 1) != 0) {
    bVar3 = *(byte *)(param_1 + 10) | 1;
    goto LAB_0809f718;
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0809f718:
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(byte *)(param_1 + 0x94) = bVar1 - 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  return in_lr;
}

