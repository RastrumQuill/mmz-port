// sub_080C6150 at 0x080C6150 (thumb)

void sub_080C6150(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x9e7) - 1;
  *(byte *)(param_1 + 0x9e7) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 3) = 2;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}

