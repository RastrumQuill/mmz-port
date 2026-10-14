// sub_080D3CA4 at 0x080D3CA4 (thumb)

undefined4 sub_080D3CA4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  undefined4 in_lr;
  byte local_3c [28];
  undefined4 local_20;
  uint local_1c;
  
  iVar3 = *(int *)(param_1 + 8);
  sub_08128B5C(local_3c,&DAT_08129b48,0x1a);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    return in_lr;
  }
  if (*(char *)(iVar3 + 0xf) == '\0') {
    DAT_02000a00 = DAT_02000a00 | 0x100;
    local_20 = 0x12001200;
    sub_081284E4(&local_20,&DAT_06000800 + (DAT_02000a04 & 0x1f00) * 8,0x1000200);
    *(char *)(iVar3 + 0xf) = *(char *)(iVar3 + 0xf) + '\x01';
    sub_08001D30(&UNK_08b6c0dc + (uint)*(byte *)(iVar3 + 0x10) * 0x14,(DAT_02000a04 & 0xc) << 0xc);
    sub_08002208(&UNK_08b6c0e8 + (uint)*(byte *)(iVar3 + 0x10) * 0x14,0);
  }
  else {
    sub_081284E4(&UNK_08863dc4 + (uint)*(byte *)(iVar3 + 0x10) * 0x100,&DAT_0202f820,0x40);
  }
  uVar8 = (uint)*(byte *)(iVar3 + 0xe);
  if (uVar8 != 1) {
    if (uVar8 < 2) {
      if (uVar8 != 0) {
        DAT_02000a0c = 0;
        DAT_02000a0e = 0;
        return in_lr;
      }
      iVar4 = sub_08000A70(0x140);
      if (iVar4 == 0) {
        DAT_02000a0c = 0;
        DAT_02000a0e = 0;
        return in_lr;
      }
      local_1c = uVar8;
      sub_081284E4(&local_1c,iVar4,0x1000050);
      iVar10 = 0;
      puVar5 = (undefined2 *)(iVar4 + 0x80);
      do {
        if (*(byte *)(iVar3 + 0x12) < local_3c[iVar10]) {
          uVar6 = 0xff;
        }
        else {
          bVar1 = local_3c[iVar10];
          uVar8 = ((uint)*(byte *)(iVar3 + 0x12) - (uint)bVar1) * -0x18 + 0xff;
          uVar9 = uVar8 & 0xffff;
          if ((int)(uVar8 * 0x10000) < 0) {
            uVar9 = 0;
          }
          uVar6 = (undefined2)uVar9;
          if ((bVar1 & 1) == 0) {
            uVar6 = (undefined2)(uVar9 * -0x10000 >> 0x10);
          }
        }
        *puVar5 = uVar6;
        puVar5 = puVar5 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x1a);
    }
    else if (uVar8 == 2) {
      iVar4 = sub_08000A70(0x140);
      if (iVar4 == 0) {
        DAT_02000a0c = 0;
        DAT_02000a0e = 0;
        return in_lr;
      }
      local_1c = 0;
      sub_081284E4(&local_1c,iVar4,0x1000050);
      iVar3 = 0;
      psVar11 = (short *)(iVar4 + 0x80);
      do {
        sVar2 = FUN_081288bc(iVar3,3);
        *psVar11 = sVar2 + -4;
        psVar11 = psVar11 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x1a);
    }
    else {
      if (uVar8 != 3) {
        DAT_02000a0c = 0;
        DAT_02000a0e = 0;
        return in_lr;
      }
      iVar4 = sub_08000A70(0x140);
      if (iVar4 == 0) {
        DAT_02000a0c = 0;
        DAT_02000a0e = 0;
        return in_lr;
      }
      local_1c = 0;
      sub_081284E4(&local_1c,iVar4,0x1000050);
      uVar8 = 0;
      psVar11 = (short *)(iVar4 + 0x80);
      do {
        uVar7 = (ushort)*(byte *)(iVar3 + 0x12) * 0xc;
        if (0xff < uVar7) {
          uVar7 = 0xff;
        }
        if ((uVar8 & 1) == 0) {
          uVar7 = -uVar7;
        }
        sVar2 = FUN_081288bc(uVar8,3);
        *psVar11 = uVar7 + sVar2 + -4;
        psVar11 = psVar11 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x1a);
    }
    DAT_03001748 = &DAT_04000010;
    DAT_0300174c = 0xa2600001;
    DAT_03001744 = iVar4;
  }
  DAT_02000a0e = 0;
  DAT_02000a0c = 0;
  return in_lr;
}

