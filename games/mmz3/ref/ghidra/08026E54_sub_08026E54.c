// sub_08026E54 at 0x08026E54 (thumb)

undefined8 sub_08026E54(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar1 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x58) + (int)*(short *)(param_2 + 2) +
                       ((int)((uint)*(ushort *)(param_2 + 6) << 0x10) >> 0x11) + 1);
  if (uVar1 != 0x800e) {
    if ((*(char *)(param_1 + 0xd) == '\x03') && ((ushort)((uVar1 & 0xf) - 1) < 0xd)) {
      uVar3 = 3;
      goto LAB_08026eca;
    }
    sVar2 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + (int)*(short *)(param_2 + 2));
    if (sVar2 == -0x7ff1) {
      uVar3 = 1;
      goto LAB_08026eca;
    }
    if (sVar2 != -0x7ff2) {
      uVar3 = 0;
      goto LAB_08026eca;
    }
  }
  uVar3 = 2;
LAB_08026eca:
  return CONCAT44(in_lr,uVar3);
}

