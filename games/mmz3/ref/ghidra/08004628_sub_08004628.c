// sub_08004628 at 0x08004628 (thumb)

undefined4 sub_08004628(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_0810bf34;
  iVar1 = 0xf;
  do {
    sub_080FDC44(*puVar2,0xffff,0x60);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

