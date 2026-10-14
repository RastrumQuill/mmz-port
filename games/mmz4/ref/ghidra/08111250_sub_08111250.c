// sub_08111250 at 0x08111250 (thumb)

undefined4 sub_08111250(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  DAT_02000a40 = 0;
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_02000a00 = DAT_02000a00 & 0xb0ff;
  DAT_02000a04 = 0x4008;
  sub_08002624(0x89);
  sub_0810CF20();
  bVar1 = *(byte *)(param_1 + 0x254);
  if (bVar1 == 1) {
    uVar2 = 0x100;
LAB_081112f4:
    sub_08112080(&DAT_0202f610,uVar2);
    sub_0810F0B0(param_1,5);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        sub_08112080(&DAT_0202f610,0);
        sub_0810F0B0(param_1,0x1000002);
        return in_lr;
      }
    }
    else {
      if (bVar1 == 2) {
        uVar2 = 6;
        goto LAB_081112f4;
      }
      if (bVar1 == 3) {
        sub_0810F0B0(param_1,6);
        return in_lr;
      }
    }
    if ((*(ushort *)(param_1 + 0x12) & 1) == 0) {
      sub_0810F0B0(param_1,2);
    }
    else {
      sub_0810F0B0(param_1,3);
    }
  }
  return in_lr;
}

