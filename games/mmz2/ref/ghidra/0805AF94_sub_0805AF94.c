// sub_0805AF94 at 0x0805AF94 (thumb)

undefined4 sub_0805AF94(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa913);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = *(int *)(param_1 + 0x54) + -0x1800;
    }
    else {
      local_18 = *(int *)(param_1 + 0x54) + 0x1800;
    }
    local_14 = *(undefined4 *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0xbe) == '\0') {
      sub_08002638(&DAT_08433318,(DAT_0202e62c - 0x300) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433324,(DAT_0202e42c - 7) * 0x20 + 0x200);
      sub_080A3DB4(&local_18,0,*(byte *)(param_1 + 10) >> 4 & 1,9);
    }
    else {
      sub_08002638(&DAT_0843332c,(DAT_0202e62e - 0x300) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433338,(DAT_0202e42e - 7) * 0x20 + 0x200);
      sub_080A3DB4(&local_18,1,*(byte *)(param_1 + 10) >> 4 & 1,6);
    }
    *(undefined *)(param_1 + 0x12) = 0;
    iVar1 = *(int *)(param_1 + 200);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x11) = 1;
      *(int *)(param_1 + 200) = 0;
    }
    *(char *)(param_1 + 0xbe) = '\0';
    sub_08015518(4,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

