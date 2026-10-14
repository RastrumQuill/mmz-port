// sub_080D61FC at 0x080D61FC (thumb)

undefined4 sub_080D61FC(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_2 - 1 < 0x51) {
    pbVar2 = (byte *)(param_1 + (param_2 >> 3));
    bVar1 = (byte)(1 << (param_2 & 7));
    *pbVar2 = bVar1 | *pbVar2;
    pbVar2 = (byte *)(param_1 + 0xb + (param_2 >> 3));
    *pbVar2 = bVar1 | *pbVar2;
    iVar3 = (int)(char)(&DAT_0834a1d4)[param_2 * 0xc];
    if (iVar3 != -1) {
      *(undefined2 *)(param_1 + 0x22 + iVar3 * 2) = 0;
      *(undefined *)(param_1 + 0x48 + iVar3) = 0;
    }
  }
  return in_lr;
}

