// sub_0805F658 at 0x0805F658 (thumb)

undefined4 sub_0805F658(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_08060768(param_1,5);
  }
  return in_lr;
}

