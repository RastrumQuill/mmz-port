// sub_080A2578 at 0x080A2578 (thumb)

undefined4 sub_080A2578(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) != '\x02') {
    sub_080032EC(0x35);
    sub_080AC60C(2,param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

