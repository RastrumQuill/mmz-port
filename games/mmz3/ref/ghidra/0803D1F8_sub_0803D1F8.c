// sub_0803D1F8 at 0x0803D1F8 (thumb)

undefined4 sub_0803D1F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0835e0b0 + (uint)*(byte *)(param_1 + 0x11) * 2));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  sub_080177F4(param_1);
  if (*(byte *)(param_1 + 0x11) < 6) {
    if (*(char *)(param_1 + 0x71) == '\x01') {
LAB_0803d26e:
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(undefined *)(param_1 + 0x12) = 1;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_0800736C(param_1 + 0x74,
                     *(undefined4 *)(&DAT_0835e0c4 + (uint)*(byte *)(param_1 + 0x11) * 4),
                     param_1 + 0x54,1);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
    }
  }
  else if (*(char *)(param_1 + 0x71) == '\x02') goto LAB_0803d26e;
  if (*(byte *)(param_1 + 0x11) < 6) {
    if (*(char *)(param_1 + 0x71) != '\x04') goto LAB_0803d2de;
  }
  else if (*(char *)(param_1 + 0x71) != '\x05') goto LAB_0803d2de;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
LAB_0803d2de:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

