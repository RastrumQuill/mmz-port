// sub_080D17A8 at 0x080D17A8 (thumb)

undefined4 sub_080D17A8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      local_24 = *(int *)(param_1 + 0x54);
      local_20 = *(int *)(param_1 + 0x58) + -0x1800;
      sub_080B5F14(&local_24,&DAT_0836d2b0,0,*(byte *)(param_1 + 10) & 0x10);
      sub_080B5F14(&local_24,&DAT_0836d2cc,0,*(byte *)(param_1 + 10) & 0x10);
      sub_080B5F14(&local_24,&DAT_0836d2e8,0,*(byte *)(param_1 + 10) & 0x10);
      local_20 = *(int *)(param_1 + 0x58) + -0x1000;
      sub_080B2484(1,&local_24);
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x58) + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      local_1c = 0x343fd;
      sub_080B2484(2,&local_24);
      uVar3 = local_1c * DAT_0202f608 + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar3 = local_1c * (uVar3 & 0x7fffffff) + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x58) + (uVar3 * 2 >> 0x11 & 0x1f) * -0x100;
      sub_080B2484(2,&local_24);
      sub_0800471C(0x2a);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      goto LAB_080d19a0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202fa36 = 0x284;
    DAT_0202f836 = 5;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0800393C(&DAT_085d7a74,0x11080);
      sub_08003E14(&DAT_085d7a80,(DAT_0202f836 - 4) * 0x20 + 0x200);
    }
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_08017700(param_1,0x1301);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d298,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    return in_lr;
  }
  sub_08017700(param_1,0x1303);
LAB_080d19a0:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

