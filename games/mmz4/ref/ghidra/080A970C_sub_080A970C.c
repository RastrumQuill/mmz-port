// sub_080A970C at 0x080A970C (thumb)

undefined4 sub_080A970C(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = sub_08014948(param_1 + 0x54);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xb5) = 0;
    uVar3 = 0xfffffd00;
  }
  else {
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (cVar1 = sub_08014948(param_1 + 0x54), cVar1 == '\x03')) {
      *(undefined *)(param_1 + 0xb5) = 2;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      uVar2 = 0x14;
      goto LAB_080a9792;
    }
    if ((*(char *)(param_1 + 0x10) == '\0') &&
       (cVar1 = sub_08014948(param_1 + 0x54), cVar1 == '\x04')) {
      *(undefined *)(param_1 + 0xb5) = 2;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
      uVar2 = 0x14;
      goto LAB_080a9792;
    }
    *(undefined *)(param_1 + 0xb5) = 1;
    uVar3 = 0xfffffc00;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar2 = 0xff;
LAB_080a9792:
  *(undefined *)(param_1 + 0x12) = uVar2;
  return in_lr;
}

