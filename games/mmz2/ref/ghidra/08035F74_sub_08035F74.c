// sub_08035F74 at 0x08035F74 (thumb)

undefined8 sub_08035F74(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x58);
  iVar1 = sub_08035F38();
  return CONCAT44(in_lr,iVar2 + iVar1);
}

