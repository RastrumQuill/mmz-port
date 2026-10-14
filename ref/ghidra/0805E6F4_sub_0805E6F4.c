// sub_0805E6F4 at 0x0805E6F4 (thumb)

undefined4 sub_0805E6F4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xc2) = 0;
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x13) < 9) {
    sub_0800561C(param_1 + 0x74,
                 &DAT_082b0270 + (uint)(byte)(&DAT_082b0358)[*(byte *)(param_1 + 0x13)] * 0x1c);
    *(undefined *)(param_1 + 0xc2) = (&DAT_082b0358)[*(byte *)(param_1 + 0x13)];
  }
  else {
    sub_0800561C(param_1 + 0x74,&DAT_082b02e0);
    *(undefined *)(param_1 + 0xc2) = 4;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  uVar2 = sub_0805DEC8(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  if ((uVar2 & 2) != 0) {
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x73) != '\x03')) {
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar3 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      iVar3 = *(int *)(param_1 + 0x50) - iVar3;
    }
    else {
      iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      iVar3 = iVar3 - *(int *)(param_1 + 0x50);
    }
    if (iVar3 < 0x2000) {
      iVar3 = *(int *)(param_1 + 0x54) * 0xf0;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x54) = iVar3 >> 8;
      iVar3 = *(int *)(param_1 + 0x58) * 0xf0;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x58) = iVar3 >> 8;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar3 = *(int *)(param_1 + 0x50) + -0x2f00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x50) + 0x2f00;
    }
    *(int *)(param_1 + 0x50) = iVar3;
    bVar1 = (*(byte *)(param_1 + 10) >> 5 ^ 1) & 1;
    *(byte *)(param_1 + 0x45) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_0800561C(param_1 + 0x74,&DAT_082b0270);
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xc2) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

