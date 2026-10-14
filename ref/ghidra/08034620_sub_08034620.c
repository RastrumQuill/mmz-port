// sub_08034620 at 0x08034620 (thumb)

undefined4 sub_08034620(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar4 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x4c) + -0xf000;
      iVar2 = *(int *)(param_1 + 0xb8);
    }
    uVar3 = sub_080C8AD0(iVar2 - iVar4,0x27);
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x40;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

