// sub_0808BE74 at 0x0808BE74 (thumb)

undefined4 sub_0808BE74(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0;
  do {
    iVar1 = sub_08005458(DAT_0202300c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 9) = 0x10;
      *(undefined4 *)(iVar1 + 0x14) = 0x808bf41;
      *(undefined2 *)(iVar1 + 0x1c) = DAT_02023030;
      *(undefined *)(iVar1 + 0x1e) = DAT_020230d0;
      *(undefined *)(iVar1 + 0x10) = 0;
      uVar2 = 0;
      if (iVar5 == 0) {
        uVar2 = param_3 & 1;
      }
      *(char *)(iVar1 + 0x11) = (char)uVar2;
      if (uVar2 != 0) {
        *(undefined4 *)(iVar1 + 0x74) = param_1;
        *(undefined4 *)(iVar1 + 0x78) = param_2;
      }
      iVar4 = 0x200 - (((param_3 & 0xff ^ 1) << 0x18) >> 0x12);
      iVar3 = iVar4 * (short)(&DAT_080c8ea4)[iVar5 * 0x20];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(iVar1 + 0x54) = iVar3 >> 8;
      iVar4 = iVar4 * (short)(&DAT_080c8e24)[iVar5 * 0x20];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(iVar1 + 0x58) = iVar4 >> 8;
      *(undefined4 *)(iVar1 + 0x4c) = param_1;
      *(undefined4 *)(iVar1 + 0x50) = param_2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return in_lr;
}

