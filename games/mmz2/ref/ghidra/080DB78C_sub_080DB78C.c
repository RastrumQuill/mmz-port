// sub_080DB78C at 0x080DB78C (thumb)

undefined4 sub_080DB78C(int param_1)

{
  undefined4 in_lr;
  
  if ((**(byte **)(param_1 + 0x28) < 2) && (*(char *)(param_1 + 0x73) != '\x03')) {
    *(uint *)(param_1 + 0x54) =
         (uint)*(byte *)(param_1 + 0x12) * 0x1000 + 0x9400 +
         *(int *)(*(byte **)(param_1 + 0x28) + 8);
    sub_080128D4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DB7DC(param_1);
  }
  return in_lr;
}

