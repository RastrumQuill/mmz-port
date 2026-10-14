// sub_080D085C at 0x080D085C (thumb)

undefined4 sub_080D085C(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0202ed9c;
  sub_080054C4(DAT_0202ed9c);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
  *(int *)(iVar1 + 0xc) = iVar2;
  while (iVar2 != iVar1 + 0x14) {
    sub_08128898();
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 4);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return in_lr;
}

