// sub_080726C8 at 0x080726C8 (thumb)

undefined4 sub_080726C8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  byte local_20 [4];
  int local_1c;
  undefined4 local_18;
  
  sub_08128B5C(local_20,&DAT_08129275,3);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x12a);
    sub_080735E0(param_1,0x13);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = sub_08073704(param_1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      sub_080738E8(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x60)) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(short *)(param_1 + 0x12) == 0)) {
    iVar2 = (bVar1 >> 4 & 1) * 2;
    local_1c = *(int *)(param_1 + 0x54) + (iVar2 + -1) * 0x1000;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    iVar3 = 0;
    do {
      sub_080CB508(param_1,&local_1c,
                   (uint)local_20[iVar3] + iVar2 * (0x140 - (uint)local_20[iVar3]) & 0xff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

