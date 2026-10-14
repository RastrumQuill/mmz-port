// sub_080CC758 at 0x080CC758 (thumb)

undefined4 sub_080CC758(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080cc7fa;
  }
  *(undefined *)(param_1 + 0x25) = 0x1d;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) * -0x10 + -0x28;
  if (*(byte *)(param_1 + 0x11) == 0) {
    uVar4 = 0x3901;
LAB_080cc7de:
    sub_08017700(param_1,uVar4);
  }
  else {
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      uVar4 = 0x3902;
      goto LAB_080cc7de;
    }
    sub_08017700(param_1,0x3903);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080cc7fa:
  if ((*(char *)(param_1 + 0x13) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 0x10) {
    if ((bVar1 & 2) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 == 1) {
    sub_0800471C(0x3f);
    sub_080BE124(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(byte *)(param_1 + 0x94) = bVar1 - 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080177F4(param_1);
  return in_lr;
}

