// sub_080C762C at 0x080C762C (thumb)

undefined4 sub_080C762C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_080d2b5c;
  iVar1 = 0xe;
  do {
    sub_080C7400(*puVar2);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

