// sub_08042940 at 0x08042940 (thumb)

undefined4 sub_08042940(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa314);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0x4d);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (bVar1 == 1) {
    local_14 = *(int *)(param_1 + 0x54) +
               ((int)((uint)(*(byte *)(param_1 + 10) >> 4 & 1) * 0x2000000 + -0x1000000) >> 0x18) *
               0x1400;
    local_10 = *(int *)(param_1 + 0x58) + -0x1200;
    uVar2 = sub_0809BD14(param_1,&local_14,0,1);
    *(undefined4 *)(param_1 + 200) = uVar2;
  }
  else if ((7 < bVar1) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

