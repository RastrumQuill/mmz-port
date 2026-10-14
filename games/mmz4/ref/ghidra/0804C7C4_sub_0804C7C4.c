// sub_0804C7C4 at 0x0804C7C4 (thumb)

undefined4 sub_0804C7C4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5b00);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08854238,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x804cc3d;
  *(byte *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbe) = 2;
  pcVar2 = (char *)(param_1 + 0xbf);
  *pcVar2 = '\x03';
  cVar1 = sub_0803A4B4(uVar3);
  *pcVar2 = cVar1 + *pcVar2;
  cVar1 = sub_08038A84(uVar3);
  if (cVar1 != '\0') {
    *pcVar2 = *pcVar2 << 1;
  }
  sub_08005794(param_1 + 0x74,&DAT_08854238 + (uint)*(byte *)(param_1 + 0xbd) * 0x30,*pcVar2,
               0xffffffff,0xffffffff,*(undefined *)(param_1 + 0xbe));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xfffffc00;
  }
  else {
    uVar3 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_0804C764(param_1);
  return in_lr;
}

