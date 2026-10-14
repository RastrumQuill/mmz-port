// sub_08018908 at 0x08018908 (thumb)

undefined4 sub_08018908(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  DAT_020300d8 = (undefined4 *)0x0;
  iVar3 = 0x2f;
  puVar1 = &DAT_0202fe94;
  do {
    puVar2 = puVar1;
    *puVar2 = DAT_020300d8;
    DAT_020300d8 = puVar2;
    iVar3 = iVar3 + -1;
    puVar1 = puVar2 + 3;
  } while (-1 < iVar3);
  DAT_020300d4 = 0;
  DAT_020300e2 = 0x30;
  return in_lr;
}

