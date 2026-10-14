// sub_0808FA24 at 0x0808FA24 (thumb)

undefined4 sub_0808FA24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x98) = 0x8090dcd;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      uVar1 = 0xffffff34;
    }
    else {
      uVar1 = 0xcc;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    uVar1 = sub_0800A104(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(param_1 + 0xb8) = 1;
      iVar2 = sub_0800A3C4(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58),0,0);
      iVar3 = -0x2000;
    }
    else {
      *(undefined *)(param_1 + 0xb8) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      iVar2 = sub_0800A4B4(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
      iVar3 = 0x2000;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    if (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58)) {
      uVar1 = 0xffffff34;
    }
    else {
      uVar1 = 0xcc;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  iVar2 = sub_08063614(param_1);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar4 = &DAT_08365dd0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar4 = &DAT_08365e00;
    }
    sub_0800736C(param_1 + 0x74,puVar4,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar4 = &DAT_08365dd0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar4 = &DAT_08365e00;
    }
    sub_0800736C(param_1 + 0x74,puVar4,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_08017700(param_1,0x7e00);
    }
    else {
      sub_08017700(param_1,0x7e06);
    }
    sub_080177F4(param_1);
  }
  sub_0808FBFC(param_1);
  return in_lr;
}

