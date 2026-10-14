// sub_0805B7B4 at 0x0805B7B4 (thumb)

undefined4 sub_0805B7B4(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0805b8de;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    pbVar4 = (byte *)(param_1 + 0xbe);
    if (*pbVar4 == 0xff) {
      iVar5 = sub_0805C370(param_1);
      bVar1 = *(int *)(param_1 + 0x54) < iVar5 + 0x7800;
    }
    else {
      bVar1 = *pbVar4;
    }
    *pbVar4 = 0xff;
    uVar6 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (bVar1 == 0) {
      iVar5 = sub_0805C370(param_1);
      iVar5 = iVar5 + 0xd000;
    }
    else {
      iVar5 = sub_0805C370(param_1);
      iVar5 = iVar5 + 0x2000;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + -0xdfff;
    *(undefined4 *)(param_1 + 0x60) = 0x400;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4) + -0x47ff;
    *(undefined4 *)(param_1 + 100) = 0x4200;
    *(undefined *)(param_1 + 0x12) = 0x21;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    return in_lr;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0805b8de:
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
    sub_0805BF54(param_1);
  }
  else {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  return in_lr;
}

