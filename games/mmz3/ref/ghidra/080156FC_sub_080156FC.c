// sub_080156FC at 0x080156FC (thumb)

undefined4 sub_080156FC(int param_1)

{
  byte bVar1;
  char cVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = *(uint *)(param_1 + 0x5c) & 0xffff;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0801572c:
    uVar4 = uVar5 >> 4;
    (&DAT_020023c4)[uVar4] = (ushort)*(undefined4 *)(param_1 + 100) | 0x47;
    (&DAT_020023cc)[uVar4] = 0;
    sub_080FE110(&DAT_08533ff8,&DAT_0202e4a4,0x200);
    sub_0800393C(&DAT_087b776c,0x4000);
    sub_08003E14(&DAT_087b7778,0);
    sub_0800393C(&DAT_087b7780,0x4000);
    sub_08003E14(&DAT_087b778c,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08015794:
    psVar3 = (short *)((int)&DAT_020023cc + (uVar5 >> 4) * 4 + 2);
    *psVar3 = *psVar3 + 4;
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && (DAT_0202f4a4 != '\0')) {
      *(undefined *)(param_1 + 0xe) = 1;
      goto LAB_0801572c;
    }
  }
  else if (bVar1 == 2) goto LAB_08015794;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    goto switchD_080157b2_caseD_0;
  case 1:
    goto switchD_080157b2_caseD_1;
  case 2:
    sub_08004230(0x10d);
    sub_080040A8(0x10e,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_080041E4(0x10e);
    if (DAT_0202f4a7 == '\x01') {
      return in_lr;
    }
    sub_080093E8(0x1f,8,0x60);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 4:
    break;
  default:
    goto switchD_080157b2_caseD_5;
  }
  if (DAT_0202f4a4 == '\0') {
    sub_080041E4(0x10e);
    return in_lr;
  }
  sub_08004230(0x10e);
  goto LAB_0801589c;
switchD_080157b2_caseD_0:
  if (DAT_0202f4a7 == '\0') {
    return in_lr;
  }
  sub_080040A8(0x10d,0);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_080157b2_caseD_1:
  cVar2 = sub_080041E4(0x10d);
  if (cVar2 == '\x04') {
LAB_0801589c:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_080157b2_caseD_5:
  return in_lr;
}

