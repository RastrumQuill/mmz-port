// sub_080652F0 at 0x080652F0 (thumb)

undefined4 sub_080652F0(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08017700(param_1,0x1303);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_28 = *(int *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + -0x1800;
    pbVar2 = (byte *)(param_1 + 0xbc);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B5F14(&local_28,&DAT_083623dc,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B5F14(&local_28,&DAT_083623f8,0,bVar3);
    bVar3 = *pbVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B5F14(&local_28,&DAT_08362414,0,bVar3);
    local_24 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080B2484(1,&local_28);
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x54) + (0x10 - (uVar1 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
    local_20 = 0x343fd;
    local_1c = &DAT_0202f608;
    sub_080B2484(2,&local_28);
    uVar1 = local_20 * *local_1c + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x54) + (0x10 - (uVar1 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar1 = local_20 * (uVar1 & 0x7fffffff) + 0x269ec3;
    *local_1c = uVar1 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 0x1f) * -0x100;
    sub_080B2484(2,&local_28);
    sub_0800471C(0x2a);
    sub_08024FE4(4,param_1 + 0x54);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
    sub_080250C4(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

