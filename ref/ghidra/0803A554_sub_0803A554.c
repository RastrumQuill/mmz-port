// sub_0803A554 at 0x0803A554 (thumb)

undefined4 sub_0803A554(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 2;
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(undefined *)(param_1 + 0x45) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
  }
  sub_080297C0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar3 + 0x4c) + 0xd00;
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x4c) + -0xd00;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

