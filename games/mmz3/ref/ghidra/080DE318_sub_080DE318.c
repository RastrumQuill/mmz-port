// sub_080DE318 at 0x080DE318 (thumb)

undefined4 sub_080DE318(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  sub_08017700(param_1,0x9b00);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836df88;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x200;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0800393C(&DAT_085d8514,(DAT_0202fb46 - 0x280) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8520,(DAT_0202f946 - 5) * 0x20 + 0x200);
  }
  *(byte *)(param_1 + 0x11) = DAT_02030108 >> 6 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080DE3E4(param_1);
  return in_lr;
}

