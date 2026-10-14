// sub_0808D724 at 0x0808D724 (thumb)

undefined4 sub_0808D724(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    pbVar5 = (byte *)(param_1 + 0xb9);
    sub_08017700(param_1,*(undefined2 *)(&DAT_08365ac8 + (uint)*pbVar5 * 2));
    if (*pbVar5 == 0) {
      uVar1 = 8;
    }
    else {
      uVar1 = 0x18;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    sub_08007390(param_1 + 0x74,&DAT_08365960 + (uint)(byte)(&DAT_08365ad4)[*pbVar5] * 0x18);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = sub_0800A5A4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + 0x400);
  if (iVar3 == 0) {
    iVar3 = sub_0800A5A4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + 0x400);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
  if ((iVar3 == 0) || (cVar2 = sub_0808CD20(param_1), cVar2 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x200 + (uVar4 * 0x40 >> 0x16);
  }
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar2 == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_24 = (uVar4 * 2 >> 0x11 & 0x1fff) + *(int *)(param_1 + 0x54) + -0x1000;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    local_20 = (uVar4 * 2 >> 0x11 & 0x1fff) + *(int *)(param_1 + 0x58) + -0x1000;
    sub_080B2484(3,&local_24);
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_0800471C(0x56);
    pbVar5 = (byte *)(param_1 + 0xb9);
    sub_080C3D1C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),*pbVar5,
                 *(byte *)(param_1 + 10) >> 4 & 1);
    *pbVar5 = *pbVar5 + 1;
    *(undefined *)(param_1 + 0xe) = 0;
    if (5 < *pbVar5) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

