// sub_080FCA4C at 0x080FCA4C (thumb)

undefined4 sub_080FCA4C(int param_1)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(short *)(param_1 + 0xb6) = -0x60ff;
    sub_0801CF00(param_1);
    pcVar2 = (char *)(param_1 + 0xb4);
    *pcVar2 = -1;
    sub_080127C8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((*pcVar2 < '\0') || (*(short *)(param_1 + 0xb6) == -0x60f9)) {
      sub_08005784(param_1 + 0x74,&DAT_08867a7c);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_08867a04 + *pcVar2 * 0x18);
    }
    if (*pcVar2 < '\x01') {
      if ((*pcVar2 == '\0') &&
         (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x6100)) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        puVar1 = &LAB_08867aa4;
        goto LAB_080fcb0a;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar1 = &LAB_08867aa4 + *pcVar2 * 8;
LAB_080fcb0a:
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined2 *)(param_1 + 0x26) = 0x201;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) =
         *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) &
         ~(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
    uVar4 = 0;
    do {
      sub_080E38B8(param_1 + 0x54,&DAT_08867acc + uVar4 * 0x1c,0,
                   (~(uint)*(byte *)(param_1 + 0xb5) & 0xf) << 4 | (uint)*(byte *)(param_1 + 0xb5));
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < 5);
    if ((DAT_0202cac0 & 0xf) != 0) {
      *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4) =
           *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4) |
           1 << (*(byte *)(param_1 + 0x11) & 0x1f);
      *(undefined *)(param_1 + 0x10) = 4;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar3 < 0) {
      iVar3 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    }
    if (iVar3 < 0x2001) {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_080fccc6;
  *(short *)(param_1 + 0xb6) = -0x60f9;
  sub_0801CF00(param_1,0x9f07);
  pcVar2 = (char *)(param_1 + 0xb4);
  *pcVar2 = '\0';
  if (*(short *)(param_1 + 0xb6) == -0x60f9) {
    sub_08005784(param_1 + 0x74,&DAT_08867a7c);
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_08867a04 + *pcVar2 * 0x18);
  }
  if (*pcVar2 < '\x01') {
    if ((*pcVar2 == '\0') &&
       (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar1 = &LAB_08867aa4;
      goto LAB_080fcca6;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar1 = &LAB_08867aa4 + *pcVar2 * 8;
LAB_080fcca6:
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined2 *)(param_1 + 0x26) = 0x201;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080fccc6:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0801281C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  return in_lr;
}

