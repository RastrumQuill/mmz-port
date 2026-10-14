// sub_08016804 at 0x08016804 (thumb)

undefined4 sub_08016804(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_080168fe;
  (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] =
       (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x20;
  *(undefined4 *)(param_1 + 0x48) = 0x20;
  if (*(int *)(param_1 + 0x34) < 0x5a0) {
    *(undefined4 *)(param_1 + 0x4c) = 0x276;
    *(undefined4 *)(param_1 + 0x50) = 700;
    DAT_0202e494 = 0x34000;
    DAT_0202e49c = 0x3c0000;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0x834;
    *(undefined4 *)(param_1 + 0x50) = 0x460;
    DAT_0202e49c = 0x9e000;
    DAT_0202e494 = 0;
  }
  if (DAT_0202f4a9 == '\0') {
    uVar2 = 0x69;
LAB_080168d2:
    sub_080040A8(uVar2,0);
  }
  else {
    if (DAT_0202f4a9 == '\x01') {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x140;
      sub_080040A8(0x78,0);
      sub_080040A8(0x79,0);
      uVar2 = 0x7a;
      goto LAB_080168d2;
    }
    if (DAT_0202f4a9 == '\x02') {
      sub_080040A8(0xc9,0);
      sub_080040A8(0xca,0);
    }
  }
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080168fe:
  if (DAT_0202f4a9 == '\0') {
    sub_080041E4(0x69);
  }
  else if (DAT_0202f4a9 == '\x01') {
    sub_080041E4(0x78);
    sub_080041E4(0x79);
    sub_080041E4(0x7a);
    sub_080041E4(0x7b);
    sVar1 = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = sVar1;
    if (sVar1 == 0xe10) {
      sub_08004230(0x7b);
      sub_080040A8(0x7b,0);
      *(undefined2 *)(param_1 + 0x10) = 0;
    }
  }
  else if (DAT_0202f4a9 == '\x02') {
    sub_080041E4(0xc9);
    sub_080041E4(0xca);
  }
  return in_lr;
}

