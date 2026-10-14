// sub_080C8B48 at 0x080C8B48 (thumb)

undefined4 sub_080C8B48(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080C8E80(param_1);
    sub_080127E4(param_1,0x5703);
    uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
    iVar3 = uVar2 * 2 + -1;
    local_3c = *(int *)(param_1 + 0x54) + iVar3 * 0xe00;
    local_38 = *(int *)(param_1 + 0x58) + -0x2e00;
    iVar4 = uVar2 * 0x10;
    sub_080B0ACC(&local_3c,&DAT_08348e34,0,iVar4);
    local_3c = *(int *)(param_1 + 0x54) + iVar3 * -0x400;
    sub_080B0ACC(&local_3c,&DAT_08348e50,0,iVar4);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_3c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_38 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x2e00;
    local_24 = &DAT_0202e188;
    sub_080AC60C(1,&local_3c);
    uVar2 = *local_24 * 0x343fd + 0x269ec3;
    local_3c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *local_24 = uVar2 & 0x7fffffff;
    local_38 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x2e00;
    sub_080AC60C(2,&local_3c);
    (&DAT_0202ebb4)[*(ushort *)(&DAT_08348e14 + (uint)*(byte *)(param_1 + 0x11) * 2) >> 3] =
         (byte)(1 << (*(ushort *)(&DAT_08348e14 + (uint)*(byte *)(param_1 + 0x11) * 2) & 7)) |
         (&DAT_0202ebb4)[*(ushort *)(&DAT_08348e14 + (uint)*(byte *)(param_1 + 0x11) * 2) >> 3];
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    sub_080C8E80(param_1);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_34 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_30 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0x1f) * 0x100 + -0x2700;
    sub_080AC60C(2);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_080C8E80(param_1);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_2c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_28 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100 + -0x1800;
    sub_080AC60C(1,&local_2c);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_2c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_28 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100 + -0x1800;
    sub_080AC60C(2,&local_2c);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_2c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_28 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100 + -0x1800;
    sub_080AC60C(2,&local_2c);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    sub_0801DD2C(0,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

