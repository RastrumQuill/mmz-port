// sub_080F2048 at 0x080F2048 (thumb)

undefined4 sub_080F2048(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088669b8,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    sub_0801CF00(param_1,0x3000);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f205c_caseD_1:
    sub_0801CFF0(param_1);
    if ((((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0) && (DAT_0202dbf8 != '\0')) &&
       (DAT_03003908 == param_1 + 0x74)) {
      sub_08006984(0x57);
      bVar1 = 0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if ((DAT_0202e8b5 & 0x40) == 0) {
        uVar3 = 0x10;
      }
      else {
        sub_08112080(&DAT_0202f610,0x10400);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f205c_caseD_2:
        sub_0801CFF0(param_1);
        if (DAT_0202f612 != '\0') {
          return in_lr;
        }
        DAT_0202dbf8 = DAT_0202f612;
LAB_080f2238:
        uVar3 = 1;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
    }
switchD_080f205c_caseD_3:
    return in_lr;
  case 1:
    goto switchD_080f205c_caseD_1;
  case 2:
    goto switchD_080f205c_caseD_2;
  default:
    goto switchD_080f205c_caseD_3;
  case 0x10:
    sub_0810DED0(0x230);
    DAT_0202e8b4 = DAT_0202e8b4 & 0x7f;
    DAT_0202e8b5 = DAT_0202e8b5 & 0xe0 | 0x40;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x11:
    sub_0801CFF0(param_1);
    if (DAT_0202f38a != 0) {
      return in_lr;
    }
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
    goto LAB_080f2238;
  }
}

