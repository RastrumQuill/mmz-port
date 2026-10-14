// sub_08087A74 at 0x08087A74 (thumb)

undefined4 sub_08087A74(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885bac8);
    sub_0801CF00(param_1,0x1d09);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08002B10(0x2c);
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0xa00;
    uVar2 = sub_0810CD50(*(undefined4 *)(DAT_0202dbf0 + 0x54),
                         *(int *)(DAT_0202dbf0 + 0x58) + -0x1000);
    sub_080BD058(&local_18,0x180,uVar2);
    cVar1 = *(char *)(param_1 + 0xb4) + -1;
    *(char *)(param_1 + 0xb4) = cVar1;
    if (cVar1 != '\0') {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      uVar3 = uVar3 * 2 >> 0x11 & 1;
      cVar1 = (char)uVar3;
      if (uVar3 != 0) {
        *(undefined *)(param_1 + 0x12) = 0x18;
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0xe) = 6;
    *(char *)(param_1 + 0xf) = cVar1;
  }
  return in_lr;
}

