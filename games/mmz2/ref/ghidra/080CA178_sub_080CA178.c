// sub_080CA178 at 0x080CA178 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080CA178(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    sub_080127E4(param_1,0x3000);
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    uVar5 = (uint)_DAT_0202ebb4;
    if ((_DAT_0202ebb4 & 0x440) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08349034,param_1 + 0x54,0x40);
      *(int *)(param_1 + 0xa0) = param_1;
      *(uint *)(param_1 + 0x98) = uVar5 & 0x440;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto switchD_080ca18c_caseD_1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08349064,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080128D4(param_1);
    goto LAB_080ca39c;
  case 1:
switchD_080ca18c_caseD_1:
    sub_080128D4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
      return in_lr;
    }
    _DAT_0202ebb4 = _DAT_0202ebb4 | 0x40;
    sub_08022F38(DAT_0202e130);
    sub_080DEF4C(0x228);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 2:
    sub_080128D4(param_1);
    if (DAT_0202f65a != 0) {
      return in_lr;
    }
    DAT_0202e138 = '\0';
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 3:
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
    bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if ((_DAT_0202ebb4 & 0x400) == 0) {
      sub_080DEF4C(0x229);
    }
    else if ((_DAT_0202ebb4 & 0x8000) == 0) {
      if ((_DAT_0202ebb4 & 0x4000) == 0) {
        sub_080DEF4C(0x234);
      }
      else {
        sub_080DEF4C(0x235);
      }
    }
    else {
      sub_080DEF4C(0x236);
    }
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
    sub_080128D4(param_1);
    if (DAT_0202f65a != 0) {
      return in_lr;
    }
    DAT_0202e138 = '\0';
LAB_080ca39c:
    cVar2 = '\x03';
    break;
  default:
    goto switchD_080ca18c_caseD_5;
  }
  *(char *)(param_1 + 0xd) = cVar2;
switchD_080ca18c_caseD_5:
  return in_lr;
}

