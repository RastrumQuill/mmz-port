// sub_080A42D8 at 0x080A42D8 (thumb)

undefined4 sub_080A42D8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
    *(undefined *)(iVar4 + 0xd) = 6;
    *(undefined *)(iVar4 + 0xe) = 1;
    *(bool *)(iVar4 + 0xc4) = *(int *)(iVar4 + 0x4c) < *(int *)(iVar3 + 0x4c);
    pbVar2 = (byte *)(iVar4 + 0xc5);
    bVar1 = *pbVar2;
    *pbVar2 = (byte)(bVar1 - 1);
    if ((int)((bVar1 - 1) * 0x1000000) < 1) {
      *pbVar2 = 0;
    }
    else {
      if (DAT_02022b27 + -2 < 3) {
        DAT_02022b27 = '\x02';
      }
      else {
        DAT_02022b27 = DAT_02022b27 + -2;
      }
      if (DAT_0202365a == 0) {
        sub_080BC818(0xb0c,0x80);
      }
    }
  }
  return in_lr;
}

