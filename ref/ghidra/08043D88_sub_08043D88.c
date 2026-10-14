// sub_08043D88 at 0x08043D88 (thumb)

undefined4 sub_08043D88(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080296B0(param_1);
    sub_08029778(param_1,0xe);
    sub_0800561C(param_1 + 0x74,&DAT_082ae578);
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1400;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08043d9e_caseD_1:
    cVar2 = sub_08042DE4(param_1);
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 0x13) + '\x01';
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\x0e') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      bVar3 = *(byte *)(param_1 + 0x12);
      uVar7 = sub_08042D50(param_1);
      iVar5 = (uVar7 & 0xff) - (uint)bVar3;
      iVar6 = iVar5 * 0x1000000 >> 0x18;
      iVar9 = iVar6;
      if (iVar6 < 0) {
        iVar9 = -iVar6;
      }
      if (0x7f < iVar9) {
        iVar5 = iVar6;
      }
      iVar9 = (char)iVar5 * 0x30;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xff;
      }
      cVar2 = bVar3 + (char)((uint)iVar9 >> 8);
      *(char *)(param_1 + 0x1f) = cVar2;
      *(char *)(param_1 + 0x12) = cVar2;
LAB_08043fea:
      sub_080297C0(param_1);
    }
switchD_08043d9e_caseD_a:
    return in_lr;
  case 1:
    goto switchD_08043d9e_caseD_1;
  case 2:
    sub_08001EAC(0x84);
    sub_080428D0(param_1,0,0,0x70);
    sub_080428D0(param_1,1,0,0x90);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfd;
    iVar9 = *(int *)(param_1 + 0xc0);
    *(undefined *)(iVar9 + 0x13) = *(undefined *)(param_1 + 0x12);
    sub_0804283C(param_1,0,3,&local_14);
    *(undefined4 *)(iVar9 + 0x4c) = local_14;
    *(undefined4 *)(iVar9 + 0x50) = local_10;
    iVar9 = *(int *)(param_1 + 0xc4);
    *(undefined *)(iVar9 + 0x13) = *(undefined *)(param_1 + 0x12);
    sub_0804283C(param_1,1,3,&local_14);
    *(undefined4 *)(iVar9 + 0x4c) = local_14;
    *(undefined4 *)(iVar9 + 0x50) = local_10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar2 = sub_08042A1C(param_1,0);
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    bVar3 = sub_08042CE8(param_1,0,3);
    if (bVar3 != *(byte *)(param_1 + 0xe0)) {
      if (*(byte *)(param_1 + 0xe0) < bVar3) {
        sub_0804296C(param_1,0);
      }
      else {
        uVar8 = 0;
LAB_08043fd2:
        sub_080429D4(param_1,uVar8);
      }
    }
LAB_08043fd6:
    sub_08042C24(param_1,0,3);
    sub_08042C24(param_1,1,3);
    goto LAB_08043fea;
  case 4:
    uVar4 = sub_08001EAC(0x86);
    *(undefined2 *)(param_1 + 0xbc) = uVar4;
    sub_080858C8(*(undefined4 *)(param_1 + 0xd0));
    uVar7 = sub_0804246C(param_1);
    *(undefined *)(param_1 + 0x13) = (&DAT_082ae844)[uVar7 & 0xff];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto LAB_08043fea;
  case 6:
    sub_08001EAC(0x84);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    cVar2 = sub_08042A1C(param_1,1);
    if (cVar2 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    bVar3 = sub_08042CE8(param_1,1,3);
    if (bVar3 != *(byte *)(param_1 + 0xe1)) {
      if (*(byte *)(param_1 + 0xe1) < bVar3) {
        sub_0804296C(param_1,1);
        goto LAB_08043fd6;
      }
      uVar8 = 1;
      goto LAB_08043fd2;
    }
    goto LAB_08043fd6;
  case 8:
    sub_080858C8(*(undefined4 *)(param_1 + 0xd4));
    uVar7 = sub_0804246C(param_1);
    *(undefined *)(param_1 + 0x13) = (&DAT_082ae847)[uVar7 & 0xff];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080297C0(param_1);
  default:
    goto switchD_08043d9e_caseD_a;
  }
}

