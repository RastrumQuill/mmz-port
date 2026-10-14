// sub_08023A2C at 0x08023A2C (thumb)

undefined8 sub_08023A2C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(*(int *)(param_1 + 0xc) + 1)) {
  case 0:
    DAT_020023c6 = 0x287;
    DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x1200;
    DAT_020023d0._0_2_ = 0;
    DAT_020023d0._2_2_ = 0x50;
    sub_0800393C(&DAT_08547b54,0x4000);
    sub_08003E14(&DAT_08547b60,0);
    sub_08004340(0x12,&DAT_085222a0,0x71,0,0);
    sub_0800393C(&DAT_085d8334,(DAT_0202fb16 - 0x240) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8340,(DAT_0202f916 - 7) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d8348,(DAT_0202fb18 - 0x2e0) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8354,(DAT_0202f918 - 8) * 0x20 + 0x200);
    sub_0800393C(&DAT_085d835c,(DAT_0202fb1a - 0x35b) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8368,(DAT_0202f91a - 9) * 0x20 + 0x200);
    sub_08004048();
    *(undefined4 *)(param_1 + 0xd0) = 0;
    break;
  case 1:
    piVar4 = (int *)(param_1 + 0xd0);
    iVar3 = *piVar4;
    iVar5 = (iVar3 + -0x3c) * 0x10;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (0xdc < iVar3) {
      iVar3 = FUN_080fe2f8((iVar3 + -0xdc) * 0x80,0x78);
      DAT_020023d0._2_2_ =
           (short)(*(short *)((int)&DAT_080fe64c + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17)) * 5
                  >> 5) + 0x28;
    }
    iVar3 = *piVar4;
    if (iVar3 < 0x3d) {
      sub_0802394C(0x85,iVar5 + 0xd000,iVar5 + 0x7000,0x100);
    }
    else {
      if (iVar3 < 100) {
        iVar2 = iVar5 + 0xd000;
      }
      else {
        if (0x9f < iVar3) goto LAB_08023c4e;
        iVar2 = (iVar3 + -100) * 8 * (iVar3 + -100) + iVar5 + 0xd000;
      }
      sub_0802394C(0x85,iVar2,iVar5 + 0x7000,iVar3 + 0xc4U & 0xffff);
    }
LAB_08023c4e:
    iVar3 = *piVar4;
    if (iVar3 < 0xa1) {
      sub_0802394C(0x83,0x4000 - iVar5,iVar5 + 0x7000,0x100);
    }
    else {
      if (iVar3 < 200) {
        iVar2 = 0x4000 - iVar5;
      }
      else {
        if (0x117 < iVar3) goto LAB_08023ca6;
        iVar2 = (0x4000 - iVar5) - (iVar3 + -200) * 8 * (iVar3 + -200);
      }
      sub_0802394C(0x83,iVar2,iVar5 + 0x7000,iVar3 + 0x60U & 0xffff);
    }
LAB_08023ca6:
    iVar3 = *piVar4;
    if (iVar3 < 0xb5) {
      sub_0802394C(0x84,iVar5 + 0xb000,iVar5 + 0x6000,0x100);
    }
    else {
      if (iVar3 < 0xdc) {
        iVar2 = iVar5 + 0xb000;
      }
      else {
        if (0x117 < iVar3) goto LAB_08023cfe;
        iVar2 = (iVar3 + -0xdc) * 8 * (iVar3 + -0xdc) + iVar5 + 0xb000;
      }
      sub_0802394C(0x84,iVar2,iVar5 + 0x6000,iVar3 + 0x4cU & 0xffff);
    }
LAB_08023cfe:
    if (*piVar4 < 0x154) goto LAB_08024016;
LAB_0802404a:
    sub_080E9250();
    break;
  case 2:
