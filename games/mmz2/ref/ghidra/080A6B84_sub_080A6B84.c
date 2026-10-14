// sub_080A6B84 at 0x080A6B84 (thumb)

undefined4 sub_080A6B84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar2 = 0;
  do {
    iVar1 = sub_08006B50(DAT_0202f07c);
    iVar2 = iVar2 + 1;
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 8;
      *(undefined *)(iVar1 + 9) = 0x2d;
      *(undefined4 *)(iVar1 + 0x14) = 0x80a6ca9;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
      *(undefined4 *)(iVar1 + 0xb8) = 0x4000;
      *(undefined *)(iVar1 + 0x10) = 1;
      *(bool *)(iVar1 + 0x11) = iVar2 == 2;
      *(int *)(iVar1 + 0x28) = param_1;
      *(int *)(iVar1 + 0x2c) = iVar3;
      *(undefined *)(iVar1 + 0xb5) = *(undefined *)(param_1 + 0xb5);
      *(undefined *)(iVar1 + 0xb6) = 0;
      param_1 = iVar1;
    }
  } while (iVar2 < 2);
  return in_lr;
}

