// sub_0800B44C at 0x0800B44C (thumb)

undefined4 sub_0800B44C(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  byte local_20 [20];
  
  sub_080C8D70(local_20,&DAT_080c90f4,0x12);
  sub_0800696C(param_1,param_2);
  if ((byte)(*(char *)(param_1 + 0xe) - 2U) < 4) {
    DAT_02022668 = DAT_02022668 + 1;
    if ((DAT_02022668 & 3) == 0) {
      DAT_0202266c = DAT_0202266c + 1;
    }
    if (0x11 < DAT_0202266c) {
      DAT_0202266c = 0;
    }
    sub_08001574(&UNK_087ddd20 + (uint)local_20[DAT_0202266c] * 0xc,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

