// sub_080FCE18 at 0x080FCE18 (thumb)

undefined4 sub_080FCE18(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_0810bf34;
  iVar1 = 0xf;
  do {
    sub_080FD4B4(*puVar2);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

