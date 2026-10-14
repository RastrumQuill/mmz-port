// sub_08111598 at 0x08111598 (thumb)

undefined4 sub_08111598(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 5);
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
    sub_080012B8(1,0x8112059);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (uVar2 != 1) {
    return in_lr;
  }
  if (DAT_03002a80 == '\x01') {
    sub_0810F0B0(&DAT_0202f3b0,1);
    sub_080013B0(0x80007cd);
  }
  return in_lr;
}

