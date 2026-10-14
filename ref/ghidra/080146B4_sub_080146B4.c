// sub_080146B4 at 0x080146B4 (thumb)

void sub_080146B4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    *(int *)(param_1 + 0x154) = 0;
  }
  return;
}

