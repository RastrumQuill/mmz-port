// sub_080EAE24 at 0x080EAE24 (thumb)

undefined8 sub_080EAE24(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 6) - 1;
  *(char *)(param_1 + 6) = (char)iVar1;
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  return CONCAT44(in_lr,1);
}

