// sub_080DCAFC at 0x080DCAFC (thumb)

undefined4 sub_080DCAFC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < DAT_020302c0 + -0x29400) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0) {
      bVar1 = *(byte *)(param_1 + 0x13);
      *(byte *)(param_1 + 0x13) = bVar1 + 1;
      if (0x78 < bVar1) {
        uVar3 = sub_080DC704(param_1,1,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
    }
    else if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      *(byte *)(param_1 + 0x13) = (byte)(uVar2 * 2 >> 0x11) & 0x3f;
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0xf0 < bVar1) {
      sub_080DC704(param_1,2,0);
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      *(byte *)(param_1 + 0x12) = (byte)(uVar2 * 2 >> 0x11) & 0x3f;
    }
  }
  return in_lr;
}

