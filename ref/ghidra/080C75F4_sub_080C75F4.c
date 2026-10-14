// sub_080C75F4 at 0x080C75F4 (thumb)

undefined4 sub_080C75F4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_080d2b5c;
  iVar1 = 0xe;
  do {
    sub_080C7C90(*puVar2);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

