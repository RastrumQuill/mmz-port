// sub_080CC1BC at 0x080CC1BC (thumb)

undefined4 sub_080CC1BC(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * -0x18;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (*(char *)(iVar3 + 0xd) == '\v') goto LAB_080cc272;
    cVar1 = '\0';
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
        sub_080CBCD8(param_1);
        return in_lr;
      }
      goto LAB_080cc272;
    }
    iVar3 = *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = iVar3 + -1;
    if (iVar3 >> 3 != 0) goto LAB_080cc272;
    sub_0801CF00(param_1,0x9503);
    sub_0801CFF0(param_1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    cVar1 = *(char *)(param_1 + 0xd);
  }
  *(char *)(param_1 + 0xd) = cVar1 + '\x01';
LAB_080cc272:
  sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

