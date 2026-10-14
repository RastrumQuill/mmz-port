// sub_0808085C at 0x0808085C (thumb)

undefined4 sub_0808085C(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0;
  do {
    iVar2 = sub_080070D8(DAT_020305e8);
    uVar1 = (undefined)iVar5;
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x18;
      *(undefined *)(iVar2 + 9) = 0x26;
      *(undefined4 *)(iVar2 + 0x14) = 0x8080b9d;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined *)(iVar2 + 0x10) = 7;
      *(undefined *)(iVar2 + 0x11) = uVar1;
      *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) + -0x1700 + iVar5 * 0x2e00;
      *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + 0x400;
      *(int *)(iVar2 + 0x28) = param_1;
    }
    iVar4 = 0;
    iVar5 = iVar5 + 1;
    do {
      iVar3 = sub_0800710C(DAT_020305e8);
      iVar4 = iVar4 + 1;
      if (iVar3 != 0) {
        *(undefined *)(iVar3 + 0x25) = 0x18;
        *(undefined *)(iVar3 + 9) = 0x26;
        *(undefined4 *)(iVar3 + 0x14) = 0x8080b9d;
        *(undefined2 *)(iVar3 + 0x20) = 0;
        *(undefined *)(iVar3 + 0x22) = 0;
        *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
        *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
        *(undefined *)(iVar3 + 0x10) = 4;
        *(undefined *)(iVar3 + 0x11) = uVar1;
        *(int *)(iVar3 + 0x28) = param_1;
        *(int *)(iVar3 + 0x2c) = iVar2;
        *(char *)(iVar3 + 0x12) = (char)iVar4;
      }
    } while (iVar4 < 6);
  } while (iVar5 < 2);
  return in_lr;
}

