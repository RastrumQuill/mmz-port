// sub_0803A970 at 0x0803A970 (thumb)

undefined4 sub_0803A970(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202ed88;
  sub_080054C4(DAT_0202ed88);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    sub_08128898();
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return in_lr;
}

