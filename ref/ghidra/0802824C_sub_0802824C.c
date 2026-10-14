// sub_0802824C at 0x0802824C (thumb)

undefined4 sub_0802824C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = sub_080280FC();
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 0x20) {
    pbVar5 = (byte *)(iVar4 + 0x62);
    if (*pbVar5 == 0) {
      if ((*(ushort *)(param_1 + 0x90) & 0x220) == 0) {
        bVar2 = *(byte *)(param_1 + 10);
        iVar4 = 3;
        do {
          iVar4 = iVar4 + -1;
          iVar6 = ((uint)bVar1 * 3 + iVar4) * 4;
          bVar3 = sub_080079CC((int)*(short *)(&DAT_082ac590 + iVar6) * ((bVar2 >> 4 & 1) * 2 + -1)
                               + *(int *)(param_1 + 0x4c),
                               (int)*(short *)(&DAT_082ac592 + iVar6) + *(int *)(param_1 + 0x50));
          if (iVar4 == 0) break;
        } while ((bVar3 == 0) || ((bVar3 & 0x80) != 0));
        if (bVar3 == 0) {
          return in_lr;
        }
        if ((bVar3 & 0x80) != 0) {
          return in_lr;
        }
      }
      sub_08001EAC(4);
      *pbVar5 = *pbVar5 | 1;
    }
  }
  else if ((*(ushort *)(param_1 + 0x90) & 0x220) == 0) {
    *(byte *)(iVar4 + 0x62) = (byte)*(ushort *)(param_1 + 0x90) & 0x20;
  }
  else {
    pbVar5 = (byte *)(iVar4 + 0x62);
    if (*pbVar5 == 0) {
      sub_08001EAC(4);
      *pbVar5 = *pbVar5 | 1;
    }
  }
  return in_lr;
}

