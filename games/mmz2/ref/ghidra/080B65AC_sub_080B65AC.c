// sub_080B65AC at 0x080B65AC (thumb)

undefined4 sub_080B65AC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 8 < uVar2)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) - 1;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar3 = sub_08008DE8(iVar4,iVar3 + 0x400);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x60) = -(*(int *)(param_1 + 0x60) >> 2);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) >> 1;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  return in_lr;
}

