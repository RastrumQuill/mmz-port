// sub_08039DE8 at 0x08039DE8 (thumb)

undefined4 sub_08039DE8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  short asStack_10 [4];
  
  sub_080C8D70(asStack_10,&DAT_080c927c,8);
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0x4c) + 0x1700;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x4c) + -0x1700;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08029874(param_1,&UNK_082adb00 + (uint)*(byte *)(param_1 + 0x11) * 0x1c,
                 (int)asStack_10[*(byte *)(param_1 + 0x11)]);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0xd8) = 0;
    sub_08001EAC(0x92);
  }
  sub_080297C0(param_1);
  return in_lr;
}

