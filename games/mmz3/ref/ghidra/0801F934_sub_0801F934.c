// sub_0801F934 at 0x0801F934 (thumb)

undefined4 sub_0801F934(void)

{
  undefined uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0x17;
  puVar2 = &DAT_0203034b;
  do {
    *puVar2 = (char)iVar4;
    puVar2 = puVar2 + -1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  iVar4 = 0x1f;
  do {
    uVar3 = DAT_02030330 * 0x343fd + 0x269ec3;
    DAT_02030330 = uVar3 & 0x7fffffff;
    uVar1 = (&DAT_02030334)[uVar3 * 2 >> 0x11 & 7];
    (&DAT_02030334)[uVar3 * 2 >> 0x11 & 7] = DAT_02030334;
    iVar4 = iVar4 + -1;
    DAT_02030334 = uVar1;
  } while (-1 < iVar4);
  iVar4 = 0x1f;
  do {
    uVar3 = DAT_02030330 * 0x343fd + 0x269ec3;
    DAT_02030330 = uVar3 & 0x7fffffff;
    uVar1 = (&DAT_0203033c)[uVar3 * 2 >> 0x11 & 0xf];
    (&DAT_0203033c)[uVar3 * 2 >> 0x11 & 0xf] = DAT_0203033c;
    DAT_0203033c = uVar1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return in_lr;
}

