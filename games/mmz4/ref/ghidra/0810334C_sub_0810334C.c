// sub_0810334C at 0x0810334C (thumb)

undefined4 sub_0810334C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08002B10(0x182);
  uVar1 = 0;
  do {
    sub_080E38B8(param_1 + 0x54,&DAT_088688d0 + uVar1 * 0x1c,0,0);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 10);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

