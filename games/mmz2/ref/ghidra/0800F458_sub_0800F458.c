// sub_0800F458 at 0x0800F458 (thumb)

undefined4 sub_0800F458(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    if ((byte)(&DAT_0831348c)[*(int *)(param_1 + 0x34) >> 4] < 0x1a) {
      *(undefined4 *)(param_1 + 0x48) = 0xc0;
      *(undefined4 *)(param_1 + 0x50) = 400;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0xe0;
      *(undefined4 *)(param_1 + 0x4c) = 0x32a;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

