// sub_08037B24 at 0x08037B24 (thumb)

undefined8 sub_08037B24(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080312EC(param_1 + 0x1fc);
  if (iVar1 < 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + iVar1 + 0x206;
  }
  return CONCAT44(in_lr,param_1);
}

