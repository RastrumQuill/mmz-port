// sub_080C06C4 at 0x080C06C4 (thumb)

undefined4 sub_080C06C4(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x3900;
    DAT_02004f3a = 0x206;
    DAT_02004f48 = 0;
    sub_080014E8(&DAT_082f1078,0x4000);
    sub_0800179C(&DAT_082f1084,0);
    FUN_080c88ec(&DAT_082e30bc,(DAT_02004f3a & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar1 = *(short *)(param_1 + 6) + 1;
    *(short *)(param_1 + 6) = sVar1;
    DAT_03001ba0 = (undefined)sVar1;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    sub_080BC0AC(&DAT_082baaa5,9,7);
    if (0x1f < *(short *)(param_1 + 6)) {
LAB_080c0930:
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      *(undefined2 *)(param_1 + 4) = 0;
    }
    break;
  case 2:
    sub_080BC0AC(&DAT_082baaa5,9,7);
    if ((DAT_02004caa & 0xc0) != 0) {
      sub_08001EAC(0x29);
      *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) ^ 1;
    }
    sub_080BC0AC(&UNK_082b932a,9,*(short *)(param_1 + 4) * 2 + 0xb);
    if ((DAT_02004ca8 & 1) == 0) break;
    sub_08001EAC(0x2a);
    if (*(short *)(param_1 + 4) != 0) {
      *(undefined *)(param_1 + 2) = 9;
      break;
    }
    *(undefined2 *)(param_1 + 4) = 0;
    goto LAB_080c0b88;
  case 3:
    iVar4 = sub_08001018(*(undefined *)(param_1 + 4),0x170);
    if (iVar4 == 0) {
      (&DAT_02002460)[*(short *)(param_1 + 4)] = 0;
      sVar1 = *(short *)(param_1 + 4) + 1;
      *(short *)(param_1 + 4) = sVar1;
      if (2 < sVar1) {
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x02';
        *(undefined2 *)(param_1 + 4) = 0;
      }
      break;
    }
    (&DAT_02002460)[*(short *)(param_1 + 4)] = 1;
    sub_08001118(*(undefined *)(param_1 + 4),&DAT_020022f0,0x170);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    if ((DAT_02004ce0 == '\x01') || (DAT_02004cfe == 0)) break;
    (&DAT_02002468)[*(short *)(param_1 + 4)] = DAT_02002358;
    *(uint *)(&DAT_02002478 + *(short *)(param_1 + 4) * 4) = (uint)DAT_02002351;
    (&DAT_02002484)[*(short *)(param_1 + 4)] = DAT_020022f0;
    (&DAT_02002488)[*(short *)(param_1 + 4)] = DAT_020022f1;
    sVar1 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar1;
    if (sVar1 < 3) {
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + -1;
      break;
    }
    goto LAB_080c0930;
  case 5:
    sub_080BC0AC(&DAT_082baace,9,6);
    iVar4 = 0;
    uVar3 = 0x9000000;
    iVar5 = 9;
    do {
      if ((&DAT_02002460)[iVar4] == '\0') {
        sub_080BC0AC(&DAT_082b932c,0xb,iVar5);
      }
      else {
        sub_080C26C0((&DAT_02002478)[iVar4 * 4],(&DAT_02002468)[iVar4],(&DAT_02002484)[iVar4],
                     (&DAT_02002488)[iVar4],0xb,uVar3 >> 0x18);
      }
      uVar3 = uVar3 + 0x2000000;
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    if ((DAT_02004caa & 0x80) != 0) {
      sub_08001EAC(0x29);
      uVar2 = sub_080C8B68(*(short *)(param_1 + 4) + 1,3);
      *(undefined2 *)(param_1 + 4) = uVar2;
    }
    if ((DAT_02004caa & 0x40) != 0) {
      sub_08001EAC(0x29);
      uVar2 = sub_080C8B68(*(short *)(param_1 + 4) + 2,3);
      *(undefined2 *)(param_1 + 4) = uVar2;
    }
    sub_080BC0AC(&UNK_082b932a,9,*(short *)(param_1 + 4) * 2 + 9);
    if ((DAT_02004ca8 & 2) != 0) {
      sub_08001EAC(0x28);
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined *)(param_1 + 2) = 2;
      break;
    }
    if ((DAT_02004ca8 & 1) == 0) break;
    sub_08001EAC(0x2a);
    if ((&DAT_02002460)[*(short *)(param_1 + 4)] == '\0') {
      sub_080010D0(*(undefined *)(param_1 + 4),param_1 + 0x6e90,0x170);
      *(undefined *)(param_1 + 2) = 7;
      break;
    }
    *(undefined2 *)(param_1 + 10) = 1;
    goto LAB_080c0b88;
  case 6:
    iVar4 = (int)*(short *)(param_1 + 4);
    sub_080C26C0((&DAT_02002478)[iVar4 * 4],(&DAT_02002468)[iVar4],(&DAT_02002484)[iVar4],
                 (&DAT_02002488)[iVar4],9,6);
    sub_080BC0AC(&DAT_082baaf4,9,9);
    if ((DAT_02004caa & 0xc0) != 0) {
      sub_08001EAC(0x29);
      *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) ^ 1;
    }
    sub_080BC0AC(&UNK_082b932a,9,*(short *)(param_1 + 10) * 2 + 0xb);
    if ((DAT_02004ca8 & 2) == 0) {
      if ((DAT_02004ca8 & 1) == 0) break;
      sub_08001EAC(0x2a);
      if (*(short *)(param_1 + 10) == 0) {
        sub_080010D0(*(undefined *)(param_1 + 4),param_1 + 0x6e90,0x170);
        goto LAB_080c0b88;
      }
    }
    else {
      sub_08001EAC(0x28);
    }
    *(undefined *)(param_1 + 2) = 5;
    break;
  case 7:
    if ((DAT_02004ce0 == '\x02') || (DAT_02004cfc == 0)) break;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 8:
    sub_080BC0AC(&DAT_082baade,10,9);
    if ((DAT_02004ca8 & 3) == 0) break;
    sub_08001EAC(0x2a);
LAB_080c0b88:
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    break;
  case 9:
    sVar1 = *(short *)(param_1 + 6) + -1;
    *(short *)(param_1 + 6) = sVar1;
    DAT_03001ba0 = (undefined)sVar1;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    if (sVar1 == 0) {
      DAT_02004f30 = DAT_02004f30 & 0xf0ff | 0x100;
      FUN_08000da4();
    }
  }
  if ((DAT_03001740 & 1) != 0) {
    DAT_02004f48 = CONCAT22(DAT_02004f48._2_2_ + -1,(short)DAT_02004f48 + 1);
  }
  return in_lr;
}

