// sub_080C9F34 at 0x080C9F34 (thumb)

undefined4 sub_080C9F34(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080c9f48_caseD_1;
  case 2:
    sub_080128D4(param_1);
    if (DAT_0202f65a != 0) {
      return in_lr;
    }
    if ((DAT_0202ebb5 & 2) != 0) goto LAB_080ca146;
    DAT_0202ebb5 = DAT_0202ebb5 | 2;
    sub_08037BB0(DAT_0202e130,2);
    sub_08037BB0(DAT_0202e130,3);
    uVar1 = 0x183;
    goto LAB_080ca0f0;
  case 3:
    sub_080128D4(param_1);
    if (DAT_0202f65a != 0) {
      return in_lr;
    }
    sub_080DEF4C(0x184);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080128D4(param_1);
    if (DAT_0202f65a == 0) {
LAB_080ca146:
      DAT_0202e138 = '\0';
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  default:
    goto switchD_080c9f48_caseD_5;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08348fd4,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  sub_080127E4(param_1,0x4500);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c9f48_caseD_1:
  sub_080128D4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
    return in_lr;
  }
  if (DAT_0202e138 == '\0') {
    return in_lr;
  }
  if (DAT_03003908 != param_1 + 0x74) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if ((DAT_0202ebb5 & 2) == 0) {
    uVar1 = 0x21e;
LAB_080ca0f0:
    sub_080DEF4C(uVar1);
  }
  else {
    if ((DAT_0202ebb5 & 0x80) == 0) {
      if ((DAT_0202ebb5 & 0x40) == 0) {
        if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0) {
          sub_080DEF4C(0x21f);
          goto LAB_080ca0f4;
        }
        uVar1 = 0x22f;
      }
      else {
        if (DAT_0202ebc1 == '\0') {
          uVar1 = 0x230;
          goto LAB_080ca07e;
        }
        uVar1 = 0x231;
      }
      goto LAB_080ca0f0;
    }
    if (DAT_0202ebc1 != '\0') {
      uVar1 = 0x233;
      goto LAB_080ca0f0;
    }
    uVar1 = 0x232;
LAB_080ca07e:
    sub_080DEF4C(uVar1);
    DAT_0202ebc1 = DAT_0202ebc1 + '\x01';
  }
LAB_080ca0f4:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c9f48_caseD_5:
  return in_lr;
}

