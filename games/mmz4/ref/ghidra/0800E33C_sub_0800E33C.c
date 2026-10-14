// sub_0800E33C at 0x0800E33C (thumb)

undefined4 sub_0800E33C(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar6 = uVar2 << 0x10;
  if (DAT_0202cab2 != 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x70);
    if (uVar7 == 1) {
      puVar4 = &DAT_02000a04 + (uVar6 >> 0x14);
      sub_081284E4(&DAT_08b3d6e8,&DAT_06000800 + (*puVar4 & 0x1f00) * 8,0xa0);
      local_2c = 0;
      sub_081284E4(&local_2c,&DAT_06000a80 + (*puVar4 & 0x1f00) * 8,0x1000160);
      sub_081284E4(&DAT_08b419b0,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
      puVar5 = (undefined *)((*puVar4 & 0x1f00) * 8 + 0x6000280);
LAB_0800e4f8:
      local_2c = 0;
      sub_081284E4(&local_2c,puVar5,0x1000160);
    }
    else if (uVar7 < 2) {
      if (uVar7 == 0) {
        puVar4 = &DAT_02000a04 + (uVar6 >> 0x14);
        local_30 = uVar7;
        sub_081284E4(&local_30,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x1000200);
        sub_081284E4(&DAT_08b3d6e8,&DAT_06000800 + (*puVar4 & 0x1f00) * 8,0xa0);
        local_2c = uVar7;
        sub_081284E4(&local_2c,&DAT_06000a80 + (*puVar4 & 0x1f00) * 8,0x1000160);
      }
    }
    else {
      if (uVar7 == 2) {
        puVar4 = &DAT_02000a04 + (uVar6 >> 0x14);
        sub_081284E4(&DAT_08b419b0,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
        local_2c = 0;
        sub_081284E4(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x6000280,0x1000160);
        sub_081284E4(&DAT_08b41c38,&DAT_06000800 + (*puVar4 & 0x1f00) * 8,0xa0);
        puVar5 = &DAT_06000a80 + (*puVar4 & 0x1f00) * 8;
        goto LAB_0800e4f8;
      }
      if (uVar7 == 3) {
        puVar4 = &DAT_02000a04 + (uVar6 >> 0x14);
        sub_081284E4(&DAT_08b41c38,&DAT_06000800 + (*puVar4 & 0x1f00) * 8,0xa0);
        local_2c = 0;
        sub_081284E4(&local_2c,&DAT_06000a80 + (*puVar4 & 0x1f00) * 8,0x1000160);
        local_2c = 0;
        sub_081284E4(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x1000200);
      }
    }
  }
  if ((*(int *)(param_1 + 0x38) < 0x330) && (*(ushort *)(param_1 + 0x68) != 0)) {
    iVar3 = ((uint)*(ushort *)(param_1 + 0x68) * 0x10000 >> 0x14) -
            (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34));
  }
  else {
    iVar3 = 0;
  }
  puVar4 = (ushort *)(param_1 + 0x70);
  uVar2 = (uVar2 & 0xffff) >> 4;
  if ((int)((*puVar4 + 1) * 0x100 + 0x10) <= iVar3) {
    local_28 = *(int *)(param_1 + 0x34) * 0x100 + 0x16000;
    local_24 = 0x2f800;
    uVar1 = *puVar4 + 1;
    *puVar4 = uVar1;
    if (uVar1 == 1) {
      sub_080F1AB4(&local_28,0);
      sub_081284E4(&DAT_08b419b0,((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8 + 0x6000000,0xa0);
      puVar5 = (undefined *)(((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8 + 0x6000280);
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 == 3) {
          local_2c = 0;
          sub_081284E4(&local_2c,((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8 + 0x6000000,0x1000200
                      );
        }
        goto LAB_0800e6e6;
      }
      sub_080F1AB4(&local_28,0);
      sub_081284E4(&DAT_08b41c38,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8,0xa0)
      ;
      puVar5 = &DAT_06000a80 + ((ushort)(&DAT_02000a04)[uVar2] & 0x1f00) * 8;
    }
    local_2c = 0;
    sub_081284E4(&local_2c,puVar5,0x1000160);
  }
LAB_0800e6e6:
  (&DAT_02000a0c)[uVar2 * 2] = (short)iVar3;
  (&DAT_02000a0e)[uVar2 * 2] = (short)*(undefined4 *)(param_1 + 0x38) + -0x2d0;
  return in_lr;
}

