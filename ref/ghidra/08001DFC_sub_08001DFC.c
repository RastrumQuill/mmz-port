// sub_08001DFC at 0x08001DFC (thumb)

undefined4 sub_08001DFC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = &DAT_080d2b5c;
  iVar1 = 0xe;
  do {
    sub_080C8420(*puVar2,0xffff,0x100);
    puVar2 = puVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

