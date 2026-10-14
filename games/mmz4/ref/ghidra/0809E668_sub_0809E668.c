// sub_0809E668 at 0x0809E668 (thumb)

undefined4 sub_0809E668(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  if (iVar2 < 0x200) {
    *(int *)(param_1 + 0x5c) = iVar1 + *(int *)(param_1 + 100);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

