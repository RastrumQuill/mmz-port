// sub_0810CED4 at 0x0810CED4 (thumb)

undefined4 sub_0810CED4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  DAT_0202f350 = (undefined4 *)0x0;
  iVar4 = 0x4f;
  sVar3 = 0x37e;
  puVar1 = &DAT_0202f340;
  do {
    puVar2 = puVar1;
    *(short *)((int)puVar2 + 6) = sVar3;
    *puVar2 = DAT_0202f350;
    DAT_0202f350 = puVar2;
    sVar3 = sVar3 + -2;
    iVar4 = iVar4 + -1;
    puVar1 = puVar2 + -2;
  } while (-1 < iVar4);
  DAT_0202f348 = 0;
  DAT_0202f34c = 0;
  DAT_0202edc4 = 0;
  return in_lr;
}

