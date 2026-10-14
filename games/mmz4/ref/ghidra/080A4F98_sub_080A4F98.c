// sub_080A4F98 at 0x080A4F98 (thumb)

undefined4 sub_080A4F98(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined *local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30[0] = &DAT_0885ecec;
  local_30[1] = &DAT_0885ed40;
  local_30[2] = &DAT_0885ec7c;
  local_30[3] = &DAT_0885ed94;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  uVar2 = (uVar2 * 2 >> 0x11 & 1) + 3;
  if (uVar2 != 0) {
    do {
      local_20 = *(undefined4 *)(param_1 + 0x54);
      local_1c = *(undefined4 *)(param_1 + 0x58);
      sub_080D4898(&local_20,local_30[bVar1] + (uVar2 & 3) * 0x1c,0,uVar3 | uVar3 << 4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return in_lr;
}

