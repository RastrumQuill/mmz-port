// sub_080C1EEC at 0x080C1EEC (thumb)

undefined4 sub_080C1EEC(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08348970;
    *(undefined2 *)(param_1 + 0x26) = 0x2c01;
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar2 = *(int *)(iVar4 + 0x54);
      iVar3 = 0x700;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x54);
      iVar3 = -0x700;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + -0xc00;
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

