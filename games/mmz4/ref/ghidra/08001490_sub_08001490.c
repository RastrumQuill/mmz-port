// sub_08001490 at 0x08001490 (thumb)

undefined4 sub_08001490(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  puVar2 = &DAT_02000760;
  do {
    sub_080014B0(puVar2,iVar1);
    puVar2 = puVar2 + 0xc;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return in_lr;
}

