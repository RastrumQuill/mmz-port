// sub_0800C834 at 0x0800C834 (thumb)

undefined4 sub_0800C834(int param_1)

{
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] =
         (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x6046;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    local_20 = 0x74000;
    local_1c = 0x75000;
    DAT_02022674 = sub_080A0288(&local_20,0,0);
    local_20 = 0x8b000;
    local_1c = 0x70000;
    DAT_02022678 = sub_080A0288(&local_20,1,0);
    local_20 = 0x93000;
    local_1c = 0x73000;
    DAT_0202267c = sub_080A0288(&local_20,2,0x70);
    local_20 = 0xb0000;
    local_1c = 0x75000;
    DAT_02022680 = sub_080A0288(&local_20,3,0);
    local_20 = 0xc7000;
    local_1c = 0x70000;
    DAT_02022684 = sub_080A0288(&local_20,1,0);
    local_20 = 0xcf000;
    local_1c = 0x73000;
    DAT_02022688 = sub_080A0288(&local_20,2,0x70);
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - DAT_02022670;
  return in_lr;
}

