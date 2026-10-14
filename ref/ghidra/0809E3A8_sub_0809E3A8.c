// sub_0809E3A8 at 0x0809E3A8 (thumb)

undefined4 sub_0809E3A8(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x58) < 0x700) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

