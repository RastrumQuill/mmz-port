// sub_08039294 at 0x08039294 (thumb)

undefined4 sub_08039294(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*(undefined2 *)(&DAT_0835cab8 + (uint)*(byte *)(param_1 + 0x10) * 2));
  cVar1 = sub_08034818(uVar2,0x2f);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xc0) = 1;
  }
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,
               &DAT_0835cac8 +
               (uint)*(byte *)(param_1 + 0xc0) * 0x78 + (uint)*(byte *)(param_1 + 0x10) * 0x18,
               param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8039595;
  sub_08039348(param_1);
  return in_lr;
}

