// sub_0809843C at 0x0809843C (thumb)

undefined4 sub_0809843C(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  undefined uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    sub_080987F0(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    sub_08001D30(&DAT_08c44e88,(DAT_0202e1b4 - 0x200) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44e94,(DAT_0202dfb4 - 4) * 0x20 + 0x200);
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08098884(param_1);
    return in_lr;
  }
  piVar5 = (int *)(param_1 + 0xc0);
  if (*piVar5 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080984fa:
      if (*piVar5 != 0) goto LAB_08098500;
    }
    else {
      iVar6 = sub_0802AD94(0,param_1,&DAT_0885d734);
      *piVar5 = iVar6;
      if (iVar6 != 0) {
        sub_08005784(param_1 + 0x74,&DAT_0885d698);
        goto LAB_080984fa;
      }
    }
  }
  else {
LAB_08098500:
    iVar6 = sub_0802B3CC(*piVar5);
    if (iVar6 == 0) {
      sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
      sub_0801CFC8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
      sub_0801CFF0(param_1);
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885d680);
    *piVar5 = 0;
  }
  cVar2 = *(char *)(param_1 + 0xd);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001) &&
         ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x6000U < 0xc001)) {
        local_14 = *(int *)(param_1 + 0x58) + 0xc00;
        local_18 = *(int *)(param_1 + 0x54);
        sub_08098220(&local_18,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_0801CF00(param_1,0xba08);
        *(undefined *)(param_1 + 0xbe) = 4;
LAB_0809871a:
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if ((cVar2 == '\x02') &&
            (cVar2 = *(char *)(param_1 + 0xbe) + -1, *(char *)(param_1 + 0xbe) = cVar2, cVar2 == -1)
            ) {
      sub_0801CF00(param_1,0xba04);
      goto LAB_0809871a;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    if (iVar6 < *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 0x10)
    {
      sub_0801CF00(param_1,0xba0c);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 0x10;
      *(int *)(param_1 + 0xb4) =
           *(int *)(param_1 + 0x54) +
           *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
           * -0x10;
      bVar3 = *(byte *)(param_1 + 10);
      uVar8 = ~(uint)(bVar3 >> 4) & 1;
      if (uVar8 == 0) {
        bVar3 = bVar3 & 0xef;
      }
      else {
        bVar3 = bVar3 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(char *)(param_1 + 0x4c) = (char)uVar8;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = 4;
      }
      else {
        uVar4 = 0xfc;
      }
      *(undefined *)(param_1 + 0x13) = uVar4;
      *(undefined *)(param_1 + 0xbe) = 0x40;
      *(undefined *)(param_1 + 0xd) = 0;
    }
    goto LAB_080987e0;
  }
  uVar8 = (uint)*(byte *)(param_1 + 0x13) + (uint)*(byte *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = (char)uVar8;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) +
       *(short *)((int)&DAT_08128c10 + ((uVar8 + 0x40) * 0x1000000 >> 0x17)) * 0x10;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 0x10;
  if (((uVar8 & 0x7f) - 0xc & 0xff) < 0x69) {
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      if ((int)(uVar8 * 0x1000000) < 0) goto LAB_080985ca;
      uVar7 = 0xba03;
      goto LAB_080985cc;
    }
    if (-1 < (int)(uVar8 * 0x1000000)) {
LAB_080985ca:
      uVar7 = 0xba01;
      goto LAB_080985cc;
    }
    sub_0801CFC8(param_1,0xba03,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  else {
    uVar7 = 0xba02;
LAB_080985cc:
    sub_0801CFC8(param_1,uVar7,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  cVar2 = *(char *)(param_1 + 0xbe);
  if (cVar2 == '\0') {
    iVar9 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar6 = *(int *)(param_1 + 0x54);
    if (((iVar9 - iVar6) + 0x6800U < 0xd001) &&
       ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x6000U < 0xc001)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (iVar6 <= iVar9) goto LAB_080987e0;
      }
      else if (iVar9 <= iVar6) goto LAB_080987e0;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar7 = 0xfffffe00;
      }
      else {
        uVar7 = 0x200;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar7;
      *(undefined4 *)(param_1 + 0x68) = 8;
      *(undefined4 *)(param_1 + 0x60) = 0x120;
      sub_0801CF00(param_1,0xba00);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    *(char *)(param_1 + 0xbe) = cVar2 + -1;
  }
LAB_080987e0:
  sub_0801CFF0(param_1);
  return in_lr;
}

