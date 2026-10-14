// sub_080FF4D8 at 0x080FF4D8 (thumb)

undefined4 sub_080FF4D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5a00);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0886812c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  iVar1 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (((int)(uint)DAT_0202daee >> (uint)*(byte *)(param_1 + 0x10) & 1U) == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
  sub_080FF554(param_1);
  return in_lr;
}

