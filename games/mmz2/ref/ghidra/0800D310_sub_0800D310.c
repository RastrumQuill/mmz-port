// sub_0800D310 at 0x0800D310 (thumb)

undefined4 sub_0800D310(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
         (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
    bVar1 = (&DAT_0831348c)[*(int *)(param_1 + 0x34) >> 4];
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    if (bVar1 < 10) {
      uVar2 = 0x1a4;
    }
    else if (bVar1 < 0x16) {
      uVar2 = 0x438;
    }
    else {
      uVar2 = 0x708;
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

