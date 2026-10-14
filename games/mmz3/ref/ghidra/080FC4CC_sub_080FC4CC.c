// sub_080FC4CC at 0x080FC4CC (thumb)

void sub_080FC4CC(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(byte *)(param_2 + 2) != 0) {
    iVar1 = *(byte *)(param_2 + 2) - 1;
    *(char *)(param_2 + 2) = (char)iVar1;
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + iVar1 * 4 + 0x44);
  }
  return;
}

