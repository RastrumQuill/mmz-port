// sub_0808B110 at 0x0808B110 (thumb)

undefined4 sub_0808B110(int param_1,undefined param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar1 & 0x7fffffff;
  iVar2 = sub_080FE4D8(uVar1 * 2 >> 0x11,0x6000);
  iVar4 = DAT_020302c4 + -0x7000;
  iVar3 = sub_0800710C(DAT_020305e8);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0x25) = 0x18;
    *(undefined *)(iVar3 + 9) = 0x34;
    *(undefined4 *)(iVar3 + 0x14) = 0x808b1f9;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined *)(iVar3 + 0x22) = 0;
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
    *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
    *(undefined *)(iVar3 + 0x10) = 0;
    *(int *)(iVar3 + 0x54) = param_1 + -0x3000 + iVar2;
    *(int *)(iVar3 + 0x58) = iVar4;
    *(int *)(iVar3 + 100) = param_1;
    *(undefined *)(iVar3 + 0x13) = param_2;
  }
  return in_lr;
}

