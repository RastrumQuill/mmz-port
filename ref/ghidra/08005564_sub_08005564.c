// sub_08005564 at 0x08005564 (thumb)

void sub_08005564(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_02004fa4;
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

