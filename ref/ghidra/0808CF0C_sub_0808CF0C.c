// sub_0808CF0C at 0x0808CF0C (thumb)

undefined4 sub_0808CF0C(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = sub_08005458(DAT_0202300c);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 9) = 0x15;
    *(undefined4 *)(iVar3 + 0x14) = 0x808cff1;
    *(undefined2 *)(iVar3 + 0x1c) = DAT_0202303a;
    *(undefined *)(iVar3 + 0x1e) = DAT_020230d5;
    *(undefined *)(iVar3 + 0x10) = 0;
    *(int *)(iVar3 + 0x20) = param_1;
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar3;
    *(int *)(*(int *)(iVar3 + 0x24) + 0x20) = iVar3;
    *(undefined4 *)(iVar3 + 0x74) = param_2;
    iVar6 = *(int *)(param_1 + 0x4c);
    *(int *)(iVar3 + 0x4c) = iVar6;
    iVar5 = *(int *)(param_1 + 0x50);
    *(int *)(iVar3 + 0x50) = iVar5;
    uVar4 = *(byte *)(param_1 + 0x1f) + 0x40 & 0xff;
    sVar1 = (&DAT_080c8e24)[uVar4 + 0x40];
    sVar2 = (&DAT_080c8e24)[uVar4];
    iVar6 = iVar6 + sVar1 * 6;
    *(int *)(iVar3 + 0x4c) = iVar6;
    iVar5 = iVar5 + sVar2 * 6;
    *(int *)(iVar3 + 0x50) = iVar5;
    *(int *)(iVar3 + 0x5c) = iVar6;
    *(int *)(iVar3 + 0x60) = iVar5;
    iVar5 = *(int *)(iVar3 + 0x24);
    if (*(int *)(iVar3 + 0x24) != 0) {
      while (*(int *)(iVar5 + 0x24) != 0) {
        iVar6 = *(int *)(iVar5 + 0x4c) + sVar1 * 6;
        *(int *)(iVar5 + 0x4c) = iVar6;
        iVar3 = *(int *)(iVar5 + 0x50) + sVar2 * 6;
        *(int *)(iVar5 + 0x50) = iVar3;
        *(int *)(iVar5 + 0x5c) = iVar6;
        *(int *)(iVar5 + 0x60) = iVar3;
        iVar5 = *(int *)(iVar5 + 0x24);
      }
    }
  }
  return in_lr;
}

