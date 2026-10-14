// sub_080369F0 at 0x080369F0 (thumb)

undefined4 sub_080369F0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 3;
  do {
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar3 = uVar1 & 0x7fffffff;
    DAT_02022890 = uVar3;
    iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x18);
    uVar1 = uVar3 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    sub_08095290(*(int *)(param_1 + 0x4c) + (iVar2 + -0xc) * 0x100,
                 *(int *)(param_1 + 0x50) + (-(uVar1 * 2 >> 0x11) & 0x1f) * -0x100);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return in_lr;
}

