// sub_080B5DE4 at 0x080B5DE4 (thumb)

undefined4 sub_080B5DE4(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc) == '\x01') &&
     (sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b81fc + (uint)*(byte *)(param_1 + 0xd) * 4)),
     *(char *)(param_1 + 0xc) == '\x01')) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xbc) + -0x7800 + DAT_02022c7c;
    iVar2 = *(int *)(param_1 + 0xc0) + -0x5000 + DAT_02022c80;
    *(int *)(param_1 + 0x50) = iVar2;
    *(int *)(param_1 + 0x50) =
         iVar2 + (short)(&DAT_080c8e24)[(uint)*(byte *)(param_1 + 0x12) * 8] * 4;
    if (*(char *)(param_1 + 0xd) == '\0') {
      uVar1 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),0);
      *(undefined *)(param_1 + 0x13) = uVar1;
    }
    sub_080B50EC(param_1);
  }
  return in_lr;
}

