// sub_080A0FB4 at 0x080A0FB4 (thumb)

undefined4 sub_080A0FB4(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x1c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a1105;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(iVar1 + 0xb4) = *(undefined *)(param_1 + 0xb4);
    *(undefined *)(iVar1 + 0xb5) = *(undefined *)(param_1 + 0xb5);
    *(undefined *)(iVar1 + 0xb6) = *(undefined *)(param_1 + 0x12);
    *(undefined *)(iVar1 + 0x12) = param_2;
    *(int *)(iVar1 + 0x28) = param_1;
  }
  return in_lr;
}

