// sub_080C49E0 at 0x080C49E0 (thumb)

undefined4 sub_080C49E0(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 6) - 1;
  *(char *)(param_1 + 6) = (char)iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  return 1;
}

