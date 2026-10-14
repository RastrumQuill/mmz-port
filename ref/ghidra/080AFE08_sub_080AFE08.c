// sub_080AFE08 at 0x080AFE08 (thumb)

void sub_080AFE08(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\x04') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b69d4;
  }
  else if (cVar1 == '\b') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b69dc;
  }
  else if (cVar1 == '\f') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b69e4;
  }
  else if (cVar1 == '\x10') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b69ec;
  }
  else if (cVar1 == '\x14') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b69f4;
  }
  else if (cVar1 == '\x16') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b69fc;
  }
  else if (cVar1 == '\x18') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return;
}

