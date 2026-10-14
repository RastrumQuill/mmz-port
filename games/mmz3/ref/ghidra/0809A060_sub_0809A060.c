// sub_0809A060 at 0x0809A060 (thumb)

undefined4 sub_0809A060(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x31) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08366efc);
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0xef00);
      uVar3 = *(byte *)(param_1 + 0x12) ^ 1;
      if (uVar3 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar3 = uVar3 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * -0x1c0 + 0xe0;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 >> 2);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x03';
    sub_080177F4(param_1);
    if (0x13000 < *(int *)(param_1 + 0x54) - 0xd000U) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_08366e9c);
  }
  return in_lr;
}

