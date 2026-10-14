// sub_0802DB44 at 0x0802DB44 (thumb)

undefined4 sub_0802DB44(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0xbc);
  if (*pcVar1 == '\x1f') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0802DC40(param_1);
  }
  else {
    sub_0802E244(param_1);
    *(char *)(param_1 + 0xd8) = *(char *)(param_1 + 0xd8) + '\x01';
    if (*pcVar1 == '\a') {
      sub_080014E8(&DAT_084b8398,(DAT_02022efc - 0x290) * 0x20 + 0x10000);
      sub_0800179C(&DAT_084b83a4,(DAT_02022f5e - 7) * 0x20 + 0x200);
      sub_080014E8(&DAT_084b8514,(DAT_02022f22 - 0x308) * 0x20 + 0x10000);
      sub_0800179C(&DAT_084b8520,(DAT_02022f71 - 8) * 0x20 + 0x200);
      sub_08068230(param_1,0,0x40);
      *pcVar1 = '\x0f';
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad000 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0802E184(param_1);
  }
  return in_lr;
}

