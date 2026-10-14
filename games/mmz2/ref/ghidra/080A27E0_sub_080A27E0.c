// sub_080A27E0 at 0x080A27E0 (thumb)

undefined4 sub_080A27E0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x28) == 0) || (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    if (DAT_0202e130 != 0) {
      sub_080230FC(DAT_0202e130,*(undefined2 *)(param_1 + 0xbc));
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08344760 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

