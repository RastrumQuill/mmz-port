// sub_08031F84 at 0x08031F84 (thumb)

undefined4 sub_08031F84(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0x2f02);
    *pcVar3 = *pcVar3 + '\x01';
  }
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 4;
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_080311C0(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xf) != '\x02') {
      sub_08017700(param_1,0x701);
      goto LAB_08032030;
    }
    uVar2 = 0x702;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x03') {
      sub_080177CC(param_1,0x704,4,1);
      goto LAB_08032030;
    }
    uVar2 = 0x705;
  }
  sub_080177CC(param_1,uVar2,1,1);
LAB_08032030:
  *(undefined *)(param_1 + 0xec) = 0;
  return in_lr;
}

