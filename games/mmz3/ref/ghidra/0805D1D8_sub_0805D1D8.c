// sub_0805D1D8 at 0x0805D1D8 (thumb)

undefined4 sub_0805D1D8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb50d);
    *(undefined *)(param_1 + 0x24) = 0xe0;
    sub_08007390(param_1 + 0x74,&DAT_08361720);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xfffffc00;
    }
    else {
      uVar2 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0x400;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  sVar1 = sub_08009A3C(iVar3,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 != 0) {
      sVar1 = sub_08010F08(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar1 != 0) {
        sub_08010F70(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      }
      sub_0800471C(0x52);
      sub_0801ACF8(5,param_1 + 0x54);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(undefined *)(param_1 + 0xd) = 0x1c;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    sVar1 = sub_08010F08(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      sub_08010F70(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    sub_0800471C(0x52);
    sub_0801ACF8(5,param_1 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

