// sub_0808965C at 0x0808965C (thumb)

undefined4 sub_0808965C(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xc0) + 0x1f04);
    sub_08005784(param_1 + 0x74,
                 &DAT_0885bc08 + (uint)(byte)(&DAT_0885bd70)[*(byte *)(param_1 + 0xc0)] * 0x18);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) {
LAB_080896fa:
      uVar2 = 2;
      goto LAB_08089708;
    }
  }
  else if (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) < 0) goto LAB_080896fa;
  uVar2 = 1;
LAB_08089708:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

