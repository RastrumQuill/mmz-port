// sub_08062074 at 0x08062074 (thumb)

undefined4 sub_08062074(int param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  cVar2 = sub_08061DEC();
  if (cVar2 == '\0') {
    sub_08061EB8(param_1);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361eb0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361ef4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar8 = *(int *)(param_1 + 0x28);
      puVar6 = (uint *)(iVar8 + 0xbc);
      puVar4 = (ushort *)(param_1 + 0xba);
      if ((*puVar6 & 0x40) != 0) {
        if ((byte)(*(char *)(param_1 + 0xd) - 10U) < 3) {
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
          *puVar6 = *puVar6 & 0xffffffdf;
        }
        *puVar6 = *puVar6 & 0xffffffbf;
        uVar1 = *puVar4;
        *puVar4 = (ushort)(uVar1 + 0x3000);
        iVar5 = uVar1 + 0x3000 + (uint)*(byte *)(iVar8 + 0xc0) * -0x6000;
        *puVar4 = (ushort)iVar5;
        iVar5 = iVar5 * 0x10000 >> 0x10;
        if (iVar5 < -0x4000) {
          *puVar4 = 0xc000;
        }
        else if (0x4000 < iVar5) {
          *puVar4 = 0x4000;
        }
      }
      puVar7 = (ushort *)(param_1 + 0xb8);
      iVar5 = (int)(short)*puVar4 - (int)(short)*puVar7;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xf;
      }
      iVar5 = (iVar5 >> 4) + (uint)*puVar7;
      *puVar7 = (ushort)iVar5;
      if (*(int *)(iVar8 + 0xb4) == 0) {
        if (iVar5 * 0x10000 < 1) {
          uVar1 = *puVar4;
          *puVar4 = uVar1 + 0x80;
          if (0 < (int)((uint)(ushort)(uVar1 + 0x80) * 0x10000)) {
            *puVar4 = 0;
          }
          uVar1 = *puVar7;
          *puVar7 = uVar1 + 0x80;
          if (0 < (int)((uint)(ushort)(uVar1 + 0x80) * 0x10000)) {
            *puVar7 = 0;
          }
        }
        else {
          uVar1 = *puVar4;
          *puVar4 = (ushort)(uVar1 - 0x80);
          if ((int)((uVar1 - 0x80) * 0x10000) < 0) {
            *puVar4 = 0;
          }
          uVar1 = *puVar7;
          *puVar7 = (ushort)(uVar1 - 0x80);
          if ((int)((uVar1 - 0x80) * 0x10000) < 0) {
            *puVar7 = 0;
          }
        }
      }
      else if ((byte)(*(char *)(param_1 + 0xd) - 10U) < 3) {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        *(uint *)(iVar8 + 0xbc) = *(uint *)(iVar8 + 0xbc) & 0xffffffdf;
      }
      puVar6 = (uint *)(iVar8 + 0xbc);
      if ((int)(short)*puVar4 + 0x1000U < 0x2001) {
        uVar3 = *puVar6 & 0xfffffffd;
      }
      else {
        uVar3 = *puVar6 | 2;
      }
      *puVar6 = uVar3;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        cVar2 = (char)(*puVar7 >> 8);
      }
      else {
        cVar2 = -(char)(*puVar7 >> 8);
      }
      *(char *)(param_1 + 0x24) = cVar2;
    }
  }
  return in_lr;
}

