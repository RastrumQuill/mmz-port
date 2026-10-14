// sub_0806F54C at 0x0806F54C (thumb)

undefined4 sub_0806F54C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202e918 & 8) != 0)) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885921c + (uint)*(byte *)(param_1 + 0xd) * 4));
    local_10 = *(undefined4 *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + 0xc000;
    sub_08018EAC(&local_10);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806F5CC(param_1);
  }
  return in_lr;
}

