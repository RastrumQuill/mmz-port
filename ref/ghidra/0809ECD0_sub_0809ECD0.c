// sub_0809ECD0 at 0x0809ECD0 (thumb)

undefined4 sub_0809ECD0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x50) = *(undefined4 *)(param_1 + 0x50);
  if (((int)(uint)*(byte *)(iVar1 + 0xe0) >> *(sbyte *)(param_1 + 0x11) & 1U) != 0) {
    if (*(char *)(iVar1 + 0xe1) == '\0') {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    *(byte *)(iVar1 + 0xe2) = (byte)(1 << *(sbyte *)(param_1 + 0x11)) | *(byte *)(iVar1 + 0xe2);
  }
  return in_lr;
}

