// sub_080188DC at 0x080188DC (thumb)

undefined4 sub_080188DC(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022ad4 & 1) == 0) {
    sub_080C8A9C(*(undefined4 *)(param_1 + 0x20),param_1,
                 *(undefined4 *)(&DAT_082a8250 + (uint)*(byte *)(param_1 + 0x10) * 4));
    if (DAT_02022b3e != -1) {
      DAT_02022b3e = DAT_02022b3e + 1;
    }
  }
  return in_lr;
}

