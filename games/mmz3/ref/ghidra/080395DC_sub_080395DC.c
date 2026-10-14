// sub_080395DC at 0x080395DC (thumb)

undefined4 sub_080395DC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar1 + 0x54) - (int)*(short *)(&DAT_0835cbb8 + *(char *)(iVar1 + 0x71) * 4);
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x54) + (int)*(short *)(&DAT_0835cbb8 + *(char *)(iVar1 + 0x71) * 4);
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar1 + 0x58) + (int)*(short *)(&DAT_0835cbba + *(char *)(iVar1 + 0x71) * 4);
  return in_lr;
}

