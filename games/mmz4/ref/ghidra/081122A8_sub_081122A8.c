// sub_081122A8 at 0x081122A8 (thumb)

undefined4 sub_081122A8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  DAT_02000110 = DAT_02000110 + 1;
  iVar4 = (short)(&DAT_08128c10)[DAT_02000110] * 0x10 + 0x1400 >> 1;
  uVar1 = 0;
  do {
    (&DAT_02000050)[(short)uVar1] = (&DAT_08885c70)[uVar5 >> 0xc];
    uVar5 = uVar5 + iVar4;
    uVar1 = (int)(short)uVar1 + 1U & 0xffff;
    iVar2 = uVar1 << 0x10;
    iVar3 = iVar2 >> 0x10;
  } while (iVar3 < 0x20);
  while (iVar3 < 0x40) {
    (&DAT_02000050)[iVar2 >> 0x10] = (&DAT_08885c70)[uVar5 >> 0xc];
    uVar5 = uVar5 + (iVar4 * -0x20 + 0x40000U >> 5);
    iVar2 = ((iVar2 >> 0x10) + 1) * 0x10000;
    iVar3 = iVar2 >> 0x10;
  }
  uVar5 = 4;
  do {
    uVar1 = (uint)(short)uVar5;
    if (((int)(uint)DAT_0202e8a6 >> (uVar1 & 0xff) & 1U) != 0) {
      sub_081123A8(uVar1 * 0x20 + 0x5000200,0x10,0x1f001f,&DAT_02000050);
    }
    uVar5 = uVar1 + 1 & 0xffff;
  } while ((int)((uVar1 + 1) * 0x10000) >> 0x10 < 10);
  sub_081123A8(&DAT_05000240,0x10,0x1f001f,&DAT_02000050);
  sub_081123A8(&DAT_05000340,0x10,0x1f001f,&DAT_02000050);
  sub_081123A8(&DAT_05000040,0xe0,0x1f001f,&DAT_02000050);
  return in_lr;
}

