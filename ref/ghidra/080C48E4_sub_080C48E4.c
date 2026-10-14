// sub_080C48E4 at 0x080C48E4 (thumb)

undefined4 sub_080C48E4(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 6) - 1;
  *(char *)(param_1 + 6) = (char)iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 2) = 1;
  }
  return 1;
}

