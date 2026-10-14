// sub_080AB6C4 at 0x080AB6C4 (thumb)

undefined4 sub_080AB6C4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x8a01);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083457f4,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar2 = 0;
    do {
      sub_080BCC7C(param_1,0,uVar2 & 0xff);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xd);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080BCC7C(param_1,1,(&DAT_0834580c)[*(byte *)(param_1 + 0x12) >> 4 & 3]);
    if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
      sub_08091380(param_1 + 0x54,*(byte *)(param_1 + 0x12) >> 4 & 1,0);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0xf9 < bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080AB258(param_1);
  }
  return in_lr;
}

