// sub_08035F60 at 0x08035F60 (thumb)

undefined8 sub_08035F60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x54);
  iVar1 = sub_08035F20();
  return CONCAT44(in_lr,iVar2 + iVar1);
}

