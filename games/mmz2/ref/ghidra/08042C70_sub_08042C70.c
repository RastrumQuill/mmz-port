// sub_08042C70 at 0x08042C70 (thumb)

undefined4 sub_08042C70(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa310);
    local_18 = *(int *)(param_1 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x1000;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    sub_0809BD14(param_1,&local_18,1,0);
    sub_0809BD14(param_1,&local_18,1,1);
    sub_0809BD14(param_1,&local_18,1,2);
    sub_080127E4(param_1,0xa310);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xc1) = 0;
    sub_080032EC(0x4d);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  uVar1 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

