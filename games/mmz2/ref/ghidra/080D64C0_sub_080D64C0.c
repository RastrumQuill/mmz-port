// sub_080D64C0 at 0x080D64C0 (thumb)

undefined4 sub_080D64C0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x58);
  *param_2 = *(int *)(param_1 + 0x54);
  param_2[1] = iVar2;
  iVar2 = (int)*(short *)(param_3 + 4);
  iVar1 = (int)*(short *)(param_3 + 6);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = -iVar2;
  }
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar1 = -iVar1;
  }
  *param_2 = *param_2 + iVar2;
  param_2[1] = param_2[1] + iVar1;
  return in_lr;
}

