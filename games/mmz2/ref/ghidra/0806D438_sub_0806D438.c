// sub_0806D438 at 0x0806D438 (thumb)

undefined4 sub_0806D438(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  undefined uVar6;
  undefined4 in_lr;
  
  uVar4 = *(uint *)(param_1 + 0x8c);
  if ((uVar4 & 0x200) == 0) {
    iVar2 = sub_08065A24(param_1);
    if (iVar2 == 0) {
      pbVar5 = (byte *)(param_1 + 0xb5);
      *pbVar5 = *pbVar5 & 6;
      piVar3 = (int *)(param_1 + 0xc0);
      if ((*piVar3 != 0) && (iVar2 = sub_0801E4D8(*piVar3), iVar2 != 0)) {
        *piVar3 = 0;
      }
      if ((*pbVar5 & 2) == 0) {
        if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*piVar3 == 0)) {
          iVar2 = sub_0801E11C(0,param_1,&DAT_0833e6bc);
          *piVar3 = iVar2;
          if (iVar2 != 0) {
            sub_08006E08(param_1 + 0x74,&DAT_0833e6f4);
            *(undefined *)(param_1 + 0xd) = 1;
            *(undefined4 *)(param_1 + 0x60) = 0;
            *pbVar5 = *pbVar5 | 4;
          }
        }
        if (*(char *)(param_1 + 0xd) == '\0') {
          sub_080128D4(param_1);
          iVar2 = sub_080EF150(0x240,1 << *(sbyte *)(param_1 + 0x10));
          iVar2 = (uint)*(ushort *)(param_1 + 0xbe) + iVar2;
          *(ushort *)(param_1 + 0xbe) = (ushort)iVar2;
          iVar2 = (int)(short)(&DAT_080ef450)[(uint)(iVar2 * 0x10000) >> 0x18] *
                  (uint)*(ushort *)(param_1 + 0xbc);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xff;
          }
          *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (iVar2 >> 8) & 0xffffff00;
        }
        else {
          sub_08012ACC(param_1);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
          iVar2 = *(int *)(param_1 + 0x60) + 0x40;
          *(int *)(param_1 + 0x60) = iVar2;
          if (0x700 < iVar2) {
            *(undefined4 *)(param_1 + 0x60) = 0x700;
          }
          sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          if (sVar1 != 0) {
            if (*piVar3 == 0) {
              *(undefined *)(param_1 + 0xd) = 0;
              *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
              *(undefined2 *)(param_1 + 0xbe) = 0;
              *pbVar5 = *pbVar5 | 4;
            }
            else {
              *(undefined4 *)(param_1 + 0xc) = 2;
              *(undefined4 *)(param_1 + 0x14) =
                   *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
              *(undefined *)(param_1 + 0xd) = 0;
              *(undefined *)(param_1 + 0xe) = 0;
              *(uint *)(param_1 + 0x8c) = 0;
              *(undefined4 *)(param_1 + 0x90) = 0;
              *(undefined *)(param_1 + 0x94) = 0;
              *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
              sub_0806D648(param_1);
            }
          }
        }
      }
    }
    else {
      *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) | 1;
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(int *)(param_1 + 0xc0) = 0;
        sub_08006E08(param_1 + 0x74,&DAT_0833e6c4);
      }
    }
  }
  else {
    if ((uVar4 & 0x10000) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      if ((uVar4 & 0x8000) != 0) {
        uVar6 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = uVar6;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0806D648(param_1);
  }
  return in_lr;
}

