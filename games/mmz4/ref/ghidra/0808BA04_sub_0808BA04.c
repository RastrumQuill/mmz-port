// sub_0808BA04 at 0x0808BA04 (thumb)

undefined4 sub_0808BA04(int param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar3 = (*(int *)(param_1 + 0xb4) - iVar4) + 0x4000;
  if (0x8000 < uVar3) {
    iVar4 = *(int *)(param_1 + 0xb4) + (uint)*(byte *)(param_1 + 0xb8) * 0x8000 + -0x4000;
  }
  iVar6 = iVar4 + ((uint)(0 < *(int *)(param_1 + 0x5c)) * 2 + -1) * 0x1000;
  sVar2 = sub_08007C7C(iVar6,*(int *)(param_1 + 0x58) + 1);
  if (sVar2 == 0) {
    iVar4 = *(int *)(param_1 + 0x54);
  }
  bVar1 = sVar2 == 0 || 0x8000 < uVar3;
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  sVar2 = sub_08007C7C(iVar6,uVar5);
  if (sVar2 != 0) {
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar4 = sub_08008988(iVar6,uVar5);
      iVar6 = 0x1000;
    }
    else {
      iVar4 = sub_08008868(iVar6,uVar5);
      iVar6 = -0x1000;
    }
    iVar4 = iVar4 + iVar6;
    bVar1 = true;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  if (bVar1) {
    sub_0808B9EC(param_1,*(char *)(param_1 + 0xb8) + 1U & 1);
  }
  return in_lr;
}

