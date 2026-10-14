// sub_08002A1C at 0x08002A1C (thumb)

undefined4 sub_08002A1C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_08138864;
  iVar1 = 0xe;
  do {
    sub_08128018(*puVar2,0xffff,0x60);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

