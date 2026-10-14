// sub_0810FA8C at 0x0810FA8C (thumb)

undefined4 sub_0810FA8C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar3 = (uint)bVar1;
  if (uVar3 == 0) {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = uVar3;
    sub_08002348();
    DAT_02000a40 = (ushort)bVar1;
    DAT_02000a5e = 0xff;
    uVar2 = (ushort)bVar1;
    DAT_02000a50 = DAT_02000a40;
    DAT_02000a60 = uVar2;
    DAT_03002ac0 = uVar2;
    sub_0810CE60();
    DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x100;
    sub_080012EC(1);
    sub_08112080(&DAT_0202f610,0xe00);
    DAT_02035870 = (ushort)(byte)(&DAT_08885be4)[*(ushort *)(param_1 + 0x12) >> 1 & 3];
    sub_080012B8(1,0x8112059);
    *(undefined2 *)(param_1 + 0x24c) = 1;
    *(undefined *)(param_1 + 0x24e) = 0;
    *(undefined *)(param_1 + 0x24f) = 0;
    *(ushort *)(param_1 + 0x250) = uVar2;
    *(ushort *)(param_1 + 0x252) = DAT_02000760;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (uVar3 != 1) {
    return in_lr;
  }
  if (((*(ushort *)(param_1 + 0x252) ^ DAT_02000760) & DAT_02000760 & 0xb) == 0) {
    *(ushort *)(param_1 + 0x252) = DAT_02000760;
    sub_0810FC3C(param_1);
  }
  else {
    sub_08001390(1);
  }
  if (DAT_03002a80 == '\x01') {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = 0;
    sub_08002348();
    DAT_02000a40 = 0;
    DAT_02000a50 = 0;
    DAT_02000a5e = 0xff;
    DAT_02000a60 = 0;
    DAT_03002ac0 = 0;
    sub_0810CE60();
    sub_080029C0();
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    sub_0810F0B0(&DAT_0202f3b0,1);
    sub_080013B0(0x80007cd);
  }
  return in_lr;
}

