// sub_080B0AC4 at 0x080B0AC4 (thumb)

undefined4 sub_080B0AC4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
     (((int)(uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xd4) >> (uint)*(byte *)(param_1 + 0x11) & 1U
      ) == 0)) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885feb0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B0C28(param_1);
  }
  return in_lr;
}

