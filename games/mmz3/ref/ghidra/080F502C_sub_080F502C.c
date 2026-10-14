// sub_080F502C at 0x080F502C (thumb)

undefined4 sub_080F502C(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0xdcc);
  bVar1 = *(byte *)(param_1 + 0xdce);
  uVar4 = (uint)(bVar1 >> 3);
  if ((byte)(*pbVar2 - 3) < 3) {
    if (uVar4 == 0) {
      if (*(char *)(param_1 + 0xdcf) == -1) {
        *(byte *)(param_1 + 0xdcf) = *pbVar2 - 3;
        sub_080040A8(*(undefined *)(param_1 + 0xdcf),0);
      }
      else if ((uint)*(byte *)(param_1 + 0xdcf) != *pbVar2 - 3) {
        sub_08004230((uint)*(byte *)(param_1 + 0xdcf));
        sub_080040A8(3,0);
        sub_080041E4(3);
        sub_08004230(3);
        *(byte *)(param_1 + 0xdcf) = *pbVar2 - 3;
        sub_080040A8(*(undefined *)(param_1 + 0xdcf),0);
      }
      sub_080041E4(*(undefined *)(param_1 + 0xdcf));
    }
    else {
      *(byte *)(param_1 + 0xdce) = bVar1 + 8;
    }
  }
  else {
    *(byte *)(param_1 + 0xdce) = bVar1 + 1;
    if (*(char *)(param_1 + 0xdcf) != -1) {
      sub_08004230();
      sub_080040A8(3,0);
      sub_080041E4(3);
      sub_08004230(3);
      *(undefined *)(param_1 + 0xdcf) = 0xff;
    }
  }
  if (*(char *)(param_1 + 0xdce) < '\0') {
    *(undefined *)(param_1 + 0xdce) = 0;
  }
  uVar3 = (uint)(*(byte *)(param_1 + 0xdce) >> 3);
  if (uVar4 != uVar3) {
    sub_0800393C(&DAT_08547280 + (uint)(byte)(&DAT_0838ba7c)[uVar3] * 0x14,
                 (DAT_020023c6 & 0xc) << 0xc);
    sub_08003E14(&DAT_0854728c + (uint)(byte)(&DAT_0838ba7c)[uVar3] * 0x14,0);
    if ((uint)(byte)(&DAT_0838ba8c)[uVar3] != (uint)(byte)(&DAT_0838ba8c)[uVar4]) {
      sub_080F381C(param_1 + 0xed8,
                   (undefined *)
                   (*(int *)(&DAT_085222a0 + (uint)(byte)(&DAT_0838ba8c)[uVar3] * 4) +
                   (int)(&DAT_085222a0 + (uint)(byte)(&DAT_0838ba8c)[uVar3] * 4)),0xc,7);
      sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
    }
  }
  return in_lr;
}

