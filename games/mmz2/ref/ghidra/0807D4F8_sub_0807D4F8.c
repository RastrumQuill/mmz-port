// sub_0807D4F8 at 0x0807D4F8 (thumb)

undefined4 sub_0807D4F8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x107);
    (&DAT_0202ebb4)[*(ushort *)(&DAT_08340730 + (uint)*(byte *)(param_1 + 0x11) * 2) >> 3] =
         (byte)(1 << (*(ushort *)(&DAT_08340730 + (uint)*(byte *)(param_1 + 0x11) * 2) & 7)) |
         (&DAT_0202ebb4)[*(ushort *)(&DAT_08340730 + (uint)*(byte *)(param_1 + 0x11) * 2) >> 3];
    sub_080127E4(param_1,0x5802);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (7 < bVar1) {
    sub_080032EC(0x2a);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x1000;
    local_1c = &DAT_0202e188;
    sub_080AC60C(1,&local_24);
    uVar2 = *local_1c * 0x343fd + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *local_1c = uVar2 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x1000;
    sub_080AC60C(2,&local_24);
    sub_0801DD2C(7,param_1 + 0x54);
    if (DAT_0202ebf7 + -2 < 1) {
      DAT_0202ebf7 = '\0';
    }
    else {
      DAT_0202ebf7 = DAT_0202ebf7 + -2;
    }
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

