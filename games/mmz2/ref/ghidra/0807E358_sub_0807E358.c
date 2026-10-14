// sub_0807E358 at 0x0807E358 (thumb)

undefined4 sub_0807E358(int param_1)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5c0e);
    sub_08006E08(param_1 + 0x74,&DAT_08340828);
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0x40);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  bVar3 = cVar1 + 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  if (((byte)(cVar1 + 1U) < 0x10) && ((bVar3 & 3) == 0)) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_18 = *(int *)(param_1 + 0x54) + (0x10 - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
    local_14 = *(int *)(param_1 + 0x58) + (uint)*(byte *)(param_1 + 0x12) * -0x200;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    sub_080B7F60(&local_18,1,uVar2 * 2 >> 0x11 & 1);
  }
  if (0x30 < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

