// sub_0809AF48 at 0x0809AF48 (thumb)

undefined4 sub_0809AF48(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xb7) = 1;
    sub_08005784(param_1 + 0x74,&DAT_0885db28);
    sub_0801CF00(param_1,0x6402);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined4 *)(param_1 + 100) = 400;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x1ffe < (*(int *)(param_1 + 0x68) - iVar2) + 0xfffU) {
    if (*(int *)(param_1 + 0x60) < 0) {
      iVar2 = -0x1000;
    }
    else {
      iVar2 = 0x1000;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar2;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
  }
  uVar3 = *(uint *)(param_1 + 100);
  if ((int)uVar3 < 0x3c) {
    if ((uVar3 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_0809B154(param_1);
  }
  return in_lr;
}

