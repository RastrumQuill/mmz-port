// sub_08003470 at 0x08003470 (thumb)

undefined4 sub_08003470(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  iVar1 = sub_08000A70(0x200);
  piVar2 = (int *)(param_1 + 0x200);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    *piVar2 = param_1;
  }
  local_14[0] = 0;
  sub_081284E4(local_14,*piVar2,0x1000080);
  return in_lr;
}

