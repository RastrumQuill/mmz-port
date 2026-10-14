// sub_0802465C at 0x0802465C (thumb)

undefined4 sub_0802465C(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined *)(param_1 + 0xc0);
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 4;
    *(undefined *)(param_1 + 0xc3) = *puVar1;
    *puVar1 = *puVar1;
    sub_08018BE8(param_1,*(byte *)(param_1 + 0x115) + 1);
  }
  return in_lr;
}

