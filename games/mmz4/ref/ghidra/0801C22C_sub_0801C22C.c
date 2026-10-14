// sub_0801C22C at 0x0801C22C (thumb)

undefined4 sub_0801C22C(int param_1)

{
  undefined4 in_lr;
  
  DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
  *(undefined2 *)(param_1 + 0x68) =
       *(undefined2 *)(&DAT_08838c14 + (DAT_0203587c >> 0x10 & 0x1f) * 2);
  sub_08001EA4(&DAT_08fa4a2c,0x4000);
  sub_08002208(&DAT_08fa4a38,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  DAT_0202dad5 = DAT_0202dad5 + '\x01';
  return in_lr;
}

