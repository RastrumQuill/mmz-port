// sub_0800243C at 0x0800243C (thumb)

undefined4 sub_0800243C(void)

{
  short *psVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  psVar1 = &DAT_020008a0;
  puVar3 = &DAT_020008a0;
  iVar2 = 0xf;
  do {
    if (*psVar1 != 0) {
      puVar3[0x18] = 1;
    }
    puVar3 = puVar3 + 10;
    psVar1 = psVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}

