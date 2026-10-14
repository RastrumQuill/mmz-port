// sub_0805F798 at 0x0805F798 (thumb)

undefined4 sub_0805F798(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar1;
  iVar2 = *(int *)(param_1 + 0xb8);
  iVar1 = FUN_080fe2f8(iVar1 * (*(int *)(param_1 + 0xbc) - iVar2),*(undefined *)(param_1 + 0xb7));
  *(int *)(param_1 + 0x54) = iVar2 + iVar1;
  sub_080608EC(param_1);
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (*(int *)(*(int *)(param_1 + 0x2c) + 0x58) + -0x80 <= *(int *)(param_1 + 0x58))) {
    *(undefined2 *)(param_1 + 0xe) = 4;
    sub_0805F7E8(param_1);
  }
  return in_lr;
}

