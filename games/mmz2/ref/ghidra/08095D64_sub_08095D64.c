// sub_08095D64 at 0x08095D64 (thumb)

undefined4 sub_08095D64(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  
  bVar3 = *(byte *)(param_1 + 0xf);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080127E4(param_1,0x903);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_28 = *(int *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x1800;
    pbVar2 = (byte *)(param_1 + 0xbc);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B0ACC(&local_28,&DAT_08342c90,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B0ACC(&local_28,&DAT_08342cac,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B0ACC(&local_28,&DAT_08342cc8,0,bVar3);
    local_24 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080AC60C(1,&local_28);
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x54) + (0x10 - (uVar1 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
    local_20 = 0x343fd;
    local_1c = &DAT_0202e188;
    sub_080AC60C(2,&local_28);
    uVar1 = local_20 * *local_1c + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x54) + (0x10 - (uVar1 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar1 = local_20 * (uVar1 & 0x7fffffff) + 0x269ec3;
    *local_1c = uVar1 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
    sub_080AC60C(2,&local_28);
    sub_080032EC(0x2a);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

