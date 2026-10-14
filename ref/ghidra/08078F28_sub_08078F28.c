// sub_08078F28 at 0x08078F28 (thumb)

undefined4 sub_08078F28(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08076590(param_1);
    sub_080033F0(param_1 + 0x6c,0);
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b1b8c,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined *)(param_1 + 0x13) = 0x31;
    *(undefined4 *)(param_1 + 0x5c) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar3 = (uint)*(byte *)(param_1 + 0x12) + *(int *)(param_1 + 0x5c);
  *(char *)(param_1 + 0x12) = (char)iVar3;
  if (0x42 < (iVar3 - 0x5fU & 0xff)) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x4c) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * -3
    ;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(char *)(param_1 + 0x12) = -0x80 - *(char *)(param_1 + 0x12);
    }
  }
  *(int *)(param_1 + 0x50) =
       *(int *)(param_1 + 0x50) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 3;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

