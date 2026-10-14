// sub_08110D58 at 0x08110D58 (thumb)

undefined4 sub_08110D58(int param_1)

{
  byte bVar1;
  sbyte sVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 in_lr;
  undefined4 local_70 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30 [2];
  undefined4 local_28;
  int local_24;
  
  local_70[0] = 1;
  local_70[1] = 0;
  local_70[2] = 3;
  local_70[3] = 2;
  uStack_60 = 5;
  uStack_5c = 4;
  local_58 = 0xf;
  uStack_54 = 0xe;
  local_50[0] = 7;
  local_50[1] = 6;
  local_50[2] = 9;
  local_50[3] = 8;
  uStack_40 = 0xb;
  uStack_3c = 10;
  local_38 = 0xd;
  uStack_34 = 0xc;
  puVar7 = local_30;
  switch(*(undefined *)(param_1 + 7)) {
  case 0:
    DAT_02000a40 = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x3d00;
    local_30[0] = 0;
    sub_081284E4(local_30,(DAT_02000a08 & 0x1f00) * 8 + 0x6000400,0x1000100);
    *(undefined *)(param_1 + 0x256) = 0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  case 1:
    *(char *)(param_1 + 0x254) = (char)*(undefined2 *)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 8) = 5;
    iVar11 = 2;
    if (*(short *)(param_1 + 0x10) != 0) {
      *(undefined2 *)(param_1 + 8) = 7;
      iVar11 = 3;
    }
    sVar4 = sub_080068E0();
    if (sVar4 != 0) {
      *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 8;
      iVar11 = iVar11 + 1;
    }
    sub_08111334(param_1,4);
    sub_08001D30(&DAT_08c44d70,(DAT_0202e198 - 0x200) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44d7c,(DAT_0202df98 - 4) * 0x20 + 0x200);
    iVar9 = 0;
    if (iVar11 != 0) {
      piVar12 = (int *)(param_1 + 0x238);
      do {
        local_28 = 0x7800;
        iVar5 = FUN_081288bc(iVar11 * -0xe00 + 0x3800,iVar11 + 1);
        iVar9 = iVar9 + 1;
        local_24 = iVar9 * (iVar5 + 0xe00) + 0x5900;
        iVar5 = *piVar12;
        piVar12 = piVar12 + 1;
        *(undefined4 *)(iVar5 + 0x54) = local_28;
        *(int *)(iVar5 + 0x58) = local_24;
      } while (iVar9 < iVar11);
    }
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  case 2:
    if (*(char *)(param_1 + 0x256) == '\0') {
      pbVar6 = (byte *)(param_1 + 0x254);
      bVar1 = *pbVar6;
      if ((DAT_02000766 & 0x80) == 0) {
        if ((DAT_02000766 & 0x40) != 0) {
          do {
            *pbVar6 = (char)(*pbVar6 + 3) + (char)((int)(*pbVar6 + 3) >> 2) * -4;
          } while (((int)*(short *)(param_1 + 8) >> *pbVar6 & 1U) == 0);
        }
      }
      else {
        do {
          *pbVar6 = (char)(*pbVar6 + 1) + (char)((int)(*pbVar6 + 1) >> 2) * -4;
        } while (((int)*(short *)(param_1 + 8) >> (uint)*pbVar6 & 1U) == 0);
      }
      if (*(byte *)(param_1 + 0x254) != bVar1) {
        sub_08002B10(1);
      }
      if ((DAT_02000764 & 9) != 0) {
        sub_08002B10(2);
        if (*(byte *)(param_1 + 0x254) == 0) {
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        }
        else {
          *(undefined *)(param_1 + 0x256) = 0x20;
        }
      }
    }
    sVar2 = *(sbyte *)(param_1 + 0x254);
    uVar10 = 0;
    iVar11 = param_1;
    do {
      puVar7 = (undefined4 *)&SupervisorCall;
      if (((int)*(short *)(param_1 + 8) >> (uVar10 & 0xff) & 1U) != 0) {
        puVar7 = (undefined4 *)(uVar10 * 8);
        *(char *)(*(int *)(iVar11 + 0x238) + 0x75) =
             (char)*(undefined4 *)
                    ((int)(puVar7 + ((1 << sVar2) >> (uVar10 & 0xff) & 1)) + (int)local_70);
        *(undefined *)(*(int *)(iVar11 + 0x238) + 0x74) = 1;
        iVar11 = iVar11 + 4;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
    break;
  case 3:
    *(undefined *)(param_1 + 0x255) = 1;
    *(undefined2 *)(param_1 + 8) = 3;
    iVar11 = 2;
    if (DAT_02000a80 == '1') {
      *(undefined2 *)(param_1 + 8) = 7;
      iVar11 = 3;
    }
    if (DAT_02000a81 == '8') {
      *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 8;
      iVar11 = iVar11 + 1;
    }
    sub_08111334(param_1,4);
    sub_08001D30(&DAT_08c44d70,(DAT_0202e198 - 0x200) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44d7c,(DAT_0202df98 - 4) * 0x20 + 0x200);
    iVar9 = 0;
    if (iVar11 != 0) {
      piVar12 = (int *)(param_1 + 0x238);
      do {
        local_28 = 0x7800;
        iVar5 = FUN_081288bc(iVar11 * -0xe00 + 0x3800,iVar11 + 1);
        iVar9 = iVar9 + 1;
        local_24 = iVar9 * (iVar5 + 0xe00) + 0x5900;
        iVar5 = *piVar12;
        piVar12 = piVar12 + 1;
        *(undefined4 *)(iVar5 + 0x54) = local_28;
        *(int *)(iVar5 + 0x58) = local_24;
      } while (iVar9 < iVar11);
    }
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  case 4:
    if (*(char *)(param_1 + 0x256) == '\0') {
      pbVar6 = (byte *)(param_1 + 0x255);
      bVar1 = *pbVar6;
      if ((DAT_02000766 & 0x80) == 0) {
        if ((DAT_02000766 & 0x40) != 0) {
          do {
            *pbVar6 = (char)(*pbVar6 + 3) + (char)((int)(*pbVar6 + 3) >> 2) * -4;
          } while (((int)*(short *)(param_1 + 8) >> *pbVar6 & 1U) == 0);
        }
      }
      else {
        do {
          *pbVar6 = (char)(*pbVar6 + 1) + (char)((int)(*pbVar6 + 1) >> 2) * -4;
        } while (((int)*(short *)(param_1 + 8) >> *pbVar6 & 1U) == 0);
      }
      if (*(byte *)(param_1 + 0x255) != bVar1) {
        sub_08002B10(1);
      }
      if ((DAT_02000764 & 9) == 0) {
        if ((DAT_02000764 & 2) != 0) {
          sub_08002B10(3);
          *(undefined *)(param_1 + 7) = 1;
        }
      }
      else {
        sub_08002B10(2);
        *(undefined *)(param_1 + 0x256) = 0x20;
      }
    }
    sVar2 = *(sbyte *)(param_1 + 0x255);
    uVar10 = 0;
    iVar11 = param_1;
    do {
      puVar7 = (undefined4 *)&SupervisorCall;
      if (((int)*(short *)(param_1 + 8) >> (uVar10 & 0xff) & 1U) != 0) {
        puVar7 = (undefined4 *)(uVar10 * 8);
        *(char *)(*(int *)(iVar11 + 0x238) + 0x75) =
             (char)*(undefined4 *)
                    ((int)(puVar7 + ((1 << sVar2) >> (uVar10 & 0xff) & 1)) + (int)local_50);
        *(undefined *)(*(int *)(iVar11 + 0x238) + 0x74) = 1;
        iVar11 = iVar11 + 4;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
  }
  sub_0811136C(param_1,puVar7);
  sub_080025D8(0x89);
  cVar3 = *(char *)(param_1 + 0x256);
  if (cVar3 != '\0') {
    cVar8 = cVar3 + -1;
    *(char *)(param_1 + 0x256) = cVar8;
    DAT_03002ec0 = cVar8;
    DAT_03002ec1 = cVar8;
    DAT_03002ec2 = cVar8;
    if (cVar3 == '\x01') {
      *(undefined *)(param_1 + 5) = 3;
      *(char *)(param_1 + 6) = cVar8;
      *(char *)(param_1 + 7) = cVar8;
    }
  }
  return in_lr;
}

