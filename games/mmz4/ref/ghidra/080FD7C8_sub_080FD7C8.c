// sub_080FD7C8 at 0x080FD7C8 (thumb)

undefined4 sub_080FD7C8(int param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return in_lr;
  }
  *(short *)(param_1 + 0xb6) = -0x60ff;
  sub_0801CF00(param_1);
  pcVar2 = (char *)(param_1 + 0xb4);
  *pcVar2 = -1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if ((*pcVar2 < '\0') || (*(short *)(param_1 + 0xb6) == -0x60f9)) {
    sub_08005784(param_1 + 0x74,&DAT_08867a7c);
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_08867a04 + *pcVar2 * 0x18);
  }
  if (*pcVar2 < '\x01') {
    if ((*pcVar2 != '\0') ||
       (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      goto LAB_080fd89c;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar1 = &LAB_08867aa4;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    puVar1 = &LAB_08867aa4 + *pcVar2 * 8;
  }
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined2 *)(param_1 + 0x26) = 0x201;
LAB_080fd89c:
  *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) =
       *(uint *)(&DAT_0202dad8 + ((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4) &
       ~(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
  sub_080127C8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

