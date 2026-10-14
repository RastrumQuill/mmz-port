// sub_0807A754 at 0x0807A754 (thumb)

undefined4 sub_0807A754(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(undefined4 *)(param_1 + 0x58);
    sub_080B7AC8(param_1,&local_10,&DAT_08363f22,3);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

