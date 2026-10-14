// sub_080BB8F0 at 0x080BB8F0 (thumb)

undefined4 sub_080BB8F0(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x2901);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    pbVar2 = (byte *)(param_1 + 0x74);
    *pbVar2 = -*(char *)(*(int *)(param_1 + 0x28) + 0x24);
    sVar1 = *(short *)((int)&DAT_080fe64c + ((*pbVar2 + 0x40) * 0x1000000 >> 0x17));
    *(int *)(param_1 + 0x54) =
         ((int)(short)(&DAT_080fe64c)[*pbVar2] * *(int *)(param_1 + 0x78) >> 8) +
         *(int *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x58) =
         ((int)sVar1 * *(int *)(param_1 + 0x78) >> 8) + *(int *)(param_1 + 0x80);
    *(byte *)(param_1 + 0x24) = -*pbVar2;
    sub_080177F4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

