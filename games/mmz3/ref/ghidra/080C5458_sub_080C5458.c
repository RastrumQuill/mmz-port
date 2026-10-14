// sub_080C5458 at 0x080C5458 (thumb)

undefined4 sub_080C5458(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_08017700(param_1,0x5103);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 0x54) + (uVar2 * 2 >> 0x11 & 0xfff) + -0x800;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0xfff);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x68) + 0x80;
  *(int *)(param_1 + 0x68) = iVar3;
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + ((uVar2 * 2 >> 0x11 & 0xfff) - 0x800);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x58) = iVar3 + ((uVar2 * 2 >> 0x11 & 0xfff) - 0x800);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar2 << 4);
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 2) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x4d) = 0;
  *pbVar4 = *pbVar4 & 0xdf;
  if (*(byte *)(param_1 + 0x12) < 0x1e) {
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

