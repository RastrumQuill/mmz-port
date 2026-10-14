// sub_0801BFB8 at 0x0801BFB8 (thumb)

undefined4 sub_0801BFB8(int param_1)

{
  undefined4 in_lr;
  
  DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
  *(undefined2 *)(param_1 + 0x68) =
       *(undefined2 *)(&DAT_08838b54 + (DAT_0203587c >> 0x10 & 0x1f) * 2);
  sub_08001EA4(&DAT_08fa4a18,0x4000);
  sub_08002208(&DAT_08fa4a24,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  DAT_0202dad5 = DAT_0202dad5 + '\x01';
  return in_lr;
}

