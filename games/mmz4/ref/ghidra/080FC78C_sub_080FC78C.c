// sub_080FC78C at 0x080FC78C (thumb)

undefined4 sub_080FC78C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_0202dbf0;
  iVar5 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  *(byte *)(param_1 + 0xb5) = (byte)((uint)iVar5 >> 0x1f);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
        if (*(char *)(param_1 + 0x10) == '\x02') goto LAB_080fc91a;
        uVar3 = 2;
      }
      else {
        if (((*(char *)(param_1 + 0x10) != '\0') &&
            ((*(char *)(param_1 + 0x10) != '\x03' || (*(char *)(param_1 + 0xd) != '\x02')))) ||
           (0xf9 < *(short *)(param_1 + 0xa4))) goto LAB_080fc91a;
        uVar3 = 3;
      }
      *(undefined *)(param_1 + 0x10) = uVar3;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else if (*(char *)(param_1 + 0x10) != '\x01') {
      *(undefined *)(param_1 + 0x10) = 1;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_0803A584(iVar2,8,0);
    }
    goto LAB_080fc91a;
  }
  if (iVar5 < 0) {
    uVar6 = *(byte *)(param_1 + 0x11) - 1;
    if (((*(uint *)(&DAT_0202dad8 + (((int)uVar6 >> 5) + 1) * 4) & 1 << (uVar6 & 0x1f)) == 0) &&
       (*(char *)(param_1 + 0x10) != '\x02')) {
      cVar4 = *(char *)(param_1 + 0x13);
      if (cVar4 != '\0') {
LAB_080fc8b0:
        *(char *)(param_1 + 0x13) = cVar4 + -1;
        goto LAB_080fc91a;
      }
      if (-1 < *(char *)(param_1 + 0xb4)) {
        sVar1 = *(short *)(param_1 + 0xb6);
joined_r0x080fc8d6:
        if (sVar1 != -0x60f9) {
          sub_08005784(param_1 + 0x74,&DAT_08867a04 + *(char *)(param_1 + 0xb4) * 0x18);
          goto LAB_080fc91a;
        }
      }
    }
    else {
      *(undefined *)(param_1 + 0x13) = 1;
    }
  }
  else {
    uVar6 = *(byte *)(param_1 + 0x11) + 1;
    if (((*(uint *)(&DAT_0202dad8 + (((int)uVar6 >> 5) + 1) * 4) & 1 << (uVar6 & 0x1f)) != 0) ||
       (*(char *)(param_1 + 0x10) == '\x02')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08005784(param_1 + 0x74,&DAT_08867a7c);
      goto LAB_080fc91a;
    }
    cVar4 = *(char *)(param_1 + 0x13);
    if (cVar4 != '\0') goto LAB_080fc8b0;
    if (-1 < *(char *)(param_1 + 0xb4)) {
      sVar1 = *(short *)(param_1 + 0xb6);
      goto joined_r0x080fc8d6;
    }
  }
  sub_08005784(param_1 + 0x74,&DAT_08867a7c);
LAB_080fc91a:
  sub_08128884(param_1,*(undefined4 *)(&DAT_088679f0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0801CFF0(param_1);
  return in_lr;
}

