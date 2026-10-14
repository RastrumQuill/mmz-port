// sub_08087AA4 at 0x08087AA4 (thumb)

undefined4 sub_08087AA4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080127E4(param_1,0x6b08);
    }
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54) - *(int *)(iVar1 + 0x54);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x58) - *(int *)(iVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar1 + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

