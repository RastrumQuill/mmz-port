// sub_080A854C at 0x080A854C (thumb)

undefined4 sub_080A854C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_0809C980();
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar1 = *(int *)(iVar4 + 0x4c);
    iVar4 = iVar3 - iVar1;
    if (iVar4 < 0) {
      iVar4 = iVar1 - iVar3;
    }
    if (0x7000 < iVar4) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (8 < *(byte *)(iVar4 + 0xd)) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xffffff80;
    }
    else {
      uVar2 = 0x80;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  return in_lr;
}

