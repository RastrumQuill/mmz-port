// sub_08087BA4 at 0x08087BA4 (thumb)

undefined4 sub_08087BA4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((DAT_02022b64 & 8) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x13) == '\0') {
      cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xf) < 2) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar2 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

