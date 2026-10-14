// sub_08027EB0 at 0x08027EB0 (thumb)

undefined4 sub_08027EB0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 2;
  if ((int)*(short *)(param_1 + 0x2e8) * (int)*(char *)(param_1 + 0x2e6) < 1) {
    iVar2 = 1;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333bf8 + iVar2 * 4));
  if (*(byte *)(param_1 + 0x17f) - 0x69 < 2) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(byte *)(param_1 + 0x17f) == 0x69) {
        sub_0801E9FC(param_1,0x6a);
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar1 << 4);
        if (uVar1 == 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        }
      }
      else {
        *(char *)(param_1 + 0xf) = (char)iVar2;
      }
    }
  }
  else {
    sub_0801E9FC(param_1,0x69);
  }
  return in_lr;
}

