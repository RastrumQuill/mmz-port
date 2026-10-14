// sub_0807B708 at 0x0807B708 (thumb)

undefined4 sub_0807B708(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5008);
    local_1c = *(undefined4 *)(&DAT_083402e0 + (uint)*(byte *)(param_1 + 0x10) * 8);
    local_18 = *(undefined4 *)(&DAT_083402e4 + (uint)*(byte *)(param_1 + 0x10) * 8);
    sub_080B6910(param_1,&local_1c,0,*(undefined *)(param_1 + 0x10));
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      local_14 = *(undefined4 *)(&DAT_083402e0 + (uint)*(byte *)(param_1 + 0x10) * 8);
      local_10 = *(undefined4 *)(&DAT_083402e4 + (uint)*(byte *)(param_1 + 0x10) * 8);
      uVar2 = sub_080A4558(param_1,&local_14,0,*(undefined *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0xc0) = uVar2;
      sub_080032EC(0x34);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0xc0) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

