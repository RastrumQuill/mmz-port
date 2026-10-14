// sub_080FC60C at 0x080FC60C (thumb)

undefined4 sub_080FC60C(int param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08867a04,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80fd935;
  *(short *)(param_1 + 0xb6) = -0x6100;
  sub_0801CF00(param_1);
  pcVar3 = (char *)(param_1 + 0xb4);
  *pcVar3 = '\0';
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if ((*pcVar3 < '\0') || (*(short *)(param_1 + 0xb6) == -0x60f9)) {
    sub_08005784(param_1 + 0x74,&DAT_08867a7c);
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_08867a04 + *pcVar3 * 0x18);
  }
  cVar1 = *(char *)(param_1 + 0xb4);
  if (cVar1 < '\x01') {
    if ((cVar1 != '\0') ||
       (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      goto LAB_080fc70c;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar2 = &LAB_08867aa4;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar2 = &LAB_08867aa4 + *(char *)(param_1 + 0xb4) * 8;
  }
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined2 *)(param_1 + 0x26) = 0x201;
LAB_080fc70c:
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined *)(param_1 + 0x13) = 1;
  *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) =
       *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) |
       1 << (*(byte *)(param_1 + 0x11) & 0x1f);
  if ((*(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4) &
      1 << (*(byte *)(param_1 + 0x11) & 0x1f)) != 0) {
    *(undefined *)(param_1 + 0x10) = 4;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080FC78C(param_1);
  return in_lr;
}

