// sub_08098368 at 0x08098368 (thumb)

undefined4 sub_08098368(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_0800736C(param_1 + 0x74,&DAT_08366ca0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8099935;
  puVar3 = (undefined *)(param_1 + 0xb8);
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *puVar3 = 1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *puVar3 = 0;
  }
  pbVar2 = (byte *)(param_1 + 0x4a);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *pbVar2 = *pbVar2 & 0xef;
      *puVar3 = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *pbVar2 = *pbVar2 & 0xef | 0x10;
      *puVar3 = 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar1 = sub_08063614(param_1);
  if (iVar1 != 0) {
    sub_08017700(param_1,0xd503);
    sub_080177F4(param_1);
  }
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xba) = 0;
  sub_080984D4(param_1);
  return in_lr;
}

