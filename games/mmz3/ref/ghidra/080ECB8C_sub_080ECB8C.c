// sub_080ECB8C at 0x080ECB8C (thumb)

undefined4 sub_080ECB8C(int param_1)

{
  undefined4 in_lr;
  
  DAT_020023c0 = DAT_020023c0 | 0x1200;
  DAT_020023c6 = 0x1807;
  DAT_020023d0 = 0;
  sub_0800393C(&DAT_08547ca8,0x4000);
  sub_08003E14(&DAT_08547cb4,0);
  sub_0800393C(&DAT_08547cbc,(DAT_020023c6 & 0xc) * 0x1000);
  sub_08003E14(&DAT_08547cc8,0);
  sub_08004340(0x12,&DAT_085222a0,0x82,0,0);
  *(undefined2 *)(param_1 + 0x23c) = 0;
  return in_lr;
}

