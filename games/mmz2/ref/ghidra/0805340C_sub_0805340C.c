// sub_0805340C at 0x0805340C (thumb)

undefined4 sub_0805340C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080032EC(0x94);
    sub_080127E4(param_1,0xa603);
    sub_08006E08(param_1 + 0x74,&DAT_0833c1c8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
        *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      sub_08057034(param_1);
    }
  }
  return in_lr;
}

