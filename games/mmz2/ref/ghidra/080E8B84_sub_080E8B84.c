// sub_080E8B84 at 0x080E8B84 (thumb)

undefined8 sub_080E8B84(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 6) - 1;
  *(char *)(param_1 + 6) = (char)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 2) = 2;
    sub_080DA938(param_1,2);
  }
  return CONCAT44(in_lr,1);
}

