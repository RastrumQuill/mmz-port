// sub_080C4424 at 0x080C4424 (thumb)

undefined4 sub_080C4424(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar2 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x18b);
    *(undefined *)(param_1 + 0xb8) = 1;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080C40F8(param_1,&local_1c);
    sub_0801CE54(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    sub_0801CF00(param_1,0x5302);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x4fff;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  *(ushort *)(param_1 + 0x50) = (0x10 - (ushort)*(byte *)(param_1 + 0x12)) * 0xe;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

