// sub_080C4F4C at 0x080C4F4C (thumb)

void sub_080C4F4C(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x9e8) - 1;
  *(byte *)(param_1 + 0x9e8) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 3) = 2;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}

