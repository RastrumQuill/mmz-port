// sub_08111BE8 at 0x08111BE8 (thumb)

undefined4 sub_08111BE8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 6);
  uVar2 = (uint)bVar1;
  if (uVar2 == 0) {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = uVar2;
    sub_08002348();
    DAT_02000a40 = (ushort)bVar1;
    DAT_02000a5e = 0xff;
    DAT_02000a60 = (ushort)bVar1;
    DAT_02000a50 = DAT_02000a40;
    DAT_03002ac0 = DAT_02000a60;
    sub_0810CE60();
    DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x100;
    sub_080012EC(1);
    sub_08002B5C(0x95);
    sub_08112080(&DAT_0202f610,(uint)*(byte *)(param_1 + 0x246) * 0x100 + 7);
    sub_080012B8(1,0x8112059);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (uVar2 != 1) {
    return in_lr;
  }
  if (DAT_03002a80 == '\x01') {
    *(undefined *)(param_1 + 6) = 0;
    if (DAT_02000aa8 == '\0') {
      sub_08002B10(0x95);
      *(undefined *)(param_1 + 5) = 1;
    }
    else {
      *(undefined *)(param_1 + 5) = 4;
    }
  }
  return in_lr;
}

