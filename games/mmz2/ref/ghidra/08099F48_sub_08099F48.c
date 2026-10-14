// sub_08099F48 at 0x08099F48 (thumb)

undefined4 sub_08099F48(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080AC60C(1,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0x35);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    sub_08099AEC(param_1,((uint)*(byte *)(param_1 + 0x12) << 0x1d) >> 0x18);
  }
  else {
    sub_08099AEC(param_1,~((uint)*(byte *)(param_1 + 0x12) << 5) & 0xff);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (6 < bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

