// sub_080EDD38 at 0x080EDD38 (thumb)

undefined4 sub_080EDD38(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  DAT_02000388 = DAT_02000388 + 1;
  iVar4 = (short)(&DAT_080fe64c)[DAT_02000388] * 0x10 + 0x1400 >> 1;
  uVar1 = 0;
  do {
    (&DAT_020002c8)[(short)uVar1] = (&DAT_0838b7b4)[uVar5 >> 0xc];
    uVar5 = uVar5 + iVar4;
    uVar1 = (int)(short)uVar1 + 1U & 0xffff;
    iVar2 = uVar1 << 0x10;
    iVar3 = iVar2 >> 0x10;
  } while (iVar3 < 0x20);
  while (iVar3 < 0x40) {
    (&DAT_020002c8)[iVar2 >> 0x10] = (&DAT_0838b7b4)[uVar5 >> 0xc];
    uVar5 = uVar5 + (iVar4 * -0x20 + 0x40000U >> 5);
    iVar2 = ((iVar2 >> 0x10) + 1) * 0x10000;
    iVar3 = iVar2 >> 0x10;
  }
  uVar5 = 4;
  do {
    uVar1 = (uint)(short)uVar5;
    if (((int)(uint)DAT_020300fa >> (uVar1 & 0xff) & 1U) != 0) {
      sub_080EDE38(uVar1 * 0x20 + 0x5000200,0x10,0x1f001f,&DAT_020002c8);
    }
    uVar5 = uVar1 + 1 & 0xffff;
  } while ((int)((uVar1 + 1) * 0x10000) >> 0x10 < 10);
  sub_080EDE38(&DAT_05000240,0x10,0x1f001f,&DAT_020002c8);
  sub_080EDE38(&DAT_05000340,0x10,0x1f001f,&DAT_020002c8);
  sub_080EDE38(&DAT_05000040,0xe0,0x1f001f,&DAT_020002c8);
  return in_lr;
}

