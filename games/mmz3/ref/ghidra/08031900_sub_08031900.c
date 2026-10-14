// sub_08031900 at 0x08031900 (thumb)

undefined4 sub_08031900(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x126) = 10;
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0x2500);
    sub_0803964C(param_1);
    *pcVar3 = *pcVar3 + '\x01';
    return in_lr;
  }
  sub_08034558(param_1,0x2500);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2500) {
    sub_080177CC(param_1,0x2500,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (('\x05' < *(char *)(param_1 + 0x71)) &&
     (cVar1 = sub_080341A4(param_1,param_1 + 0x128), cVar1 != '\0')) {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_080311C0(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xf) != '\x02') {
      sub_08017700(param_1,0x701);
      goto LAB_080319f4;
    }
    uVar2 = 0x702;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x03') {
      sub_080177CC(param_1,0x704,4,1);
      goto LAB_080319f4;
    }
    uVar2 = 0x705;
  }
  sub_080177CC(param_1,uVar2,1,1);
LAB_080319f4:
  *(undefined *)(param_1 + 0x126) = 0xff;
  return in_lr;
}

