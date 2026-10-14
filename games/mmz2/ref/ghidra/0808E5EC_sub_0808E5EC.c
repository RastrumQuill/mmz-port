// sub_0808E5EC at 0x0808E5EC (thumb)

undefined4 sub_0808E5EC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_080127E4(param_1,0x7608);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xb4) = 0;
    iVar6 = *(int *)(param_1 + 0x5c) >> 5;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    iVar6 = 0x15 - iVar6;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    *(char *)(param_1 + 0x13) = (char)iVar6;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08342070 + (uint)*(byte *)(param_1 + 0x12) * 2));
  cVar3 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == '\0') {
    iVar6 = *(int *)(param_1 + 0x5c) >> 5;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    iVar6 = 0x15 - iVar6;
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    *(char *)(param_1 + 0x13) = (char)iVar6;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (2 < bVar2) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar3 = sub_0808D814(param_1);
  if (cVar3 == '\x01') {
    if (0x100 < *(int *)(param_1 + 0x60)) {
      sub_080032EC(0x3e);
    }
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    cVar3 = *(char *)(param_1 + 0xb4) + '\x01';
    *(char *)(param_1 + 0xb4) = cVar3;
    if (cVar3 == '\x05') {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 2;
      return in_lr;
    }
  }
  uVar4 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),
                       (*(uint *)(param_1 + 0x58) & 0xffffff00) + 0x100);
  uVar4 = uVar4 & 0xf;
  if ((uVar4 == 1) && (*(int *)(param_1 + 0x5c) + 0x200U < 0x400)) {
    iVar6 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),
                         (*(uint *)(param_1 + 0x58) & 0xffffff00) + 0x100);
    if (iVar6 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    }
    uVar4 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),
                         (*(uint *)(param_1 + 0x58) & 0xffffff00) + 0x100);
    uVar4 = uVar4 & 0xf;
  }
  if (uVar4 < 0xe) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(&DAT_08341fe0 + uVar4 * 4);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(&DAT_08342018 + uVar4 * 4);
  }
  if ((uVar4 != 0) && (*(int *)(param_1 + 0x60) < 0x100)) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x100;
  }
  iVar6 = *(int *)(param_1 + 0x5c) * 0xfa;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar6 = iVar6 >> 8;
  *(int *)(param_1 + 0x5c) = iVar6;
  iVar5 = *(int *)(param_1 + 0x60) * 0xfa;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0xbc) < 1) {
      iVar6 = iVar6 + 0x60;
    }
    else {
      iVar6 = iVar6 + -0x60;
    }
    *(int *)(param_1 + 0x5c) = iVar6;
  }
  bVar1 = 0 < *(int *)(param_1 + 0x5c);
  *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0xc + (uint)bVar1 * 0x18;
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  sub_080128D4(param_1);
  return in_lr;
}

