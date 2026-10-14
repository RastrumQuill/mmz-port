// sub_0808D5E4 at 0x0808D5E4 (thumb)

undefined4 sub_0808D5E4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pbVar4 = (byte *)(param_1 + 0xb9);
    sub_08007390(param_1 + 0x74,&DAT_08365960 + (uint)(byte)(&DAT_08365ad4)[*pbVar4] * 0x18);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*pbVar4 == 0) {
      sub_08017700(param_1,0x7400);
    }
    else {
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365ac8 + (uint)*pbVar4 * 2));
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar1 = sub_0808CE28(param_1,*(undefined4 *)(param_1 + 0x60));
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
    iVar2 = sub_0800A5A4(*(int *)(param_1 + 0x54) + -0x1200,*(int *)(param_1 + 0x58) + 0x400);
    if ((iVar2 == 0) &&
       (iVar2 = sub_0800A5A4(*(int *)(param_1 + 0x54) + 0x1200,*(int *)(param_1 + 0x58) + 0x400),
       iVar2 == 0)) {
      *(undefined *)(param_1 + 0xbb) = 0;
      *(undefined *)(param_1 + 0xbc) = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  uVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar3) {
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

