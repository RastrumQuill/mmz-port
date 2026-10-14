// sub_08003F54 at 0x08003F54 (thumb)

undefined4 sub_08003F54(void)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  puVar1 = &DAT_0200227e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while (0x200225f < (int)puVar1);
  return in_lr;
}

