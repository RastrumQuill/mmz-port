// sub_08039B20 at 0x08039B20 (thumb)

undefined4 sub_08039B20(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 10;
    bVar1 = *(byte *)(iVar4 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_08001EAC(0x91);
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar4 + 0x4c) + ((uint)*(byte *)(param_1 + 0x12) * -2 + 0x26) * 0x100;
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x4c) + ((uint)*(byte *)(param_1 + 0x12) * -2 + 0x26) * -0x100;
    }
    *(int *)(param_1 + 0x4c) = iVar3;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 2;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar4 + 0x4c) + 0x2600;
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x4c) + -0x2600;
    }
    *(int *)(param_1 + 0x4c) = iVar3;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  sub_080297C0(param_1);
  return in_lr;
}

