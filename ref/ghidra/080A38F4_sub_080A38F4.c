// sub_080A38F4 at 0x080A38F4 (thumb)

undefined4 sub_080A38F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc5) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08001EAC(0x4b);
    sub_080A395C(param_1);
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5ccc + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

