// sub_08099C70 at 0x08099C70 (thumb)

undefined4 sub_08099C70(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar3 + 0x31) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08366eb4);
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x22) = 1;
      sub_08017700(param_1,0x1800);
      uVar2 = *(byte *)(param_1 + 0x12) ^ 1;
      if (uVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar2 = uVar2 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * -0x2c0 + 0x160;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] / 2;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x04';
    sub_080177F4(param_1);
    if (0x13000 < *(int *)(param_1 + 0x54) - 0xd000U) {
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined *)(iVar3 + 0x32) = 0;
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

