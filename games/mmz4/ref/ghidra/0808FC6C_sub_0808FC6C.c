// sub_0808FC6C at 0x0808FC6C (thumb)

undefined4 sub_0808FC6C(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  for (iVar3 = (uVar1 * 2 >> 0x11 & 1) + 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    sub_080D0C00(*(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100,
                 *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100,0);
  }
  return in_lr;
}

