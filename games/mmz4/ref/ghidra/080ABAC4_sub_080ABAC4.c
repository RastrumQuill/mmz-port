// sub_080ABAC4 at 0x080ABAC4 (thumb)

undefined4 sub_080ABAC4(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 8);
  pcVar2 = (char *)(iVar1 + 0xbe);
  *pcVar2 = *pcVar2 + '\x01';
  sub_08128888(param_1,param_2,*(undefined4 *)(&DAT_0885f738 + (uint)*(byte *)(iVar1 + 0xbc) * 4));
  return in_lr;
}

