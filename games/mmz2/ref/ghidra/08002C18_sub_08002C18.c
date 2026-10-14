// sub_08002C18 at 0x08002C18 (thumb)

undefined4 sub_08002C18(void)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  puVar1 = &DAT_02000e4f;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while (0x2000e3f < (int)puVar1);
  return in_lr;
}

