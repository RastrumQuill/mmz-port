// sub_0808E488 at 0x0808E488 (thumb)

undefined4 sub_0808E488(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(iVar5 + 0x54);
  iVar4 = *(int *)(iVar5 + 0x58);
  iVar2 = *(int *)(*(int *)(iVar5 + 100) + 0x58);
  iVar6 = bVar1 + 2;
  iVar5 = FUN_081288bc(iVar6 * (*(int *)(*(int *)(iVar5 + 100) + 0x54) - iVar3),6);
  *(int *)(param_1 + 0x54) = iVar5 + iVar3;
  iVar5 = FUN_081288bc(iVar6 * (iVar2 - iVar4),6);
  *(int *)(param_1 + 0x58) = iVar5 + iVar4;
  return in_lr;
}