switchD_08023a4c_caseD_2:
    DAT_020023c0 = DAT_020023c0 & 0xedff | 0x100;
    sub_08004070();
    break;
  case 3:
    sub_080E92C4();
    DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x3600;
    DAT_020023c8 = 0x1e02;
    DAT_020023d4._0_2_ = 0;
    DAT_020023d4._2_2_ = 0;
    sub_0800393C(&DAT_08547c58,0);
    sub_08003E14(&DAT_08547c64,0);
    sub_08004340(0x24,&DAT_085222a0,0x7e,0,0);
    DAT_020023c6 = 0x1d87;
    DAT_020023d0._0_2_ = 0;
    DAT_020023d0._2_2_ = 0x60;
    sub_0800393C(&DAT_08547c44,0x4000);
    sub_08003E14(&DAT_08547c50,0);
    sub_08004340(0x12,&DAT_085222a0,0x7d,0,0);
    sub_08004048();
    sub_080040A8(0x111,0);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    break;
  case 4:
    sub_080041E4(0x111);
    piVar4 = (int *)(param_1 + 0xd0);
    if (*piVar4 - 0x40U < 0x81) {
      DAT_020023d0._2_2_ =
           (short)(*(short *)((int)&DAT_080fe64c + ((uint)(*piVar4 << 0x18) >> 0x17)) * 3 >> 4) +
           0x30;
    }
    iVar3 = *piVar4;
    if (iVar3 < 0x40) {
      DAT_020023d4._2_2_ =
           (short)(*(short *)((int)&DAT_080fe64c + ((uint)(iVar3 << 0x18) >> 0x17)) * 5 >> 4);
    }
    else if (iVar3 - 0x40U < 0x81) {
      DAT_020023d4._2_2_ =
           (short)(*(short *)((int)&DAT_080fe64c + ((uint)(iVar3 << 0x18) >> 0x17)) * 9 >> 6) + 0x2c
      ;
    }
    else {
      DAT_020023d4._2_2_ =
           (*(short *)((int)&DAT_080fe64c + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17)) >> 6) + 8;
    }
    if (*piVar4 == 0x100) {
      sub_080EA1B8(0x1222);
      DAT_020023c6 = 0x1887;
      sub_08004340(0x12,&DAT_085222a0,0x7d,0,0);
    }
    iVar3 = *piVar4;
    if (iVar3 - 0x101U < 0x2e7) {
      if (iVar3 == 0x2c0) {
        *piVar4 = 0x1c0;
      }
      if (DAT_02030c1a == 0) {
        DAT_020302f4 = 6;
        *piVar4 = *piVar4 + 0x300;
      }
    }
    else if ((999 < iVar3) && (DAT_020302f4 == 0)) break;
    goto LAB_08024016;
  case 5:
    if (DAT_020302f4 == 0) {
      sub_08004230(0x111);
      sub_080E9250();
      goto switchD_08023a4c_caseD_2;
    }
    goto LAB_08024016;
  case 6:
    sub_08003C28();
    DAT_020023c6 = 0x1f83;
    DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x1200;
    DAT_020023d0._0_2_ = 0;
    DAT_020023d0._2_2_ = 0x60;
    sub_0800393C(&DAT_08547bf4,0);
    sub_08003E14(&DAT_08547c00,0);
    sub_08004340(0x12,&DAT_085222a0,0x79,0,0);
    sub_08004048();
    *(undefined4 *)(param_1 + 0xd0) = 0;
    break;
  case 7:
    piVar4 = (int *)(param_1 + 0xd0);
    if (*piVar4 - 0x40U < 0x81) {
      DAT_020023d0._2_2_ =
           (short)((*(short *)((int)&DAT_080fe64c + ((uint)(*piVar4 << 0x18) >> 0x17)) + 0x100) * 3
                  >> 4);
    }
    if (*piVar4 == 0xc0) {
      DAT_020023d0._2_2_ = 0;
      DAT_020023c6 = DAT_020023c6 & 0xe0ff | 0x200;
      sub_08004340(0x12,&DAT_085222a0,0x79,0,0);
    }
    if (0xc0 < *piVar4) {
      sub_08003BE0(&DAT_02030eb0,(DAT_020023c4 & 0x1f00) << 3,0x580,0x3c0);
      goto LAB_0802404a;
    }
LAB_08024016:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar1 = 1;
    goto LAB_08024070;
  case 8:
    DAT_020023c0 = DAT_020023c0 & 0xedff | 0x100;
    sub_08004070();
  }
  uVar1 = 0;
LAB_08024070:
  return CONCAT44(in_lr,uVar1);
}

