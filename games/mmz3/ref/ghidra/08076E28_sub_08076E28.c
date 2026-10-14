// sub_08076E28 at 0x08076E28 (thumb)

undefined4 sub_08076E28(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  sub_080B2484(2,&local_10);
  sub_080B7A3C(param_1,&local_10,&DAT_08363a1a,2);
  sub_0800471C(0x122);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

