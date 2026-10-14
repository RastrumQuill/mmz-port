// sub_080EBF9C at 0x080EBF9C (thumb)

undefined4 sub_080EBF9C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0xddc) - 1;
  *(byte *)(param_1 + 0xddc) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 3) = 2;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return in_lr;
}

