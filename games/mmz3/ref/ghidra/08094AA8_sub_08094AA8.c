// sub_08094AA8 at 0x08094AA8 (thumb)

undefined8 sub_08094AA8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x54) + -0xe00;
  if (0 < param_2) {
    iVar2 = *(int *)(param_1 + 0x54) + 0xe00;
  }
  sVar1 = sub_08009A3C(iVar2,*(int *)(param_1 + 0x58) + 0xa00);
  return CONCAT44(in_lr,(uint)(sVar1 != 0));
}

