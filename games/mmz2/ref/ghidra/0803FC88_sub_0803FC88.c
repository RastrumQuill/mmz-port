// sub_0803FC88 at 0x0803FC88 (thumb)

undefined4 sub_0803FC88(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    local_14 = 0;
    local_10 = 0;
    uVar1 = sub_080B878C(param_1,&local_14);
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (1 < *(byte *)(*(int *)(param_1 + 0xc0) + 0xc)) {
    DAT_0202ec42 = DAT_0202ec42 | 2;
  }
  return in_lr;
}

