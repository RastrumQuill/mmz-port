// sub_080AA598 at 0x080AA598 (thumb)

undefined4 sub_080AA598(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      sub_08005784(param_1 + 0x74,&DAT_0885f59c);
      sub_0801CF00(param_1,0x9405);
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar2 >> 8;
      iVar2 = *(int *)(param_1 + 0x60) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar2 >> 8;
    }
    else {
      sub_0801CF00(param_1,0x9404);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

