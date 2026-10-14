// sub_0807B86C at 0x0807B86C (thumb)

undefined4 sub_0807B86C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5010);
      local_18 = *(int *)(&DAT_08340300 + (uint)*(byte *)(param_1 + 0x10) * 8);
      local_14 = *(int *)(&DAT_08340304 + (uint)*(byte *)(param_1 + 0x10) * 8);
      sub_080B6910(param_1,&local_18,1,0);
      local_18 = *(int *)(param_1 + 0x54) +
                 *(int *)(&DAT_08340300 + (uint)*(byte *)(param_1 + 0x10) * 8);
      local_14 = *(int *)(param_1 + 0x58) +
                 *(int *)(&DAT_08340304 + (uint)*(byte *)(param_1 + 0x10) * 8);
      sub_0807BDDC(&local_18,*(undefined *)(param_1 + 0x10),0);
      sub_080032EC(0x71);
    }
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

