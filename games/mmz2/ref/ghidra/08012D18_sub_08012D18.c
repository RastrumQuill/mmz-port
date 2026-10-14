// sub_08012D18 at 0x08012D18 (thumb)

undefined4 sub_08012D18(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = sub_080EF2B8(0x1220,0x14);
  for (iVar1 = iVar1 * 0x10000 + -0x10000; -1 < iVar1; iVar1 = (iVar1 + -1) * 0x10000) {
    iVar1 = iVar1 >> 0x10;
    (&DAT_0202e590)[iVar1] = (ushort)(&DAT_08432d06)[iVar1 * 10] >> 6;
    (&DAT_0202e390)[iVar1] = (ushort)(byte)(&DAT_08432d13)[iVar1 * 0x14];
  }
  uVar5 = 200;
  uVar2 = 0xc80000;
  do {
    iVar1 = (int)uVar2 >> 0x10;
    iVar4 = iVar1 * 2;
    *(ushort *)(&DAT_0202e790 + iVar4) =
         *(ushort *)(&UNK_084cc686 + iVar1 * 4 + (&DAT_084cc680)[iVar1]) >> 6;
    if (iVar1 < 0x50) {
      *(undefined2 *)(&DAT_0202e190 + iVar4) = 0;
    }
    else {
      if (iVar1 < 0x90) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ushort)(byte)(&UNK_084cc693)[iVar1 * 4 + (&DAT_084cc680)[iVar1]];
      }
      *(ushort *)(&DAT_0202e190 + iVar4) = uVar3;
    }
    uVar2 = uVar5 * 0x10000 - 0x10000;
    uVar5 = uVar2 >> 0x10;
  } while (-1 < (int)uVar2);
  return in_lr;
}

