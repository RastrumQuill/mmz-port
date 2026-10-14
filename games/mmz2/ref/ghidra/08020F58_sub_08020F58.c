// sub_08020F58 at 0x08020F58 (thumb)

undefined4
sub_08020F58(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int param_11;
  uint param_12;
  
  cVar1 = sub_08021010(param_1,param_2,param_5,param_6,param_7,param_8,param_12);
  if ((param_11 == 0) || (cVar1 != '\0')) {
    pbVar2 = (byte *)(param_4 + 0x74 + (param_12 >> 3));
    *pbVar2 = (byte)(1 << (param_12 & 7)) | *pbVar2;
    iVar3 = (&DAT_020011e0)[param_12 * 6] + (uint)(ushort)(&DAT_020011da)[param_12 * 0xc];
    uVar5 = (uint)*(byte *)(param_4 + 0x7b);
    if ((uVar5 == 0xff) || (*(int *)(param_3 + 4) < iVar3)) {
      *(int *)(param_3 + 4) = iVar3;
    }
    else {
      if (iVar3 != *(int *)(param_3 + 4)) {
        return in_lr;
      }
      iVar4 = *param_1 - (&DAT_020011dc)[param_12 * 6];
      iVar3 = *param_1 - (&DAT_020011dc)[uVar5 * 6];
      if (iVar3 * iVar3 <= iVar4 * iVar4) {
        return in_lr;
      }
    }
    *(byte *)(param_4 + 0x7b) = (byte)param_12;
  }
  return in_lr;
}

