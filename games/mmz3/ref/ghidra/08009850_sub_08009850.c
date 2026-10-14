// sub_08009850 at 0x08009850 (thumb)

undefined4 sub_08009850(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(&DAT_08336ac0 + (DAT_02002650 & 0x7f) * 4);
  sub_080FE2C0(param_2,*(undefined4 *)(*(int *)(iVar3 + 4) + 8));
  iVar2 = 0;
  iVar1 = 2;
  do {
    *(undefined4 *)((int)&DAT_020024cc + iVar2) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((int)&DAT_020024d0 + iVar2) = *(undefined4 *)(param_2 + 0x14);
    if (1 < *(uint *)((int)&DAT_020024a4 + iVar2)) {
      sub_080FE2C4((int)&DAT_020024a0 + iVar2,iVar3);
    }
    iVar2 = iVar2 + 0x88;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  sub_08003B28(&DAT_0202e4a4,((ushort)(&DAT_020023c4)[DAT_020024fc >> 4] & 0x1f00) << 3,0x1000);
  DAT_0202e482 = 0;
  return in_lr;
}

