// sub_0809B0FC at 0x0809B0FC (thumb)

undefined4 sub_0809B0FC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x151e);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    uVar1 = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 10) = (char)uVar1;
    sub_0809AC6C(param_1 + 0x54,uVar1 >> 4 & 1,0);
    sub_0809AC6C(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

