// sub_080E8FA4 at 0x080E8FA4 (thumb)

undefined4 sub_080E8FA4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0202eda0;
  uVar3 = *(undefined4 *)(DAT_0202eda0 + 0xc);
  sub_080054C4(DAT_0202eda0);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    sub_08128898();
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return in_lr;
}

