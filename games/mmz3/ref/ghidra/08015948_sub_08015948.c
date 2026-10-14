// sub_08015948 at 0x08015948 (thumb)

undefined4 sub_08015948(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080159c6;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar4 = (uVar2 << 0x10) >> 0x14;
    uVar3 = *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar4] = (ushort)uVar3 | 0x4046;
    (&DAT_020023cc)[uVar4] = 0;
    sub_08003B84(0,(uVar3 & 0x1f00) << 3,0x1000);
    *(undefined *)(param_1 + 0x68) = DAT_0202f4a5;
    *(undefined *)(param_1 + 0x69) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202f4a4 == '\0') {
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080159c6:
  uVar4 = (uVar2 & 0xffff) >> 4;
  uVar3 = *(uint *)(param_1 + 100);
  (&DAT_020023c4)[uVar4] = (ushort)uVar3 | 0x4046;
  (&DAT_020023cc)[uVar4] = 0;
  local_20[0] = 0;
  sub_080FE110(local_20,(uVar3 & 0x1f00) * 8 + 0x6000000,0x1000400);
  sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x4a,0,0);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

