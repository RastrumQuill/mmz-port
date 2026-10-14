// sub_08086418 at 0x08086418 (thumb)

undefined4 sub_08086418(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((DAT_0202ebbb & 0x20) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    uVar3 = sub_080863B4(param_1 + 0x54,1,*(undefined *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0xb8) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    sub_08012580(param_1);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_080127E4(param_1,0x7700);
    sub_080128D4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083414d8,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8086839;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xbc) = 0;
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar3 = 0x380000;
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\x01') goto LAB_0808655a;
      uVar3 = 0x600000;
    }
    uVar4 = sub_080EEF7C(uVar3);
    *(uint *)(param_1 + 0x60) = -(uVar4 & 0xffff);
  }
LAB_0808655a:
  sub_08086568(param_1);
  return in_lr;
}

