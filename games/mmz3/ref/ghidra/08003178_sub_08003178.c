// sub_08003178 at 0x08003178 (thumb)

undefined4 sub_08003178(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  puVar2 = &DAT_02002130;
  do {
    sub_08003198(puVar2,iVar1);
    puVar2 = puVar2 + 0xc;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return in_lr;
}

