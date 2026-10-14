// sub_080FEAEC at 0x080FEAEC (thumb)

undefined4 sub_080FEAEC(int param_1)

{
  undefined4 in_lr;
  
  if (0x47 < DAT_0202daec) {
    DAT_0202daec = 0x48;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08867ff0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

