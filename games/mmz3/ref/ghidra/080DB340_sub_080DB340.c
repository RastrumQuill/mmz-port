// sub_080DB340 at 0x080DB340 (thumb)

undefined4 sub_080DB340(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (DAT_02030ea2 != '\0') {
        return in_lr;
      }
      DAT_0202f5c8 = DAT_02030ea2;
      cVar2 = '\x01';
      goto LAB_080db3ee;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_0800736C(param_1 + 0x74,&DAT_0836dbd8,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
    return in_lr;
  }
  if (DAT_0202f5c8 == '\0') {
    return in_lr;
  }
  if (DAT_03003908 != param_1 + 0x74) {
    return in_lr;
  }
  sub_0800471C(0x12a);
  sub_080EDB10(&DAT_02030ea0,0x70400);
  cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080db3ee:
  *(char *)(param_1 + 0xd) = cVar2;
  return in_lr;
}

