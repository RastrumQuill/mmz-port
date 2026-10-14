// sub_0801CF08 at 0x0801CF08 (thumb)

undefined4 sub_0801CF08(undefined *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 == '\x01') {
    iVar2 = 4;
    do {
      iVar1 = iVar2 + -1;
      param_1[iVar2 + 3] = 0x1e;
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
  else {
    iVar2 = 4;
    do {
      iVar1 = iVar2 + -1;
      param_1[iVar2 + 3] = 0;
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return in_lr;
}

