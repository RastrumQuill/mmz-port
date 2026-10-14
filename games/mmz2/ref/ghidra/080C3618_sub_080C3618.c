// sub_080C3618 at 0x080C3618 (thumb)

undefined4 sub_080C3618(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x3001);
    uVar4 = 0;
    if ((*(int *)(param_1 + 0x54) >> 10 & 0x1fU) != 0) {
      do {
        sub_080128D4(param_1);
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < (int)(*(int *)(param_1 + 0x54) >> 10 & 0x1fU));
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0xfff < uVar4)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

