// sub_0802622C at 0x0802622C (thumb)

undefined4 sub_0802622C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  iVar2 = *(int *)(param_1 + 0x20);
  *(char *)(iVar2 + 0x124) = *(char *)(iVar2 + 0x124) + -1;
  iVar3 = 4;
  piVar1 = (int *)(iVar2 + 0xe8);
  do {
    piVar1 = piVar1 + -1;
    iVar3 = iVar3 + -1;
  } while (*piVar1 != param_1);
  *(undefined4 *)(iVar2 + 0xd8 + iVar3 * 4) = 0;
  return in_lr;
}

