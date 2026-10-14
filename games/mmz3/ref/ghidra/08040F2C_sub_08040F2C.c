// sub_08040F2C at 0x08040F2C (thumb)

undefined4 sub_08040F2C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    iVar3 = DAT_0202f5c0;
    piVar6 = (int *)(param_1 + 0xb8);
    *piVar6 = *(int *)(DAT_0202f5c0 + 0x54) + -0x3800;
    bVar2 = *(byte *)(param_1 + 0x12);
    if (0 < *(int *)(iVar3 + 0x54) - *(int *)(param_1 + 0x54)) {
      bVar2 = bVar2 ^ 1;
    }
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      if (bVar2 != 0) goto LAB_08040faa;
    }
    else if (bVar2 != 1) {
LAB_08040faa:
      iVar3 = *piVar6;
      if ((bVar1 & 0x10) == 0) {
        iVar3 = iVar3 + 0x7000;
      }
      *piVar6 = iVar3;
      sub_08017700(param_1,0xa408);
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08040fce;
    }
    iVar3 = *piVar6;
    if ((bVar1 & 0x10) != 0) {
      iVar3 = iVar3 + 0x7000;
    }
    *piVar6 = iVar3;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08041074(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
LAB_08040fce:
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = *(int *)(param_1 + 0xc0) - iVar4;
    if (iVar3 < 0) {
      *(int *)(param_1 + 0x58) = iVar4 + iVar3;
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08017700(param_1,0xa404);
      sub_080177F4(param_1);
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
      if (uVar5 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

