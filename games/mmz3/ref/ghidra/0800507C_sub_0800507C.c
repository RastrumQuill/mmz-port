// sub_0800507C at 0x0800507C (thumb)

undefined4 sub_0800507C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  iVar1 = sub_08001B60(0x200);
  piVar2 = (int *)(param_1 + 0x200);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    *piVar2 = param_1;
  }
  local_14[0] = 0;
  sub_080FE110(local_14,*piVar2,0x1000080);
  return in_lr;
}

