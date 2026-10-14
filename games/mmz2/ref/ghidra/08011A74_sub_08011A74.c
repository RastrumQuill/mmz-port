// sub_08011A74 at 0x08011A74 (thumb)

undefined4 sub_08011A74(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x20;
    *(undefined4 *)(param_1 + 0x48) = 0x20;
    if (*(int *)(param_1 + 0x34) < 0x5a0) {
      *(undefined4 *)(param_1 + 0x4c) = 0x276;
      *(undefined4 *)(param_1 + 0x50) = 700;
      DAT_0202d00c = 0x34000;
      DAT_0202d014 = 0x3c0000;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0x834;
      *(undefined4 *)(param_1 + 0x50) = 0x460;
      DAT_0202d014 = 0x9e000;
      DAT_0202d00c = 0;
    }
    sub_08002D68(0x2f,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08002EA0(0x2f);
  return in_lr;
}

