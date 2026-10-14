// sub_08076460 at 0x08076460 (thumb)

undefined4 sub_08076460(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined uVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  
  if ((*(char *)(param_1 + 0xdd) == '\0') && (DAT_0202e910 != 0x10)) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf10);
    sub_08002B10(0xdb);
    sub_08005784(param_1 + 0x74,&DAT_08859ac0);
    if (DAT_0202e910 == 3) {
      iVar5 = sub_080DA918(param_1 + 0x54,0,0x91);
      *(int *)(param_1 + 0xc0) = iVar5;
      *(undefined *)(iVar5 + 0x78) = 0x33;
      iVar5 = *(int *)(param_1 + 0xc0);
      uVar8 = 0xc;
    }
    else {
      iVar5 = sub_080DA918(param_1 + 0x54,0,0xe1);
      *(int *)(param_1 + 0xc0) = iVar5;
      *(undefined *)(iVar5 + 0x78) = 0x39;
      iVar5 = *(int *)(param_1 + 0xc0);
      uVar8 = 6;
    }
    *(undefined *)(iVar5 + 0x79) = uVar8;
    *(undefined2 *)(param_1 + 0xd4) = 0;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x74) = 0xff;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
    sub_080CBC4C(param_1,iVar10,0x3000);
    sub_080CBC4C(param_1,iVar10,0x6000);
    sub_080CBC4C(param_1,iVar10,0x9000);
    sub_080CBC4C(param_1,iVar10,0xc000);
    sub_080CBC4C(param_1,iVar10,0xf000);
    sub_080CBC4C(param_1,iVar10,0x12000);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar9 = *(int *)(param_1 + 0xd0);
  iVar5 = sub_08128A9C(iVar9,6);
  *(int *)(param_1 + 0xd0) = iVar9 + 1;
  local_34 = (byte *)(param_1 + 0x24);
  if (iVar5 == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar6 = (*local_34 + 0x20) * 0x1000000;
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar6 + 0x40000000 >> 0x17)) * 0x14;
      local_60 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar6 >> 0x17)) * 0x14;
      sub_080CBB38(&local_64,2,*local_34 + 0x30,0);
      uVar6 = (*local_34 + 0xa0) * 0x1000000;
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar6 + 0x40000000 >> 0x17)) * 0x14;
      local_60 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar6 >> 0x17)) * 0x14;
      sub_080CBB38(&local_64,2,*local_34 + 0xb0,1);
    }
    else {
      uVar6 = (0x60 - (uint)*local_34) * 0x1000000;
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar6 + 0x40000000 >> 0x17)) * 0x14;
      local_60 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar6 >> 0x17)) * 0x14;
      sub_080CBB38(&local_64,2,'P' - *local_34,0);
      uVar6 = (0xe0 - (uint)*local_34) * 0x1000000;
      local_64 = *(int *)(param_1 + 0x54) +
                 *(short *)((int)&DAT_08128c10 + (uVar6 + 0x40000000 >> 0x17)) * 0x14;
      local_60 = *(int *)(param_1 + 0x58) + *(short *)((int)&DAT_08128c10 + (uVar6 >> 0x17)) * 0x14;
      sub_080CBB38(&local_64,2,-0x30 - *local_34,1);
    }
  }
  if (*(short *)(param_1 + 0xa4) < 0x10) {
    if (iVar10 == 0) {
      iVar5 = 0x1a0;
      local_50 = 4;
    }
    else {
      iVar5 = 0x1c0;
      local_50 = 5;
    }
  }
  else if (*(short *)(param_1 + 0xa4) < 0x20) {
    if (iVar10 == 0) {
      iVar5 = 0x180;
      local_50 = 3;
    }
    else {
      iVar5 = 0x1a0;
      local_50 = 4;
    }
  }
  else if (iVar10 == 0) {
    iVar5 = 0x160;
    local_50 = 3;
  }
  else {
    iVar5 = 0x180;
    local_50 = 4;
  }
  iVar9 = *(int *)(param_1 + 100) + 8;
  *(int *)(param_1 + 100) = iVar9;
  if (iVar5 < iVar9) {
    *(int *)(param_1 + 100) = iVar5;
  }
  local_54 = (uint)*(ushort *)(param_1 + 0xd6);
  iVar5 = local_54 + *(int *)(param_1 + 100);
  *(short *)(param_1 + 0xd6) = (short)iVar5;
  *local_34 = (byte)((uint)iVar5 >> 8);
  iVar5 = *(int *)(param_1 + 0xc0);
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar6 = *(ushort *)(param_1 + 0xd4) + 2;
      *(short *)(param_1 + 0xd4) = (short)uVar6;
      uVar6 = uVar6 & 0xff;
      uVar7 = sub_08128A9C(*(undefined2 *)(param_1 + 0xd4),3);
      *(undefined *)(iVar5 + 0x74) = (&DAT_08859be6)[uVar7 & 0xffff];
      uVar7 = sub_08128A9C(*(undefined2 *)(param_1 + 0xd4),3);
      *(undefined *)(iVar5 + 0x75) = (&DAT_08859be9)[uVar7 & 0xffff];
      uVar7 = sub_08128A9C(*(undefined2 *)(param_1 + 0xd4),3);
      *(undefined *)(iVar5 + 0x76) = (&DAT_08859bec)[uVar7 & 0xffff];
      if ((byte)(&UNK_08859be2)[iVar10 * 3] <= uVar6) {
        uVar6 = (uint)(byte)(&UNK_08859be2)[iVar10 * 3];
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else {
      uVar2 = sub_08128954(*(ushort *)(param_1 + 0xd4) + 1,3);
      *(undefined2 *)(param_1 + 0xd4) = uVar2;
      uVar6 = (uint)(byte)(&UNK_08859be0)[(uint)*(ushort *)(param_1 + 0xd4) + iVar10 * 3];
      *(undefined *)(iVar5 + 0x74) = (&DAT_08859be6)[*(ushort *)(param_1 + 0xd4)];
      *(undefined *)(iVar5 + 0x75) = (&DAT_08859be9)[*(ushort *)(param_1 + 0xd4)];
      *(undefined *)(iVar5 + 0x76) = (&DAT_08859bec)[*(ushort *)(param_1 + 0xd4)];
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar7 = (uint)*local_34;
    }
    else {
      uVar7 = -(uint)*local_34;
    }
    uVar7 = uVar7 + 0xc0 & 0xff;
    *(uint *)(iVar5 + 0x54) =
         *(int *)(param_1 + 0x54) +
         uVar6 * (int)*(short *)((int)&DAT_08128c10 + ((uVar7 + 0x80) * 0x1000000 >> 0x17));
    local_2c = uVar7 + 0x40;
    local_4c = (uint)(local_2c * 0x1000000) >> 0x17;
    local_48 = (int)*(short *)((int)&DAT_08128c10 + local_4c);
    *(uint *)(iVar5 + 0x58) = *(int *)(param_1 + 0x58) + uVar6 * local_48;
    *(uint *)(iVar5 + 100) = *(int *)(param_1 + 0x54) + uVar6 * (int)(short)(&DAT_08128c10)[uVar7];
    *(uint *)(iVar5 + 0x68) =
         *(int *)(param_1 + 0x58) +
         uVar6 * (int)*(short *)((int)&DAT_08128c10 + ((uVar7 + 0xc0) * 0x1000000 >> 0x17));
    uVar6 = 0x20;
    local_28 = (int *)(iVar5 + 0x80);
    local_30 = uVar7 * 2;
    local_44 = (int)(short)(&DAT_08128c10)[uVar7];
    local_24 = local_48;
    do {
      *(uint *)(iVar5 + 0x7c) = *(int *)(iVar5 + 0x54) + uVar6 * local_48;
      *local_28 = *(int *)(iVar5 + 0x58) + uVar6 * local_44;
      sVar3 = sub_08007C7C(*(undefined4 *)(iVar5 + 0x7c));
      if ((sVar3 != 0) && (uVar6 = uVar6 - 0x10 & 0xffff, uVar6 < 0x140)) {
        sVar3 = *(short *)((int)&DAT_08128c10 + local_4c);
        sVar1 = *(short *)((int)&DAT_08128c10 + local_30);
        do {
          *(uint *)(iVar5 + 0x7c) = *(int *)(iVar5 + 0x54) + uVar6 * (int)sVar3;
          *local_28 = *(int *)(iVar5 + 0x58) + uVar6 * (int)sVar1;
          sVar4 = sub_08007C7C(*(undefined4 *)(iVar5 + 0x7c));
          if (sVar4 != 0) {
            uVar6 = 0x1fff;
            break;
          }
          uVar6 = uVar6 + 1 & 0xffff;
        } while (uVar6 < 0x140);
      }
      uVar6 = uVar6 + 8 & 0xffff;
    } while (uVar6 < 0x140);
    uVar6 = 0x20;
    local_38 = (int)*(short *)((int)&DAT_08128c10 + local_30);
    local_40 = (uint)(local_2c << 0x18) >> 0x17;
    local_3c = (int)*(short *)((int)&DAT_08128c10 + local_40);
    do {
      *(uint *)(iVar5 + 0x5c) = *(int *)(iVar5 + 100) + uVar6 * local_3c;
      *(uint *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x68) + uVar6 * local_38;
      sVar3 = sub_08007C7C();
      if ((sVar3 != 0) && (uVar6 = uVar6 - 0x10 & 0xffff, uVar6 < 0x140)) {
        sVar3 = *(short *)((int)&DAT_08128c10 + local_40);
        sVar1 = *(short *)((int)&DAT_08128c10 + local_30);
        do {
          *(uint *)(iVar5 + 0x5c) = *(int *)(iVar5 + 100) + uVar6 * (int)sVar3;
          *(uint *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x68) + uVar6 * (int)sVar1;
          sVar4 = sub_08007C7C();
          if (sVar4 != 0) {
            uVar6 = 0x1fff;
            break;
          }
          uVar6 = uVar6 + 1 & 0xffff;
        } while (uVar6 < 0x140);
      }
      uVar6 = uVar6 + 8 & 0xffff;
    } while (uVar6 < 0x140);
    if (*(short *)(param_1 + 0xd4) == 0) {
      local_5c = *(undefined4 *)(iVar5 + 0x5c);
      local_58 = *(undefined4 *)(iVar5 + 0x60);
      sub_080E2A18(&local_5c,0,0);
      local_5c = *(undefined4 *)(iVar5 + 0x7c);
      local_58 = *local_28;
      sub_080E2A18(&local_5c,0,0);
    }
  }
  if (*(ushort *)(param_1 + 0xd6) < local_54) {
    if ((DAT_0202e918 & 8) != 0) {
      *(undefined *)(param_1 + 0x13) = 0x10;
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if (local_50 <= *(byte *)(param_1 + 0x13)) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *local_34 = 0;
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

