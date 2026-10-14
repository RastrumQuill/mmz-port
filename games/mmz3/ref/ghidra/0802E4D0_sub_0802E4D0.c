// sub_0802E4D0 at 0x0802E4D0 (thumb)

undefined4 sub_0802E4D0(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x127) = 0;
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x2901);
    sub_08039D38(param_1,2);
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 1;
  sub_08034558(param_1,0x2901);
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2901) {
    sub_080177CC(param_1,0x2901,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x127) = 0xff;
    *(undefined *)(param_1 + 0xec) = 0;
    uVar1 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar1);
  }
  return in_lr;
}

