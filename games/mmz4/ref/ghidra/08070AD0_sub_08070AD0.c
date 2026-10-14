// sub_08070AD0 at 0x08070AD0 (thumb)

undefined4 sub_08070AD0(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar2 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(uint *)(param_1 + 0x5c) = ((bVar1 & 1) * 2 + -1) * -0x100;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd40;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) < 0) {
    iVar3 = sub_08073704(param_1);
    if (iVar3 != 0) {
      sub_080738E8(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    iVar3 = sub_0807376C(param_1);
    if (iVar3 != 0) {
      sub_08073984(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
      bVar2 = true;
    }
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((bVar1 & 1) == 0) {
    iVar3 = sub_08073638(param_1);
    if (iVar3 != 0) {
      sub_080737D0(param_1);
    }
  }
  else {
    iVar3 = sub_080736A0(param_1);
    if (iVar3 != 0) {
      sub_0807385C(param_1);
    }
  }
  if (bVar2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

