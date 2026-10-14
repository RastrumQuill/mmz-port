// sub_08093744 at 0x08093744 (thumb)

undefined4 sub_08093744(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x10) == '\x02';
  if (bVar3) {
    *(undefined *)(param_1 + 0x10) = 0;
  }
  *(bool *)(param_1 + 0x11) = bVar3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08366684)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_08366634,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8093611;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    bVar3 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    if (bVar3) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(bool *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    sub_080934AC(param_1);
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar2 = 3;
    }
    else {
      uVar2 = 0;
    }
    *(undefined *)(param_1 + 0xbc) = uVar2;
  }
  sub_08093838(param_1);
  return in_lr;
}

