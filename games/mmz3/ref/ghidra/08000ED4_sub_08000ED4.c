// sub_08000ED4 at 0x08000ED4 (thumb)

ulonglong sub_08000ED4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_08000784();
  if ((&DAT_08000f24)[iVar1] == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)DAT_02000fe6;
  }
  return (ulonglong)CONCAT14((&DAT_08000f24)[iVar1] == -1,uVar2);
}

