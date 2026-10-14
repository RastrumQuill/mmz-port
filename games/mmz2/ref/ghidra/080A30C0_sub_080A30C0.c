// sub_080A30C0 at 0x080A30C0 (thumb)

undefined4 sub_080A30C0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080127E4(param_1,0x3903);
  }
  else {
    sub_080127E4(param_1,0x390a);
  }
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08344860,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  uVar1 = 0;
  do {
    sub_080A2FCC(param_1,1,*(undefined *)(param_1 + 0x11),uVar1 & 0xff);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A3090(param_1);
  return in_lr;
}

