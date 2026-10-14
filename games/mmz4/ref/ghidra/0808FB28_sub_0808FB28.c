// sub_0808FB28 at 0x0808FB28 (thumb)

undefined4 sub_0808FB28(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  iVar4 = (uVar2 * 2 >> 0x11 & 1) + 1;
  if (iVar4 != 0) {
    do {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080D0C00(*(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * 0x800 +
                   ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100,
                   *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 7) - 3) * 0x100,0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return in_lr;
}

