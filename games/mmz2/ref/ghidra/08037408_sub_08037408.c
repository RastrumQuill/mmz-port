// sub_08037408 at 0x08037408 (thumb)

undefined4 sub_08037408(int param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if ((9 < *(byte *)(param_1 + 0xd)) || (*(byte *)(param_1 + 0xd) == 8)) {
    *(undefined *)(param_1 + 0x188) = 0;
    *(undefined *)(param_1 + 0x189) = 0;
    return in_lr;
  }
  uVar1 = DAT_0202ec34;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar1 = DAT_0202ec36;
  }
  if ((uVar1 & 0x8000) != 0) {
    return in_lr;
  }
  cVar2 = sub_08034BB8(param_1,*(undefined *)(param_1 + 0x212));
  if ((cVar2 == '\0') ||
     ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(byte *)(param_1 + 0x188) + 1;
    if (0xff < uVar3) goto LAB_08037496;
  }
  *(char *)(param_1 + 0x188) = (char)uVar3;
LAB_08037496:
  bVar4 = 0x10;
  if (*(char *)(param_1 + 0x1f5) == '\x01') {
    bVar4 = 0x80;
  }
  if (((*(char *)(param_1 + 0x212) == *(char *)(param_1 + 0x213)) ||
      (cVar2 = sub_08034BB8(param_1,*(undefined *)(param_1 + 0x213)), cVar2 == '\0')) ||
     ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & bVar4) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(byte *)(param_1 + 0x189) + 1;
    if (0xff < uVar3) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0x189) = (char)uVar3;
  return in_lr;
}

