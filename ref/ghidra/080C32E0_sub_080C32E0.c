// sub_080C32E0 at 0x080C32E0 (thumb)

undefined8 sub_080C32E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 6) - 1;
  *(char *)(param_1 + 6) = (char)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 2) = 2;
    sub_080B98D0(param_1,*(undefined *)(param_1 + 4));
  }
  return CONCAT44(in_lr,1);
}

