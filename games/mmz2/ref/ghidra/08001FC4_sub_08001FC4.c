// sub_08001FC4 at 0x08001FC4 (thumb)

undefined4 sub_08001FC4(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  puVar2 = &DAT_02000d10;
  do {
    sub_08001FE4(puVar2,iVar1);
    puVar2 = puVar2 + 0xc;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return in_lr;
}

