// sub_0807F2BC at 0x0807F2BC (thumb)

undefined4 sub_0807F2BC(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc801);
    do {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      cVar1 = sub_08128A9C(uVar3 * 2 >> 0x11,6);
      *(char *)(param_1 + 0xd4) = cVar1;
    } while (*(char *)(param_1 + 0xd3) == cVar1);
    *(char *)(param_1 + 0xd3) = cVar1;
    sub_08002B10(0x59);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xf) = 0;
LAB_0807f336:
    *(undefined *)(param_1 + 0xe) = 2;
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_0801CF00(param_1,0xc801);
    sub_08002B10(0x59);
    goto LAB_0807f336;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) != '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 3;
    uVar2 = 0;
    goto LAB_0807f470;
  }
  pcVar5 = (char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,&DAT_0885a388 + (uint)(byte)(&DAT_0885a5e8)[*pcVar5] * 0x18);
  if (*(int *)(param_1 + 0x54) <
      *(int *)(param_1 + 0xb4) + *(int *)(&DAT_0885a5d0 + (uint)*(byte *)(param_1 + 0xd4) * 4)) {
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    if (*(char *)(param_1 + 0x72) < '\x02') {
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0885a5a0 + *pcVar5 * 4);
LAB_0807f414:
      *(int *)(param_1 + 0x54) = iVar4;
    }
  }
  else {
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if (*(char *)(param_1 + 0x72) < '\x02') {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_0885a5a0 + *pcVar5 * 4);
      goto LAB_0807f414;
    }
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x54) ==
      *(int *)(param_1 + 0xb4) + *(int *)(&DAT_0885a5d0 + (uint)*(byte *)(param_1 + 0xd4) * 4)) {
    sub_0801CF00(param_1,0xc800);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(undefined *)(param_1 + 0xf) = 1;
    return in_lr;
  }
  uVar2 = 1;
LAB_0807f470:
  *(undefined *)(param_1 + 0xe) = uVar2;
  return in_lr;
}

