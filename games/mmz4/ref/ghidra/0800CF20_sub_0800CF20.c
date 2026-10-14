// sub_0800CF20 at 0x0800CF20 (thumb)

undefined4 sub_0800CF20(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] = (ushort)uVar2 | 0x8047;
    local_20[0] = 0;
    sub_081284E4(local_20,(uVar2 & 0x1f00) * 8 + 0x6000000,0x1000200);
    sub_081284E4(&DAT_08b3b2c0,
                 &DAT_06000800 +
                 ((ushort)(&DAT_02000a04)[(uint)(iVar1 << 0x10) >> 0x14] & 0x1f00) * 8,0x200);
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0xfb;
    DAT_02000a5a = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = (DAT_0202dae0 >> 8) - *(int *)(param_1 + 0x34);
  uVar2 = iVar1 - 0x50;
  if (((int)uVar2 < 0) && (-0x100 < (int)uVar2)) {
    DAT_02000a56 = ((short)iVar1 + 0xaf) * 0x100 | 0xff;
  }
  else if (uVar2 < 0x100) {
    DAT_02000a56 = (ushort)uVar2 & 0xff;
  }
  else {
    DAT_02000a56 = 0xff;
  }
  return in_lr;
}

