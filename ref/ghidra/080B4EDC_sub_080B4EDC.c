// sub_080B4EDC at 0x080B4EDC (thumb)

undefined4 sub_080B4EDC(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((param_2 & 0xff) - 1 < 0x4e) {
    uVar3 = (param_2 << 0x18) >> 0x1b;
    pbVar2 = (byte *)(param_1 + uVar3);
    bVar1 = (byte)(1 << (param_2 & 7));
    *pbVar2 = bVar1 | *pbVar2;
    pbVar2 = (byte *)(param_1 + 10 + uVar3);
    *pbVar2 = bVar1 | *pbVar2;
    iVar4 = (int)(char)(&DAT_082b6ea4)[(param_2 & 0xff) * 0xc];
    if (iVar4 != -1) {
      *(undefined2 *)(param_1 + 0x1e + iVar4 * 2) = 0;
      *(undefined *)(param_1 + 0x46 + iVar4) = 0;
    }
  }
  return in_lr;
}

