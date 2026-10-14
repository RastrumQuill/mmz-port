// sub_0801878C at 0x0801878C (thumb)

undefined4 sub_0801878C(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022ad4 & 1) == 0) {
    sub_080C8A9C(*(undefined4 *)(param_1 + 0x20),param_1,
                 *(undefined4 *)(&DAT_082a8244 + (uint)*(byte *)(param_1 + 0x11) * 4));
    if (DAT_02022b3c != -1) {
      DAT_02022b3c = DAT_02022b3c + 1;
    }
  }
  return in_lr;
}

