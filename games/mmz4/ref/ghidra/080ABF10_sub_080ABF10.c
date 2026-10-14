// sub_080ABF10 at 0x080ABF10 (thumb)

undefined4 sub_080ABF10(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08005784(param_1 + 0x74,&DAT_0885f760);
  iVar1 = DAT_0202dbf0;
  *(int *)(param_1 + 0xb4) = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0xb8) = *(int *)(iVar1 + 0x58) - *(int *)(param_1 + 0x58);
  return in_lr;
}

