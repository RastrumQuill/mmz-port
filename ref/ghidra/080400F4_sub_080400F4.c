// sub_080400F4 at 0x080400F4 (thumb)

undefined4 sub_080400F4(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x11);
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x12);
    if (uVar2 != 0) {
      iVar4 = 0;
      iVar3 = *(int *)(param_1 + 0x50);
      do {
        iVar4 = iVar4 + 8;
        iVar3 = iVar3 - iVar4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      *(int *)(param_1 + 0x50) = iVar3;
      *(int *)(param_1 + 0x58) = iVar4;
    }
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -8;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

