// sub_08055668 at 0x08055668 (thumb)

undefined4 sub_08055668(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar4 = bVar1 & 1;
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080127E4(param_1,0xa614);
    sub_08006E08(param_1 + 0x74,&DAT_0833c378);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    sub_080128D4(param_1);
  }
  puVar3 = (ushort *)(param_1 + 0x50);
  uVar2 = *puVar3 + 8;
  if (uVar2 < 0x16a) {
    *puVar3 = uVar2;
    *(ushort *)(param_1 + 0x52) = uVar2;
  }
  else {
    *puVar3 = 0x16a;
    *(undefined2 *)(param_1 + 0x52) = 0x16a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

