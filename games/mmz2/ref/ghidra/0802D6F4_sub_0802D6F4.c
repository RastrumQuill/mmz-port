// sub_0802D6F4 at 0x0802D6F4 (thumb)

undefined4 sub_0802D6F4(int param_1)

{
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + 0x218) & 0x40) == 0) ||
     ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 2) == 0)) {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 1;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0802D790(param_1);
  }
  else {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 3;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0802DAEC(param_1);
  }
  return in_lr;
}

