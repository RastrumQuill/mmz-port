// sub_08002A50 at 0x08002A50 (thumb)

undefined4 sub_08002A50(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_08138864;
  iVar1 = 0xe;
  do {
    sub_08128018(*puVar2,0xffff,0x100);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

