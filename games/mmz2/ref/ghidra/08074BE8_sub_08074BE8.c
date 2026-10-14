// sub_08074BE8 at 0x08074BE8 (thumb)

undefined4 sub_08074BE8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if ((*(byte *)(param_1 + 0xd) < 4) && (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x15')) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833f8f0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08074A90(param_1);
  }
  return in_lr;
}

