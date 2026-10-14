// sub_08020D28 at 0x08020D28 (thumb)

undefined4
sub_08020D28(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11_00,int param_11,uint param_12)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  cVar1 = sub_08020E04(param_1,param_2,param_5,param_6,param_7,param_8,param_10,param_12);
  if ((param_11 == 0) || (cVar1 != '\0')) {
    pbVar3 = (byte *)(param_4 + 0x70 + (param_12 >> 3));
    *pbVar3 = (byte)(1 << (param_12 & 7)) | *pbVar3;
    uVar2 = sub_0801F3D0(*(undefined4 *)(param_4 + 0x84));
    if (param_12 != (uVar2 & 0xff)) {
      iVar4 = ((&DAT_020011e0)[param_12 * 6] + 1) - (uint)(ushort)(&DAT_020011da)[param_12 * 0xc];
      pbVar3 = (byte *)(param_4 + 0x7a);
      if ((*pbVar3 == 0xff) || (iVar4 < *(int *)(param_3 + 4))) {
        *(int *)(param_3 + 4) = iVar4;
        *pbVar3 = (byte)param_12;
      }
      else if ((iVar4 == *(int *)(param_3 + 4)) &&
              (iVar5 = *param_1 - (&DAT_020011dc)[param_12 * 6],
              iVar4 = *param_1 - (&DAT_020011dc)[(uint)*pbVar3 * 6], iVar5 * iVar5 < iVar4 * iVar4))
      {
        *pbVar3 = (byte)param_12;
      }
    }
  }
  else {
    sub_08020F28(param_4,param_12,param_11);
  }
  return in_lr;
}

