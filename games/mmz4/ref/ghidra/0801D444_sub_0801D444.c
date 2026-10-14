// sub_0801D444 at 0x0801D444 (thumb)

undefined4 sub_0801D444(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = sub_08128A24(0x1360,0x14);
  for (iVar1 = iVar1 * 0x10000 + -0x10000; -1 < iVar1; iVar1 = (iVar1 + -1) * 0x10000) {
    iVar1 = iVar1 >> 0x10;
    (&DAT_0202e040)[iVar1] = (ushort)(&DAT_08c44006)[iVar1 * 10] >> 6;
    (&DAT_0202de40)[iVar1] = (ushort)(byte)(&DAT_08c44013)[iVar1 * 0x14];
  }
  uVar5 = 0xd0;
  uVar2 = 0xd00000;
  do {
    iVar1 = (int)uVar2 >> 0x10;
    iVar4 = iVar1 * 2;
    *(ushort *)(&DAT_0202e240 + iVar4) =
         *(ushort *)(&UNK_088cc006 + iVar1 * 4 + (&DAT_088cc000)[iVar1]) >> 6;
    if (iVar1 < 0x50) {
      *(undefined2 *)(&DAT_0202dc40 + iVar4) = 0;
    }
    else {
      if (iVar1 < 0x80) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ushort)(byte)(&UNK_088cc013)[iVar1 * 4 + (&DAT_088cc000)[iVar1]];
      }
      *(ushort *)(&DAT_0202dc40 + iVar4) = uVar3;
    }
    uVar2 = uVar5 * 0x10000 - 0x10000;
    uVar5 = uVar2 >> 0x10;
  } while (-1 < (int)uVar2);
  return in_lr;
}

