// sub_080C4D98 at 0x080C4D98 (thumb)

undefined4 sub_080C4D98(int param_1)

{
  undefined4 in_lr;
  
  if (((DAT_02004ca8 & 8) == 0) || (*(short *)(param_1 + 2) == 0x202)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cc36c + (uint)*(byte *)(param_1 + 2) * 4));
    if (*(byte *)(param_1 + 1) < 2) {
      sub_080C582C(param_1);
      sub_08001904(0x76,0);
      sub_08001904(0x77,0);
      sub_080B498C(&DAT_0202b5a0,(int)*(char *)(param_1 + 0x9e4),*(undefined4 *)(param_1 + 0x9e0));
      sub_08001574(param_1 + 0xae0,(DAT_02004f36 & 0x1f00) << 3);
      return in_lr;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  sub_080C5734(param_1);
  return in_lr;
}

