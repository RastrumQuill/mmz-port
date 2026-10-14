// sub_080294E8 at 0x080294E8 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_080294E8(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    sub_0800201C();
    sub_0810CED4();
    DAT_02000a06 = 0x5e83;
    _DAT_02000a10 = 0;
    DAT_02000a12 = 0;
    DAT_02000a08 = 0x1f83;
    DAT_02000a14._0_2_ = 0;
    DAT_02000a14._2_2_ = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x3600;
    sub_08001D30(&DAT_08b6c000 + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
    sub_08002208(&DAT_08b6c00c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
    local_1c = 0x6a006a;
    sub_081284E4(&local_1c,(DAT_02000a06 & 0x1f00) * 8 + 0x6000000,0x1000200);
    sub_08002734(0x12,&DAT_08b2c000,*(char *)(*(int *)(param_1 + 0xc) + 2) + '\x01',0,0xe);
    sub_08002734(0x24,&DAT_08b2c000,*(undefined *)(*(int *)(param_1 + 0xc) + 2),0,0);
    sub_0800243C();
    *(undefined4 *)(param_1 + 0xd0) = 0;
    break;
  case 1:
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 - 0x30U < 0x81) {
      iVar3 = (int)*(short *)((int)&DAT_08128c10 +
                             ((uint)(((int)(*piVar2 - 0x30U) / 2 + -0x80) * 0x1000000) >> 0x17));
      DAT_02000a12 = (undefined2)((uint)(iVar3 * -0x60) >> 8);
      DAT_02000a14._2_2_ = (undefined2)((uint)(iVar3 * -0x30) >> 8);
    }
    if (*piVar2 == 0xb0) {
      DAT_02000a12 = 0;
      DAT_02000a14._2_2_ = 0x30;
      DAT_02000a06 = DAT_02000a06 & 0xe0ff | 0x100;
      DAT_02000a08 = DAT_02000a08 & 0xe0ff | 0x200;
      local_18 = 0x6a006a;
      sub_081284E4(&local_18,&DAT_06000800,0x1000200);
      sub_08002734(0x12,&DAT_08b2c000,*(char *)(*(int *)(param_1 + 0xc) + 2) + '\x01',0,2);
      sub_08002734(0x24,&DAT_08b2c000,*(undefined *)(*(int *)(param_1 + 0xc) + 2),0,0);
    }
    iVar3 = *piVar2;
    goto LAB_080296cc;
  case 2:
    goto LAB_080299f6;
  case 3:
    sub_0800201C();
    sub_0810CED4();
    DAT_02000a06 = 0x1f83;
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x1200;
    _DAT_02000a10 = 0;
    DAT_02000a12 = 0x60;
    sub_08001D30(&DAT_08b6c000 + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
    sub_08002208(&DAT_08b6c00c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
    sub_08002734(0x12,&DAT_08b2c000,*(undefined *)(*(int *)(param_1 + 0xc) + 2),0,0);
    sub_0800243C();
    *(undefined4 *)(param_1 + 0xd0) = 0;
    break;
  case 4:
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 - 0x30U < 0x81) {
      DAT_02000a12 = (undefined2)
                     ((*(short *)((int)&DAT_08128c10 +
                                 ((uint)((*piVar2 + 0x10) * 0x1000000) >> 0x17)) + 0x100) * 3 >> 4);
    }
    if (*piVar2 == 0xb0) {
      DAT_02000a12 = 0;
      DAT_02000a06 = DAT_02000a06 & 0xe0ff | 0x200;
      sub_08002734(0x12,&DAT_08b2c000,*(undefined *)(*(int *)(param_1 + 0xc) + 2),0,0);
    }
    iVar3 = *piVar2;
LAB_080296cc:
    if (iVar3 < 0xb1) {
LAB_08029afc:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar5 = 1;
      goto LAB_08029b5e;
    }
LAB_080299a8:
    sub_08001FD4(&DAT_0202f620,(DAT_02000a04 & 0x1f00) << 3,0x580,0x3c0);
    sub_0810CE60();
    break;
  case 5:
    goto LAB_080299f6;
  case 6:
    sub_0800201C();
    sub_0810CED4();
    DAT_02000a06 = 0x5d83;
    _DAT_02000a10 = 0xa0;
    DAT_02000a12 = 0;
    DAT_02000a08 = 0x1f87;
    DAT_02000a14._0_2_ = -0x50;
    DAT_02000a14._2_2_ = 0;
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x3600;
    sub_08001D30(&DAT_08b6c000 + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
    sub_08002208(&DAT_08b6c00c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
    sub_08001D30(&DAT_08b6c014 + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,
                 (DAT_02000a08 & 0xc) * 0x1000);
    sub_08002208(&DAT_08b6c020 + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
    local_18 = 0;
    sub_081284E4(&local_18,(DAT_02000a06 & 0x1f00) * 8 + 0x6000000,0x1000400);
    sub_08002734(0x12,&DAT_08b2c000,*(undefined *)(*(int *)(param_1 + 0xc) + 2),0x14,0);
    sub_08002734(0x24,&DAT_08b2c000,*(char *)(*(int *)(param_1 + 0xc) + 2) + '\x01',0,0);
    sub_0800243C();
    *(undefined4 *)(param_1 + 0xd0) = 0;
    break;
  case 7:
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 - 0x40U < 0x81) {
      sVar1 = (short)((*(short *)((int)&DAT_08128c10 + ((uint)(*piVar2 << 0x18) >> 0x17)) + 0x100) *
                      3 >> 4);
      _DAT_02000a10 = 0x100 - sVar1;
      DAT_02000a14._0_2_ = 0x10 - sVar1;
    }
    if (*piVar2 == 0xc0) {
      DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x2400;
      DAT_02000a14._0_2_ = 0x10;
      DAT_02000a08 = DAT_02000a08 & 0xe0ff | 0x200;
      sub_08002734(0x24,&DAT_08b2c000,*(char *)(*(int *)(param_1 + 0xc) + 2) + '\x01',0,0);
    }
    if (*piVar2 < 0xc1) goto LAB_08029afc;
    goto LAB_080299a8;
  case 8:
LAB_080299f6:
    DAT_02000a00 = DAT_02000a00 & 0xedff | 0x100;
    sub_08002464();
    break;
  case 9:
    sub_0800201C();
    sub_0810CED4();
    DAT_02000a00 = DAT_02000a00 | 0x100;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    DAT_02000a40 = 0x3e41;
    DAT_02000a42 = 0x1000;
    break;
  case 10:
    piVar2 = (int *)(param_1 + 0xd0);
    if (*piVar2 == 1) {
      sub_08001D30(&DAT_08b6c000 + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,
                   (DAT_02000a04 & 0xc) << 0xc);
      sub_08002208(&DAT_08b6c00c + *(short *)(*(int *)(param_1 + 0xc) + 2) * 0x14,0);
      local_18 = 0;
      sub_081284E4(&local_18,(DAT_02000a04 & 0x1f00) * 8 + 0x6000000,0x1000200);
      sub_08002734(1,&DAT_08b2c000,*(undefined *)(*(int *)(param_1 + 0xc) + 2),0,0);
    }
    iVar3 = *piVar2;
    if (iVar3 < 0x41) {
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      DAT_02000a42 = (ushort)(iVar3 >> 2) & 0x1f | 0x1000;
    }
    if (*piVar2 - 0x150U < 0x41) {
      iVar3 = -*piVar2;
      iVar4 = iVar3 + 400;
      if (iVar4 < 0) {
        iVar4 = iVar3 + 0x193;
      }
      DAT_02000a42 = (ushort)(iVar4 >> 2) & 0x1f | 0x1000;
    }
    if (*piVar2 < 0x1af) goto LAB_08029afc;
    DAT_02000a00 = DAT_02000a00 & 0xfeff;
    break;
  case 0xb:
    DAT_02000a40 = 0;
    sub_08001FD4(&DAT_0202f620,(DAT_02000a04 & 0x1f00) << 3,0x580,0x3c0);
    sub_0810CE60();
  }
  uVar5 = 0;
LAB_08029b5e:
  return CONCAT44(in_lr,uVar5);
}

