// sub_08035C34 at 0x08035C34 (thumb)

undefined4 sub_08035C34(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08035BD8(param_2);
  if (*(char *)(iVar1 + 4) == 0) {
    sub_0801E9FC(param_1);
  }
  else {
    sub_0801EA38(param_1,(int)*(char *)(iVar1 + 2),*(char *)(iVar1 + 4) + -1,1);
  }
  return in_lr;
}

