// sub_0805E3DC at 0x0805E3DC (thumb)

undefined4 sub_0805E3DC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa03);
    *(short *)(param_1 + 0xd2) = (short)(*(int *)(param_1 + 0x5c) >> 5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x5c) - (int)*(short *)(param_1 + 0xd2);
  *(int *)(param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

