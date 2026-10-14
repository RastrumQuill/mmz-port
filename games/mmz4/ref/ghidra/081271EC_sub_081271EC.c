// sub_081271EC at 0x081271EC (thumb)

undefined4 sub_081271EC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_08138864;
  iVar1 = 0xe;
  do {
    sub_08127888(*puVar2);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

