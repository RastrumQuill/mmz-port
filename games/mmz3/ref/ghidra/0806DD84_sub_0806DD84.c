// sub_0806DD84 at 0x0806DD84 (thumb)

undefined4 sub_0806DD84(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_080070D8(DAT_020305e8);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0xc;
    *(undefined4 *)(iVar2 + 0x14) = 0x806de59;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(iVar2 + 0x28) = param_1;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined *)(iVar2 + 0x10) = uVar1;
  }
  return in_lr;
}

