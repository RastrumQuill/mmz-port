// sub_08017C40 at 0x08017C40 (thumb)

undefined4 sub_08017C40(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = sub_080FE460(0x13d8,0x14);
  for (iVar1 = iVar1 * 0x10000 + -0x10000; -1 < iVar1; iVar1 = (iVar1 + -1) * 0x10000) {
    iVar1 = iVar1 >> 0x10;
    (&DAT_0202fa10)[iVar1] = (ushort)(&DAT_085d78fe)[iVar1 * 10] >> 6;
    (&DAT_0202f810)[iVar1] = (ushort)(byte)(&DAT_085d790b)[iVar1 * 0x14];
  }
  uVar5 = 199;
  uVar2 = 0xc70000;
  do {
    iVar1 = (int)uVar2 >> 0x10;
    iVar4 = iVar1 * 2;
    *(ushort *)(&DAT_0202fc10 + iVar4) =
         *(ushort *)(&UNK_083b8c92 + iVar1 * 4 + (&DAT_083b8c8c)[iVar1]) >> 6;
    if (iVar1 < 0x50) {
      *(undefined2 *)(&DAT_0202f610 + iVar4) = 0;
    }
    else {
      if (iVar1 < 0x90) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ushort)(byte)(&UNK_083b8c9f)[iVar1 * 4 + (&DAT_083b8c8c)[iVar1]];
      }
      *(ushort *)(&DAT_0202f610 + iVar4) = uVar3;
    }
    uVar2 = uVar5 * 0x10000 - 0x10000;
    uVar5 = uVar2 >> 0x10;
  } while (-1 < (int)uVar2);
  return in_lr;
}

