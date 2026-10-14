// sub_08066ED8 at 0x08066ED8 (thumb)

undefined4 sub_08066ED8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),pbVar4,0);
    *(int *)(param_1 + 0x58) = iVar1 + 0xe00;
    if (((DAT_02002444 & 8) != 0) && (uVar2 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) == 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_083626b0;
      uVar5 = 10;
      goto LAB_08066fd0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar3 = &DAT_083626b0;
  }
  else {
    if (((DAT_02002444 & 8) != 0) && (uVar2 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) == 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_083626e0;
      uVar5 = 10;
      goto LAB_08066fd0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar3 = &DAT_083626e0;
  }
  uVar2 = 0;
  uVar5 = 6;
LAB_08066fd0:
  sub_0800736C(param_1 + 0x74,puVar3,param_1 + 0x54,uVar5);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = 0x80680a5;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xbb) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  iVar1 = sub_08063614(param_1);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08017700(param_1,0x602);
    }
    else {
      sub_08017700(param_1,0x601);
    }
    sub_080177F4(param_1);
  }
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  sub_08067090(param_1);
  return in_lr;
}

