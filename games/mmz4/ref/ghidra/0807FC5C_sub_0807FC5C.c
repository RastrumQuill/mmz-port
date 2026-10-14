// sub_0807FC5C at 0x0807FC5C (thumb)

undefined4 sub_0807FC5C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xc1) != '\0') {
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
    }
    if (*(char *)(param_1 + 0xc3) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        sub_0801CF00(param_1,0x1a03);
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        sub_0801CF00(param_1,0x1a05);
        *(undefined *)(param_1 + 0x12) = 0x18;
        sub_080D6390(param_1,*(undefined *)(param_1 + 0xc2));
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885a818 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

